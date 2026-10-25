// from server: 100% by king_originala
// roc 2008-06 0063f710  unit: RBX::HammerTool  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f710
//
// 0063f710  6aff                 push -1
// 0063f712  6868917d00           push 0x7d9168
// 0063f717  64a100000000         mov eax, dword ptr fs:[0]
// 0063f71d  50                   push eax
// 0063f71e  64892500000000       mov dword ptr fs:[0], esp
// 0063f725  83ec08               sub esp, 8
// 0063f728  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063f72c  56                   push esi
// 0063f72d  68e0be9700           push 0x97bee0
// 0063f732  50                   push eax
// 0063f733  8bf1                 mov esi, ecx
// 0063f735  e8c668fdff           call 0x616000
// 0063f73a  50                   push eax
// 0063f73b  8d4c2408             lea ecx, [esp + 8]
// 0063f73f  51                   push ecx
// 0063f740  e8fb92fdff           call 0x618a40
// 0063f745  83c408               add esp, 8
// 0063f748  8b10                 mov edx, dword ptr [eax]
// 0063f74a  83c004               add eax, 4
// 0063f74d  50                   push eax
// 0063f74e  8d4e20               lea ecx, [esi + 0x20]
// 0063f751  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063f759  89561c               mov dword ptr [esi + 0x1c], edx
// 0063f75c  e84f2edcff           call 0x4025b0
// 0063f761  8b742408             mov esi, dword ptr [esp + 8]
// 0063f765  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0063f76d  85f6                 test esi, esi
// 0063f76f  742a                 je 0x63f79b
// 0063f771  8d4604               lea eax, [esi + 4]
// 0063f774  83c9ff               or ecx, 0xffffffff
// 0063f777  f00fc108             lock xadd dword ptr [eax], ecx
// 0063f77b  751e                 jne 0x63f79b
// 0063f77d  8b16                 mov edx, dword ptr [esi]
// 0063f77f  8b4204               mov eax, dword ptr [edx + 4]
// 0063f782  8bce                 mov ecx, esi
// 0063f784  ffd0                 call eax
// 0063f786  8d4e08               lea ecx, [esi + 8]
// 0063f789  83caff               or edx, 0xffffffff
// 0063f78c  f00fc111             lock xadd dword ptr [ecx], edx
// 0063f790  7509                 jne 0x63f79b
// 0063f792  8b06                 mov eax, dword ptr [esi]
// 0063f794  8b5008               mov edx, dword ptr [eax + 8]
// 0063f797  8bce                 mov ecx, esi
// 0063f799  ffd2                 call edx
// 0063f79b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063f79f  5e                   pop esi
// 0063f7a0  64890d00000000       mov dword ptr fs:[0], ecx
// 0063f7a7  83c414               add esp, 0x14
// 0063f7aa  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Owner {
    Control* control;
    Owner& operator=(const Owner&);
};

struct Pair {
    void* pointer;
    Owner owner;
    Pair& operator=(const Pair&);
    ~Pair();
};

extern char factory;
extern void* __stdcall invoke(void*, void*);
extern Pair __cdecl makePair(void*);

struct HammerTool {
    char padding[0x1c];
    Pair value;
    void set(void*);
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

__forceinline Pair& Pair::operator=(const Pair& other)
{
    pointer = other.pointer;
    owner = other.owner;
    return *this;
}

__forceinline Pair::~Pair()
{
    if (owner.control)
        owner.control->release();
}

void HammerTool::set(void* argument)
{
    value = makePair(invoke(argument, &factory));
}
