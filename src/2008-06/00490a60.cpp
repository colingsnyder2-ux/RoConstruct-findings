// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long unused;
    volatile long references;
};

struct Payload {
    void* first;
    Control* firstControl;
    void* second;
    Control* secondControl;
    unsigned long extra;

    void destroy();
};

struct Argument {
    unsigned long value;
    Payload payload;
};

struct Data {
    unsigned long value;
    void* first;
    Control* firstControl;
    void* second;
    Control* secondControl;
};

extern bool __cdecl func_0060a2f0(const Argument*);
extern unsigned long table_0082175c[];

struct S {
    void* table;
    unsigned long reserved;
    Data data;

    S* initialize(Argument argument);
};

S* S::initialize(Argument argument)
{
    table = 0;
    if (!func_0060a2f0(&argument)) {
        Data* destination = &data;
        if (destination) {
            destination->value = argument.value;
            destination->first = argument.payload.first;
            destination->firstControl = argument.payload.firstControl;
            if (destination->firstControl) {
                volatile long* references =
                    &destination->firstControl->references;
                _ReadWriteBarrier();
                _InterlockedExchangeAdd(references, 1);
            }
            destination->second = argument.payload.second;
            destination->secondControl = argument.payload.secondControl;
            if (destination->secondControl) {
                volatile long* references =
                    &destination->secondControl->references;
                _ReadWriteBarrier();
                _InterlockedExchangeAdd(references, 1);
            }
        }
        table = table_0082175c;
    } else {
        table = 0;
    }
    argument.payload.destroy();
    return this;
}
