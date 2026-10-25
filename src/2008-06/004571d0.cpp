// from server: 100% by king_originala
// roc 2008-06 004571d0  unit: RBX::VInstance::?$MarshaledListener  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004571d0
//
// 004571d0  6aff                 push -1
// 004571d2  6868917d00           push 0x7d9168
// 004571d7  64a100000000         mov eax, dword ptr fs:[0]
// 004571dd  50                   push eax
// 004571de  64892500000000       mov dword ptr fs:[0], esp
// 004571e5  83ec08               sub esp, 8
// 004571e8  8b442418             mov eax, dword ptr [esp + 0x18]
// 004571ec  56                   push esi
// 004571ed  8bf1                 mov esi, ecx
// 004571ef  50                   push eax
// 004571f0  8d4c2408             lea ecx, [esp + 8]
// 004571f4  51                   push ecx
// 004571f5  e846181c00           call 0x618a40
// 004571fa  83c408               add esp, 8
// 004571fd  8b10                 mov edx, dword ptr [eax]
// 004571ff  83c004               add eax, 4
// 00457202  50                   push eax
// 00457203  8d4e08               lea ecx, [esi + 8]
// 00457206  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045720e  895604               mov dword ptr [esi + 4], edx
// 00457211  e89ab3faff           call 0x4025b0
// 00457216  8b742408             mov esi, dword ptr [esp + 8]
// 0045721a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00457222  85f6                 test esi, esi
// 00457224  742a                 je 0x457250
// 00457226  8d4604               lea eax, [esi + 4]
// 00457229  83c9ff               or ecx, 0xffffffff
// 0045722c  f00fc108             lock xadd dword ptr [eax], ecx
// 00457230  751e                 jne 0x457250
// 00457232  8b16                 mov edx, dword ptr [esi]
// 00457234  8b4204               mov eax, dword ptr [edx + 4]
// 00457237  8bce                 mov ecx, esi
// 00457239  ffd0                 call eax
// 0045723b  8d4e08               lea ecx, [esi + 8]
// 0045723e  83caff               or edx, 0xffffffff
// 00457241  f00fc111             lock xadd dword ptr [ecx], edx
// 00457245  7509                 jne 0x457250
// 00457247  8b06                 mov eax, dword ptr [esi]
// 00457249  8b5008               mov edx, dword ptr [eax + 8]
// 0045724c  8bce                 mov ecx, esi
// 0045724e  ffd2                 call edx
// 00457250  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00457254  5e                   pop esi
// 00457255  64890d00000000       mov dword ptr fs:[0], ecx
// 0045725c  83c414               add esp, 0x14
// 0045725f  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Holder
{
    Control* control;

    Holder& operator=(const Holder&);
    ~Holder();
};

__forceinline Holder::~Holder()
{
    if (control)
        control->release();
}

struct Pair
{
    void* object;
    Holder owner;

    Pair(const Pair&);
};

Pair __cdecl makePair(void*);

struct S
{
    unsigned long reserved;
    void* object;
    Holder owner;

    void assign(const Pair&);
    void f(void*);
};

__forceinline void S::assign(const Pair& value)
{
    object = value.object;
    owner = value.owner;
}

void S::f(void* argument)
{
    assign(makePair(argument));
}
