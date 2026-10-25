// from server: 100% by king_originala
// roc 2008-06 005ca240  unit: RBX::Stats::Item  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ca240
//
// 005ca240  6aff                 push -1
// 005ca242  68c12f7c00           push 0x7c2fc1
// 005ca247  64a100000000         mov eax, dword ptr fs:[0]
// 005ca24d  50                   push eax
// 005ca24e  64892500000000       mov dword ptr fs:[0], esp
// 005ca255  83ec30               sub esp, 0x30
// 005ca258  53                   push ebx
// 005ca259  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 005ca25d  56                   push esi
// 005ca25e  57                   push edi
// 005ca25f  8d442418             lea eax, [esp + 0x18]
// 005ca263  53                   push ebx
// 005ca264  50                   push eax
// 005ca265  894c2414             mov dword ptr [esp + 0x14], ecx
// 005ca269  e852ffffff           call 0x5ca1c0
// 005ca26e  8b7004               mov esi, dword ptr [eax + 4]
// 005ca271  8b38                 mov edi, dword ptr [eax]
// 005ca273  83c408               add esp, 8
// 005ca276  897c2410             mov dword ptr [esp + 0x10], edi
// 005ca27a  89742414             mov dword ptr [esp + 0x14], esi
// 005ca27e  85f6                 test esi, esi
// 005ca280  740c                 je 0x5ca28e
// 005ca282  8d4e04               lea ecx, [esi + 4]
// 005ca285  ba01000000           mov edx, 1
// 005ca28a  f00fc111             lock xadd dword ptr [ecx], edx
// 005ca28e  55                   push ebp
// 005ca28f  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005ca293  c744244800000000     mov dword ptr [esp + 0x48], 0
// 005ca29b  85ed                 test ebp, ebp
// 005ca29d  742c                 je 0x5ca2cb
// 005ca29f  8d4504               lea eax, [ebp + 4]
// 005ca2a2  83c9ff               or ecx, 0xffffffff
// 005ca2a5  f00fc108             lock xadd dword ptr [eax], ecx
// 005ca2a9  7520                 jne 0x5ca2cb
// 005ca2ab  8b5500               mov edx, dword ptr [ebp]
// 005ca2ae  8b4204               mov eax, dword ptr [edx + 4]
// 005ca2b1  8bcd                 mov ecx, ebp
// 005ca2b3  ffd0                 call eax
// 005ca2b5  8d4d08               lea ecx, [ebp + 8]
// 005ca2b8  83caff               or edx, 0xffffffff
// 005ca2bb  f00fc111             lock xadd dword ptr [ecx], edx
// 005ca2bf  750a                 jne 0x5ca2cb
// 005ca2c1  8b4500               mov eax, dword ptr [ebp]
// 005ca2c4  8b5008               mov edx, dword ptr [eax + 8]
// 005ca2c7  8bcd                 mov ecx, ebp
// 005ca2c9  ffd2                 call edx
// 005ca2cb  83bb38c0000010       cmp dword ptr [ebx + 0xc038], 0x10
// 005ca2d2  5d                   pop ebp
// 005ca2d3  7208                 jb 0x5ca2dd
// 005ca2d5  8b8324c00000         mov eax, dword ptr [ebx + 0xc024]
// 005ca2db  eb06                 jmp 0x5ca2e3
// 005ca2dd  8d8324c00000         lea eax, [ebx + 0xc024]
// 005ca2e3  50                   push eax
// 005ca2e4  8d4c2424             lea ecx, [esp + 0x24]
// 005ca2e8  ff1558248000         call dword ptr [0x802458]
// 005ca2ee  8b07                 mov eax, dword ptr [edi]
// 005ca2f0  8b5004               mov edx, dword ptr [eax + 4]
// 005ca2f3  8d4c2420             lea ecx, [esp + 0x20]
// 005ca2f7  51                   push ecx
// 005ca2f8  8bcf                 mov ecx, edi
// 005ca2fa  c644244801           mov byte ptr [esp + 0x48], 1
// 005ca2ff  ffd2                 call edx
// 005ca301  8d4c2420             lea ecx, [esp + 0x20]
// 005ca305  c644244400           mov byte ptr [esp + 0x44], 0
// 005ca30a  ff1568248000         call dword ptr [0x802468]
// 005ca310  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ca314  50                   push eax
// 005ca315  8bcf                 mov ecx, edi
// 005ca317  e8d405f9ff           call 0x55a8f0
// 005ca31c  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005ca324  85f6                 test esi, esi
// 005ca326  742a                 je 0x5ca352
// 005ca328  8d4e04               lea ecx, [esi + 4]
// 005ca32b  83caff               or edx, 0xffffffff
// 005ca32e  f00fc111             lock xadd dword ptr [ecx], edx
// 005ca332  751e                 jne 0x5ca352
// 005ca334  8b06                 mov eax, dword ptr [esi]
// 005ca336  8b5004               mov edx, dword ptr [eax + 4]
// 005ca339  8bce                 mov ecx, esi
// 005ca33b  ffd2                 call edx
// 005ca33d  8d4608               lea eax, [esi + 8]
// 005ca340  83c9ff               or ecx, 0xffffffff
// 005ca343  f00fc108             lock xadd dword ptr [eax], ecx
// 005ca347  7509                 jne 0x5ca352
// 005ca349  8b16                 mov edx, dword ptr [esi]
// 005ca34b  8b4208               mov eax, dword ptr [edx + 8]
// 005ca34e  8bce                 mov ecx, esi
// 005ca350  ffd0                 call eax
// 005ca352  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005ca356  8bc7                 mov eax, edi
// 005ca358  5f                   pop edi
// 005ca359  5e                   pop esi
// 005ca35a  5b                   pop ebx
// 005ca35b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ca362  83c43c               add esp, 0x3c
// 005ca365  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void (__thiscall *stringConstruct)(void*, const char*);
extern void (__thiscall *stringDestroy)(void*);

namespace std
{
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class C, class Traits, class Alloc>
    class basic_string
    {
        char allocatorStorage;
        union
        {
            C buffer[16];
            C* pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;

    public:
        basic_string(const C*);
        ~basic_string();
    };

    template<class C, class Traits, class Alloc>
    inline basic_string<C, Traits, Alloc>::basic_string(const C* text)
    {
        stringConstruct(this, text);
    }

    template<class C, class Traits, class Alloc>
    inline basic_string<C, Traits, Alloc>::~basic_string()
    {
        stringDestroy(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct RefCount
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

inline void RefCount::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

template<class T>
struct Shared
{
    T* object;
    RefCount* count;

    template<class U>
    Shared(const Shared<U>& other);
    ~Shared();
};

template<class T>
template<class U>
inline Shared<T>::Shared(const Shared<U>& other)
    : object(other.object), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->strong);
}

template<class T>
inline Shared<T>::~Shared()
{
    if (count)
        count->release();
}

struct Input
{
    char padding[0xc024];
    union
    {
        char buffer[16];
        char* pointer;
    } name;
    unsigned int length;
    unsigned int capacity;

    const char* c_str() const;
};

inline const char* Input::c_str() const
{
    if (capacity >= 16)
        return name.pointer;
    return name.buffer;
}

struct Item
{
    Item* f(Input*);
};

struct Node
{
    virtual void unused();
    virtual void setName(const std::string&);
    void attach(Item*);
};

struct TypedMemItem : Node {};

Shared<TypedMemItem> __cdecl create(Input*);

Item* Item::f(Input* input)
{
    Shared<Node> result(create(input));
    {
        std::string name(input->c_str());
        result.object->setName(name);
    }
    result.object->attach(this);
    return reinterpret_cast<Item*>(result.object);
}
