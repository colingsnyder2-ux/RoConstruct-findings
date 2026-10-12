// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

bool __cdecl func_0060a2f0();
extern unsigned char tagSymbol[];

struct Control {
    long reserved;
    volatile long references;
};

struct Value {
    void* first;
    void* second;
    Control* control;
};

struct S {
    void* tag;
    unsigned long reserved;
    Value value;

    void f(const Value* source);
};

void S::f(const Value* source)
{
    if (!reinterpret_cast<bool (__cdecl *)(const Value*)>(
            &func_0060a2f0)(source)) {
        Value* destination = &value;
        if (destination) {
            destination->first = source->first;
            destination->second = source->second;
            destination->control = source->control;
            if (destination->control) {
                volatile long* references = &destination->control->references;
                _InterlockedExchangeAdd(references, 1);
            }
        }
        tag = tagSymbol;
    } else {
        tag = 0;
    }
}
