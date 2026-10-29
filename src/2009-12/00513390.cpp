// roc 2009-12 00513390  unit: RBX::Network::Players::Plugin  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513390
//
// 00513390  6aff                 push -1
// 00513392  6850779300           push 0x937750
// 00513397  64a100000000         mov eax, dword ptr fs:[0]
// 0051339d  50                   push eax
// 0051339e  64892500000000       mov dword ptr fs:[0], esp
// 005133a5  51                   push ecx
// 005133a6  56                   push esi
// 005133a7  57                   push edi
// 005133a8  8bf9                 mov edi, ecx
// 005133aa  897c2408             mov dword ptr [esp + 8], edi
// 005133ae  8b7744               mov esi, dword ptr [edi + 0x44]
// 005133b1  c744241402000000     mov dword ptr [esp + 0x14], 2
// 005133b9  85f6                 test esi, esi
// 005133bb  742a                 je 0x5133e7
// 005133bd  8d4604               lea eax, [esi + 4]
// 005133c0  83c9ff               or ecx, 0xffffffff
// 005133c3  f00fc108             lock xadd dword ptr [eax], ecx
// 005133c7  751e                 jne 0x5133e7
// 005133c9  8b16                 mov edx, dword ptr [esi]
// 005133cb  8b4204               mov eax, dword ptr [edx + 4]
// 005133ce  8bce                 mov ecx, esi
// 005133d0  ffd0                 call eax
// 005133d2  8d4e08               lea ecx, [esi + 8]
// 005133d5  83caff               or edx, 0xffffffff
// 005133d8  f00fc111             lock xadd dword ptr [ecx], edx
// 005133dc  7509                 jne 0x5133e7
// 005133de  8b06                 mov eax, dword ptr [esi]
// 005133e0  8b5008               mov edx, dword ptr [eax + 8]
// 005133e3  8bce                 mov ecx, esi
// 005133e5  ffd2                 call edx
// 005133e7  8b773c               mov esi, dword ptr [edi + 0x3c]
// 005133ea  c644241401           mov byte ptr [esp + 0x14], 1
// 005133ef  85f6                 test esi, esi
// 005133f1  742a                 je 0x51341d
// 005133f3  8d4604               lea eax, [esi + 4]
// 005133f6  83c9ff               or ecx, 0xffffffff
// 005133f9  f00fc108             lock xadd dword ptr [eax], ecx
// 005133fd  751e                 jne 0x51341d
// 005133ff  8b16                 mov edx, dword ptr [esi]
// 00513401  8b4204               mov eax, dword ptr [edx + 4]
// 00513404  8bce                 mov ecx, esi
// 00513406  ffd0                 call eax
// 00513408  8d4e08               lea ecx, [esi + 8]
// 0051340b  83caff               or edx, 0xffffffff
// 0051340e  f00fc111             lock xadd dword ptr [ecx], edx
// 00513412  7509                 jne 0x51341d
// 00513414  8b06                 mov eax, dword ptr [esi]
// 00513416  8b5008               mov edx, dword ptr [eax + 8]
// 00513419  8bce                 mov ecx, esi
// 0051341b  ffd2                 call edx
// 0051341d  8d4f1c               lea ecx, [edi + 0x1c]
// 00513420  c644241400           mov byte ptr [esp + 0x14], 0
// 00513425  ff15e4b69800         call dword ptr [0x98b6e4]
// 0051342b  8bcf                 mov ecx, edi
// 0051342d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00513435  ff15e4b69800         call dword ptr [0x98b6e4]
// 0051343b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051343f  5f                   pop edi
// 00513440  5e                   pop esi
// 00513441  64890d00000000       mov dword ptr fs:[0], ecx
// 00513448  83c410               add esp, 0x10
// 0051344b  c3                   ret 
// copied from an identical function in another client (function ??1Plugin@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void (__thiscall *string_destroy)(void*);

namespace std
{
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits = char_traits<T>, class Alloc = allocator<T> >
    class basic_string
    {
        char storage[28];
    public:
        __forceinline ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::~basic_string()
    {
        string_destroy(this);
    }
}

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;

    __forceinline ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Plugin
{
    std::basic_string<char> first;
    std::basic_string<char> second;
    Shared firstShared;
    Shared secondShared;

    ~Plugin();
};

Plugin::~Plugin()
{
}