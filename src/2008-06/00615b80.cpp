// from server: 100% by king_originala
// roc 2008-06 00615b80  unit: RBX::Unlocked  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615b80
//
// 00615b80  6aff                 push -1
// 00615b82  683b207d00           push 0x7d203b
// 00615b87  64a100000000         mov eax, dword ptr fs:[0]
// 00615b8d  50                   push eax
// 00615b8e  64892500000000       mov dword ptr fs:[0], esp
// 00615b95  51                   push ecx
// 00615b96  56                   push esi
// 00615b97  57                   push edi
// 00615b98  8bf9                 mov edi, ecx
// 00615b9a  897c2408             mov dword ptr [esp + 8], edi
// 00615b9e  8b7710               mov esi, dword ptr [edi + 0x10]
// 00615ba1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00615ba9  85f6                 test esi, esi
// 00615bab  742a                 je 0x615bd7
// 00615bad  8d4604               lea eax, [esi + 4]
// 00615bb0  83c9ff               or ecx, 0xffffffff
// 00615bb3  f00fc108             lock xadd dword ptr [eax], ecx
// 00615bb7  751e                 jne 0x615bd7
// 00615bb9  8b16                 mov edx, dword ptr [esi]
// 00615bbb  8b4204               mov eax, dword ptr [edx + 4]
// 00615bbe  8bce                 mov ecx, esi
// 00615bc0  ffd0                 call eax
// 00615bc2  8d4e08               lea ecx, [esi + 8]
// 00615bc5  83caff               or edx, 0xffffffff
// 00615bc8  f00fc111             lock xadd dword ptr [ecx], edx
// 00615bcc  7509                 jne 0x615bd7
// 00615bce  8b06                 mov eax, dword ptr [esi]
// 00615bd0  8b5008               mov edx, dword ptr [eax + 8]
// 00615bd3  8bce                 mov ecx, esi
// 00615bd5  ffd2                 call edx
// 00615bd7  8b7708               mov esi, dword ptr [edi + 8]
// 00615bda  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00615be2  85f6                 test esi, esi
// 00615be4  742a                 je 0x615c10
// 00615be6  8d4604               lea eax, [esi + 4]
// 00615be9  83c9ff               or ecx, 0xffffffff
// 00615bec  f00fc108             lock xadd dword ptr [eax], ecx
// 00615bf0  751e                 jne 0x615c10
// 00615bf2  8b16                 mov edx, dword ptr [esi]
// 00615bf4  8b4204               mov eax, dword ptr [edx + 4]
// 00615bf7  8bce                 mov ecx, esi
// 00615bf9  ffd0                 call eax
// 00615bfb  8d4e08               lea ecx, [esi + 8]
// 00615bfe  83caff               or edx, 0xffffffff
// 00615c01  f00fc111             lock xadd dword ptr [ecx], edx
// 00615c05  7509                 jne 0x615c10
// 00615c07  8b06                 mov eax, dword ptr [esi]
// 00615c09  8b5008               mov edx, dword ptr [eax + 8]
// 00615c0c  8bce                 mov ecx, esi
// 00615c0e  ffd2                 call edx
// 00615c10  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00615c14  5f                   pop edi
// 00615c15  5e                   pop esi
// 00615c16  64890d00000000       mov dword ptr fs:[0], ecx
// 00615c1d  83c410               add esp, 0x10
// 00615c20  c3                   ret 

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
