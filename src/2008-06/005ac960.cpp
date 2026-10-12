// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct type_info {
    void* vtable;
    void* data;
};

extern const type_info target_type;
extern bool (__thiscall *type_equal)(const type_info*, const type_info&);

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Payload {
    const type_info* first;
    void* second;
    void* object;
    Control* control;
};

void __cdecl manage(Payload* source, Payload* destination, int operation)
{
    if (operation == 0) {
        if (destination) {
            destination->first = source->first;
            destination->second = source->second;
            destination->object = source->object;
            destination->control = source->control;
            if (destination->control)
                _InterlockedExchangeAdd(&destination->control->strong, 1);
        }
    } else if (operation == 1) {
        Control* control = destination->control;
        if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
                control->destroy();
        }
    } else {
        destination->first = type_equal(destination->first, target_type)
            ? reinterpret_cast<const type_info*>(source) : 0;
    }
}
