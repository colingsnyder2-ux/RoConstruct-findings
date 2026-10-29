// roc 2010-06 0071dea0  unit: RBX::Unlocked  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071dea0
//
// 0071dea0  6aff                 push -1
// 0071dea2  68eb1d9900           push 0x991deb
// 0071dea7  64a100000000         mov eax, dword ptr fs:[0]
// 0071dead  50                   push eax
// 0071deae  64892500000000       mov dword ptr fs:[0], esp
// 0071deb5  51                   push ecx
// 0071deb6  56                   push esi
// 0071deb7  57                   push edi
// 0071deb8  8bf9                 mov edi, ecx
// 0071deba  897c2408             mov dword ptr [esp + 8], edi
// 0071debe  8b7710               mov esi, dword ptr [edi + 0x10]
// 0071dec1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0071dec9  85f6                 test esi, esi
// 0071decb  742a                 je 0x71def7
// 0071decd  8d4604               lea eax, [esi + 4]
// 0071ded0  83c9ff               or ecx, 0xffffffff
// 0071ded3  f00fc108             lock xadd dword ptr [eax], ecx
// 0071ded7  751e                 jne 0x71def7
// 0071ded9  8b16                 mov edx, dword ptr [esi]
// 0071dedb  8b4204               mov eax, dword ptr [edx + 4]
// 0071dede  8bce                 mov ecx, esi
// 0071dee0  ffd0                 call eax
// 0071dee2  8d4e08               lea ecx, [esi + 8]
// 0071dee5  83caff               or edx, 0xffffffff
// 0071dee8  f00fc111             lock xadd dword ptr [ecx], edx
// 0071deec  7509                 jne 0x71def7
// 0071deee  8b06                 mov eax, dword ptr [esi]
// 0071def0  8b5008               mov edx, dword ptr [eax + 8]
// 0071def3  8bce                 mov ecx, esi
// 0071def5  ffd2                 call edx
// 0071def7  8b7708               mov esi, dword ptr [edi + 8]
// 0071defa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0071df02  85f6                 test esi, esi
// 0071df04  742a                 je 0x71df30
// 0071df06  8d4604               lea eax, [esi + 4]
// 0071df09  83c9ff               or ecx, 0xffffffff
// 0071df0c  f00fc108             lock xadd dword ptr [eax], ecx
// 0071df10  751e                 jne 0x71df30
// 0071df12  8b16                 mov edx, dword ptr [esi]
// 0071df14  8b4204               mov eax, dword ptr [edx + 4]
// 0071df17  8bce                 mov ecx, esi
// 0071df19  ffd0                 call eax
// 0071df1b  8d4e08               lea ecx, [esi + 8]
// 0071df1e  83caff               or edx, 0xffffffff
// 0071df21  f00fc111             lock xadd dword ptr [ecx], edx
// 0071df25  7509                 jne 0x71df30
// 0071df27  8b06                 mov eax, dword ptr [esi]
// 0071df29  8b5008               mov edx, dword ptr [eax + 8]
// 0071df2c  8bce                 mov ecx, esi
// 0071df2e  ffd2                 call edx
// 0071df30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071df34  5f                   pop edi
// 0071df35  5e                   pop esi
// 0071df36  64890d00000000       mov dword ptr fs:[0], ecx
// 0071df3d  83c410               add esp, 0x10
// 0071df40  c3                   ret 
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