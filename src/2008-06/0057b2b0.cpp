// from server: 93% by colin
// from server: 89% by king_originala
// roc 2008-06 0057b2b0  unit: RBX::DataModel  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b2b0
//
// 0057b2b0  8bc1                 mov eax, ecx
// 0057b2b2  8b00                 mov eax, dword ptr [eax]
// 0057b2b4  8b5008               mov edx, dword ptr [eax + 8]
// 0057b2b7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057b2bb  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0057b2be  56                   push esi
// 0057b2bf  8b30                 mov esi, dword ptr [eax]
// 0057b2c1  52                   push edx
// 0057b2c2  83ec08               sub esp, 8
// 0057b2c5  8bd4                 mov edx, esp
// 0057b2c7  8932                 mov dword ptr [edx], esi
// 0057b2c9  8b4004               mov eax, dword ptr [eax + 4]
// 0057b2cc  83c108               add ecx, 8
// 0057b2cf  89642418             mov dword ptr [esp + 0x18], esp
// 0057b2d3  894204               mov dword ptr [edx + 4], eax
// 0057b2d6  85c0                 test eax, eax
// 0057b2d8  740c                 je 0x57b2e6
// 0057b2da  83c004               add eax, 4
// 0057b2dd  ba01000000           mov edx, 1
// 0057b2e2  f00fc110             lock xadd dword ptr [eax], edx
// 0057b2e6  e8f5feffff           call 0x57b1e0
// 0057b2eb  8b442408             mov eax, dword ptr [esp + 8]
// 0057b2ef  5e                   pop esi
// 0057b2f0  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Receiver {
    void invoke(Shared value, int argument);
};

struct ReceiverHolder {
    char padding[8];
    Receiver receiver;
};

struct Argument {
    char padding[16];
    ReceiverHolder* receiver;
};

struct Bound {
    Shared value;
    int argument;
};

struct S {
    Bound* bound;
    void* f(void* result, Argument* argument);
};

void* S::f(void* result, Argument* argument)
{
    Bound* value = bound;
    Receiver* receiver = &argument->receiver->receiver;
    receiver->invoke(value->value, value->argument);
    return result;
}
