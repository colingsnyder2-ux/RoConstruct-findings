// roc 2009-12 00785a80  unit: RBX::Unlocked  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00785a80
//
// 00785a80  6aff                 push -1
// 00785a82  68dbfd9400           push 0x94fddb
// 00785a87  64a100000000         mov eax, dword ptr fs:[0]
// 00785a8d  50                   push eax
// 00785a8e  64892500000000       mov dword ptr fs:[0], esp
// 00785a95  51                   push ecx
// 00785a96  56                   push esi
// 00785a97  57                   push edi
// 00785a98  8bf9                 mov edi, ecx
// 00785a9a  897c2408             mov dword ptr [esp + 8], edi
// 00785a9e  8b7710               mov esi, dword ptr [edi + 0x10]
// 00785aa1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00785aa9  85f6                 test esi, esi
// 00785aab  742a                 je 0x785ad7
// 00785aad  8d4604               lea eax, [esi + 4]
// 00785ab0  83c9ff               or ecx, 0xffffffff
// 00785ab3  f00fc108             lock xadd dword ptr [eax], ecx
// 00785ab7  751e                 jne 0x785ad7
// 00785ab9  8b16                 mov edx, dword ptr [esi]
// 00785abb  8b4204               mov eax, dword ptr [edx + 4]
// 00785abe  8bce                 mov ecx, esi
// 00785ac0  ffd0                 call eax
// 00785ac2  8d4e08               lea ecx, [esi + 8]
// 00785ac5  83caff               or edx, 0xffffffff
// 00785ac8  f00fc111             lock xadd dword ptr [ecx], edx
// 00785acc  7509                 jne 0x785ad7
// 00785ace  8b06                 mov eax, dword ptr [esi]
// 00785ad0  8b5008               mov edx, dword ptr [eax + 8]
// 00785ad3  8bce                 mov ecx, esi
// 00785ad5  ffd2                 call edx
// 00785ad7  8b7708               mov esi, dword ptr [edi + 8]
// 00785ada  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00785ae2  85f6                 test esi, esi
// 00785ae4  742a                 je 0x785b10
// 00785ae6  8d4604               lea eax, [esi + 4]
// 00785ae9  83c9ff               or ecx, 0xffffffff
// 00785aec  f00fc108             lock xadd dword ptr [eax], ecx
// 00785af0  751e                 jne 0x785b10
// 00785af2  8b16                 mov edx, dword ptr [esi]
// 00785af4  8b4204               mov eax, dword ptr [edx + 4]
// 00785af7  8bce                 mov ecx, esi
// 00785af9  ffd0                 call eax
// 00785afb  8d4e08               lea ecx, [esi + 8]
// 00785afe  83caff               or edx, 0xffffffff
// 00785b01  f00fc111             lock xadd dword ptr [ecx], edx
// 00785b05  7509                 jne 0x785b10
// 00785b07  8b06                 mov eax, dword ptr [esi]
// 00785b09  8b5008               mov edx, dword ptr [eax + 8]
// 00785b0c  8bce                 mov ecx, esi
// 00785b0e  ffd2                 call edx
// 00785b10  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00785b14  5f                   pop edi
// 00785b15  5e                   pop esi
// 00785b16  64890d00000000       mov dword ptr fs:[0], ecx
// 00785b1d  83c410               add esp, 0x10
// 00785b20  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Count
{
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Count* count;

    ~Shared();
};

inline Shared::~Shared()
{
    Count* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct S
{
    unsigned long padding;
    Shared first;
    Shared second;

    ~S();
};

S::~S()
{
}