// roc 2010-06 004c09a0  unit: RBX::Network::Players::Plugin  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c09a0
//
// 004c09a0  6aff                 push -1
// 004c09a2  68b09d9800           push 0x989db0
// 004c09a7  64a100000000         mov eax, dword ptr fs:[0]
// 004c09ad  50                   push eax
// 004c09ae  64892500000000       mov dword ptr fs:[0], esp
// 004c09b5  51                   push ecx
// 004c09b6  56                   push esi
// 004c09b7  57                   push edi
// 004c09b8  8bf9                 mov edi, ecx
// 004c09ba  897c2408             mov dword ptr [esp + 8], edi
// 004c09be  8b7744               mov esi, dword ptr [edi + 0x44]
// 004c09c1  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004c09c9  85f6                 test esi, esi
// 004c09cb  742a                 je 0x4c09f7
// 004c09cd  8d4604               lea eax, [esi + 4]
// 004c09d0  83c9ff               or ecx, 0xffffffff
// 004c09d3  f00fc108             lock xadd dword ptr [eax], ecx
// 004c09d7  751e                 jne 0x4c09f7
// 004c09d9  8b16                 mov edx, dword ptr [esi]
// 004c09db  8b4204               mov eax, dword ptr [edx + 4]
// 004c09de  8bce                 mov ecx, esi
// 004c09e0  ffd0                 call eax
// 004c09e2  8d4e08               lea ecx, [esi + 8]
// 004c09e5  83caff               or edx, 0xffffffff
// 004c09e8  f00fc111             lock xadd dword ptr [ecx], edx
// 004c09ec  7509                 jne 0x4c09f7
// 004c09ee  8b06                 mov eax, dword ptr [esi]
// 004c09f0  8b5008               mov edx, dword ptr [eax + 8]
// 004c09f3  8bce                 mov ecx, esi
// 004c09f5  ffd2                 call edx
// 004c09f7  8b773c               mov esi, dword ptr [edi + 0x3c]
// 004c09fa  c644241401           mov byte ptr [esp + 0x14], 1
// 004c09ff  85f6                 test esi, esi
// 004c0a01  742a                 je 0x4c0a2d
// 004c0a03  8d4604               lea eax, [esi + 4]
// 004c0a06  83c9ff               or ecx, 0xffffffff
// 004c0a09  f00fc108             lock xadd dword ptr [eax], ecx
// 004c0a0d  751e                 jne 0x4c0a2d
// 004c0a0f  8b16                 mov edx, dword ptr [esi]
// 004c0a11  8b4204               mov eax, dword ptr [edx + 4]
// 004c0a14  8bce                 mov ecx, esi
// 004c0a16  ffd0                 call eax
// 004c0a18  8d4e08               lea ecx, [esi + 8]
// 004c0a1b  83caff               or edx, 0xffffffff
// 004c0a1e  f00fc111             lock xadd dword ptr [ecx], edx
// 004c0a22  7509                 jne 0x4c0a2d
// 004c0a24  8b06                 mov eax, dword ptr [esi]
// 004c0a26  8b5008               mov edx, dword ptr [eax + 8]
// 004c0a29  8bce                 mov ecx, esi
// 004c0a2b  ffd2                 call edx
// 004c0a2d  8d4f1c               lea ecx, [edi + 0x1c]
// 004c0a30  c644241400           mov byte ptr [esp + 0x14], 0
// 004c0a35  ff1500a49e00         call dword ptr [0x9ea400]
// 004c0a3b  8bcf                 mov ecx, edi
// 004c0a3d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004c0a45  ff1500a49e00         call dword ptr [0x9ea400]
// 004c0a4b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c0a4f  5f                   pop edi
// 004c0a50  5e                   pop esi
// 004c0a51  64890d00000000       mov dword ptr fs:[0], ecx
// 004c0a58  83c410               add esp, 0x10
// 004c0a5b  c3                   ret 
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