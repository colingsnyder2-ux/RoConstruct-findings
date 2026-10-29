// roc 2009-06 004c4660  unit: RBX::Network::Players::Plugin  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4660
//
// 004c4660  6aff                 push -1
// 004c4662  68809b8500           push 0x859b80
// 004c4667  64a100000000         mov eax, dword ptr fs:[0]
// 004c466d  50                   push eax
// 004c466e  64892500000000       mov dword ptr fs:[0], esp
// 004c4675  51                   push ecx
// 004c4676  56                   push esi
// 004c4677  57                   push edi
// 004c4678  8bf9                 mov edi, ecx
// 004c467a  897c2408             mov dword ptr [esp + 8], edi
// 004c467e  8b7744               mov esi, dword ptr [edi + 0x44]
// 004c4681  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004c4689  85f6                 test esi, esi
// 004c468b  742a                 je 0x4c46b7
// 004c468d  8d4604               lea eax, [esi + 4]
// 004c4690  83c9ff               or ecx, 0xffffffff
// 004c4693  f00fc108             lock xadd dword ptr [eax], ecx
// 004c4697  751e                 jne 0x4c46b7
// 004c4699  8b16                 mov edx, dword ptr [esi]
// 004c469b  8b4204               mov eax, dword ptr [edx + 4]
// 004c469e  8bce                 mov ecx, esi
// 004c46a0  ffd0                 call eax
// 004c46a2  8d4e08               lea ecx, [esi + 8]
// 004c46a5  83caff               or edx, 0xffffffff
// 004c46a8  f00fc111             lock xadd dword ptr [ecx], edx
// 004c46ac  7509                 jne 0x4c46b7
// 004c46ae  8b06                 mov eax, dword ptr [esi]
// 004c46b0  8b5008               mov edx, dword ptr [eax + 8]
// 004c46b3  8bce                 mov ecx, esi
// 004c46b5  ffd2                 call edx
// 004c46b7  8b773c               mov esi, dword ptr [edi + 0x3c]
// 004c46ba  c644241401           mov byte ptr [esp + 0x14], 1
// 004c46bf  85f6                 test esi, esi
// 004c46c1  742a                 je 0x4c46ed
// 004c46c3  8d4604               lea eax, [esi + 4]
// 004c46c6  83c9ff               or ecx, 0xffffffff
// 004c46c9  f00fc108             lock xadd dword ptr [eax], ecx
// 004c46cd  751e                 jne 0x4c46ed
// 004c46cf  8b16                 mov edx, dword ptr [esi]
// 004c46d1  8b4204               mov eax, dword ptr [edx + 4]
// 004c46d4  8bce                 mov ecx, esi
// 004c46d6  ffd0                 call eax
// 004c46d8  8d4e08               lea ecx, [esi + 8]
// 004c46db  83caff               or edx, 0xffffffff
// 004c46de  f00fc111             lock xadd dword ptr [ecx], edx
// 004c46e2  7509                 jne 0x4c46ed
// 004c46e4  8b06                 mov eax, dword ptr [esi]
// 004c46e6  8b5008               mov edx, dword ptr [eax + 8]
// 004c46e9  8bce                 mov ecx, esi
// 004c46eb  ffd2                 call edx
// 004c46ed  8d4f1c               lea ecx, [edi + 0x1c]
// 004c46f0  c644241400           mov byte ptr [esp + 0x14], 0
// 004c46f5  ff15c4e48900         call dword ptr [0x89e4c4]
// 004c46fb  8bcf                 mov ecx, edi
// 004c46fd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004c4705  ff15c4e48900         call dword ptr [0x89e4c4]
// 004c470b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c470f  5f                   pop edi
// 004c4710  5e                   pop esi
// 004c4711  64890d00000000       mov dword ptr fs:[0], ecx
// 004c4718  83c410               add esp, 0x10
// 004c471b  c3                   ret 
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