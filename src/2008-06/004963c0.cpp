// from server: 100% by king_originala
// roc 2008-06 004963c0  unit: RBX::Network::Players::Plugin  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004963c0
//
// 004963c0  6aff                 push -1
// 004963c2  68306b7c00           push 0x7c6b30
// 004963c7  64a100000000         mov eax, dword ptr fs:[0]
// 004963cd  50                   push eax
// 004963ce  64892500000000       mov dword ptr fs:[0], esp
// 004963d5  51                   push ecx
// 004963d6  56                   push esi
// 004963d7  57                   push edi
// 004963d8  8bf9                 mov edi, ecx
// 004963da  897c2408             mov dword ptr [esp + 8], edi
// 004963de  8b7744               mov esi, dword ptr [edi + 0x44]
// 004963e1  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004963e9  85f6                 test esi, esi
// 004963eb  742a                 je 0x496417
// 004963ed  8d4604               lea eax, [esi + 4]
// 004963f0  83c9ff               or ecx, 0xffffffff
// 004963f3  f00fc108             lock xadd dword ptr [eax], ecx
// 004963f7  751e                 jne 0x496417
// 004963f9  8b16                 mov edx, dword ptr [esi]
// 004963fb  8b4204               mov eax, dword ptr [edx + 4]
// 004963fe  8bce                 mov ecx, esi
// 00496400  ffd0                 call eax
// 00496402  8d4e08               lea ecx, [esi + 8]
// 00496405  83caff               or edx, 0xffffffff
// 00496408  f00fc111             lock xadd dword ptr [ecx], edx
// 0049640c  7509                 jne 0x496417
// 0049640e  8b06                 mov eax, dword ptr [esi]
// 00496410  8b5008               mov edx, dword ptr [eax + 8]
// 00496413  8bce                 mov ecx, esi
// 00496415  ffd2                 call edx
// 00496417  8b773c               mov esi, dword ptr [edi + 0x3c]
// 0049641a  c644241401           mov byte ptr [esp + 0x14], 1
// 0049641f  85f6                 test esi, esi
// 00496421  742a                 je 0x49644d
// 00496423  8d4604               lea eax, [esi + 4]
// 00496426  83c9ff               or ecx, 0xffffffff
// 00496429  f00fc108             lock xadd dword ptr [eax], ecx
// 0049642d  751e                 jne 0x49644d
// 0049642f  8b16                 mov edx, dword ptr [esi]
// 00496431  8b4204               mov eax, dword ptr [edx + 4]
// 00496434  8bce                 mov ecx, esi
// 00496436  ffd0                 call eax
// 00496438  8d4e08               lea ecx, [esi + 8]
// 0049643b  83caff               or edx, 0xffffffff
// 0049643e  f00fc111             lock xadd dword ptr [ecx], edx
// 00496442  7509                 jne 0x49644d
// 00496444  8b06                 mov eax, dword ptr [esi]
// 00496446  8b5008               mov edx, dword ptr [eax + 8]
// 00496449  8bce                 mov ecx, esi
// 0049644b  ffd2                 call edx
// 0049644d  8d4f1c               lea ecx, [edi + 0x1c]
// 00496450  c644241400           mov byte ptr [esp + 0x14], 0
// 00496455  ff1568248000         call dword ptr [0x802468]
// 0049645b  8bcf                 mov ecx, edi
// 0049645d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00496465  ff1568248000         call dword ptr [0x802468]
// 0049646b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049646f  5f                   pop edi
// 00496470  5e                   pop esi
// 00496471  64890d00000000       mov dword ptr fs:[0], ecx
// 00496478  83c410               add esp, 0x10
// 0049647b  c3                   ret 

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
