// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
};

struct Entries {
    char padding[12];
    Shared* begin;
    Shared* end;
};

struct Context {
    char padding[0x154];
    Entries* entries;
    Shared* get(Shared*);
};

struct Parent {
    char padding[0x204];
    void* fallback;
    Context* getContext();
};

struct InsertService {
    char padding[12];
    Parent* parent;
    void* get();
};

void* InsertService::get()
{
    Context* context = parent ? parent->getContext() : 0;
    int count = context->entries->end - context->entries->begin;

    if (count == 1) {
        Shared temporary;
        void* result = context->get(&temporary)->object;
        Control* control = temporary.control;

        if (control) {
            if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
                control->dispose();
                if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                    control->destroy();
            }
        }
        return result;
    }

    if (count == 0)
        return parent->fallback;

    return 0;
}
