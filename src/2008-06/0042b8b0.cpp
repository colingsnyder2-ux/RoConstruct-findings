// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern bool __cdecl func_0060a2f0();
extern unsigned char managerTable;

struct Control {
    unsigned int reserved;
    volatile long references;
};

struct Argument {
    unsigned int first;
    unsigned int second;
    unsigned int third;
    Control *control;
};

struct Holder {
    void *table;
    unsigned int reserved;
    Argument storage;

    void assign(const Argument *argument);
};

void Holder::assign(const Argument *argument)
{
    typedef bool (__cdecl *Predicate)(const Argument *);

    if (!reinterpret_cast<Predicate>(&func_0060a2f0)(argument)) {
        Argument *destination = &storage;
        if (destination) {
            destination->first = argument->first;
            destination->second = argument->second;
            destination->third = argument->third;
            destination->control = argument->control;

            Control *control = destination->control;
            if (control)
                _InterlockedExchangeAdd(&control->references, 1);
        }
        table = &managerTable;
    } else {
        table = 0;
    }
}
