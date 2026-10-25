// from server: 100% by colin
// roc 2008-06 005fbff0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fbff0
//
// 005fbff0  6aff                 push -1
// 005fbff2  6868917d00           push 0x7d9168
// 005fbff7  64a100000000         mov eax, dword ptr fs:[0]
// 005fbffd  50                   push eax
// 005fbffe  64892500000000       mov dword ptr fs:[0], esp
// 005fc005  83ec08               sub esp, 8
// 005fc008  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fc00c  8b8048010000         mov eax, dword ptr [eax + 0x148]
// 005fc012  56                   push esi
// 005fc013  8bf1                 mov esi, ecx
// 005fc015  50                   push eax
// 005fc016  8d4c2408             lea ecx, [esp + 8]
// 005fc01a  51                   push ecx
// 005fc01b  e820ca0100           call 0x618a40
// 005fc020  83c408               add esp, 8
// 005fc023  8b10                 mov edx, dword ptr [eax]
// 005fc025  83c004               add eax, 4
// 005fc028  50                   push eax
// 005fc029  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 005fc02f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fc037  8996a0010000         mov dword ptr [esi + 0x1a0], edx
// 005fc03d  e86e65e0ff           call 0x4025b0
// 005fc042  8b442408             mov eax, dword ptr [esp + 8]
// 005fc046  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fc04e  85c0                 test eax, eax
// 005fc050  742c                 je 0x5fc07e
// 005fc052  8bf0                 mov esi, eax
// 005fc054  83c004               add eax, 4
// 005fc057  83c9ff               or ecx, 0xffffffff
// 005fc05a  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc05e  751e                 jne 0x5fc07e
// 005fc060  8b16                 mov edx, dword ptr [esi]
// 005fc062  8b4204               mov eax, dword ptr [edx + 4]
// 005fc065  8bce                 mov ecx, esi
// 005fc067  ffd0                 call eax
// 005fc069  8d4e08               lea ecx, [esi + 8]
// 005fc06c  83caff               or edx, 0xffffffff
// 005fc06f  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc073  7509                 jne 0x5fc07e
// 005fc075  8b06                 mov eax, dword ptr [esi]
// 005fc077  8b5008               mov edx, dword ptr [eax + 8]
// 005fc07a  8bce                 mov ecx, esi
// 005fc07c  ffd2                 call edx
// 005fc07e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fc082  5e                   pop esi
// 005fc083  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc08a  83c414               add esp, 0x14
// 005fc08d  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Count {
    Control* p;
    Count& operator=(const Count&);
    ~Count();
};

inline Count::~Count()
{
    if (p)
        p->release();
}

struct Pair {
    void* object;
    Count count;
    Pair(const Pair&);
    Pair& operator=(const Pair&);
};

inline Pair& Pair::operator=(const Pair& other)
{
    object = other.object;
    count = other.count;
    return *this;
}

Pair __cdecl acquire(void*);

struct Input {
    char padding[0x148];
    void* source;
};

struct S {
    char padding[0x1a0];
    Pair value;
    void f(Input*);
};

void S::f(Input* input)
{
    void* source = input->source;
    value = acquire(source);
}
