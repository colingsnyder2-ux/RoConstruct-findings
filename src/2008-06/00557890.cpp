// from server: 100% by king_originala
// roc 2008-06 00557890  unit: RBX::VInstance::?$NonFactoryProduct  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557890
//
// 00557890  64a100000000         mov eax, dword ptr fs:[0]
// 00557896  6aff                 push -1
// 00557898  6868617c00           push 0x7c6168
// 0055789d  50                   push eax
// 0055789e  64892500000000       mov dword ptr fs:[0], esp
// 005578a5  53                   push ebx
// 005578a6  56                   push esi
// 005578a7  8b8904010000         mov ecx, dword ptr [ecx + 0x104]
// 005578ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 005578b1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005578b9  3bc1                 cmp eax, ecx
// 005578bb  7504                 jne 0x5578c1
// 005578bd  b301                 mov bl, 1
// 005578bf  eb10                 jmp 0x5578d1
// 005578c1  85c9                 test ecx, ecx
// 005578c3  740a                 je 0x5578cf
// 005578c5  50                   push eax
// 005578c6  e815b2ecff           call 0x422ae0
// 005578cb  8ad8                 mov bl, al
// 005578cd  eb02                 jmp 0x5578d1
// 005578cf  32db                 xor bl, bl
// 005578d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005578d5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005578dd  85f6                 test esi, esi
// 005578df  742a                 je 0x55790b
// 005578e1  8d4604               lea eax, [esi + 4]
// 005578e4  83c9ff               or ecx, 0xffffffff
// 005578e7  f00fc108             lock xadd dword ptr [eax], ecx
// 005578eb  751e                 jne 0x55790b
// 005578ed  8b16                 mov edx, dword ptr [esi]
// 005578ef  8b4204               mov eax, dword ptr [edx + 4]
// 005578f2  8bce                 mov ecx, esi
// 005578f4  ffd0                 call eax
// 005578f6  8d4e08               lea ecx, [esi + 8]
// 005578f9  83caff               or edx, 0xffffffff
// 005578fc  f00fc111             lock xadd dword ptr [ecx], edx
// 00557900  7509                 jne 0x55790b
// 00557902  8b06                 mov eax, dword ptr [esi]
// 00557904  8b5008               mov edx, dword ptr [eax + 8]
// 00557907  8bce                 mov ecx, esi
// 00557909  ffd2                 call edx
// 0055790b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055790f  5e                   pop esi
// 00557910  8ac3                 mov al, bl
// 00557912  64890d00000000       mov dword ptr fs:[0], ecx
// 00557919  5b                   pop ebx
// 0055791a  83c40c               add esp, 0xc
// 0055791d  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual ~RefCount();
    virtual void dispose() = 0;
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

struct S;

struct Pointer {
    S* object;
    RefCount* count;

    ~Pointer();
};

struct S {
    char padding[0x104];
    S* parent;

    bool f(S* node);
    bool g(Pointer node);
};

__forceinline void RefCount::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

__forceinline Pointer::~Pointer()
{
    if (count)
        count->release();
}

bool S::g(Pointer node)
{
    bool result;
    if (node.object == parent)
        result = true;
    else if (parent)
        result = parent->f(node.object);
    else
        result = false;
    return result;
}
