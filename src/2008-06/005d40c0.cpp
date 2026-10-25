// from server: 100% by king_originala
// roc 2008-06 005d40c0  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d40c0
//
// 005d40c0  64a100000000         mov eax, dword ptr fs:[0]
// 005d40c6  6aff                 push -1
// 005d40c8  6808497d00           push 0x7d4908
// 005d40cd  50                   push eax
// 005d40ce  64892500000000       mov dword ptr fs:[0], esp
// 005d40d5  56                   push esi
// 005d40d6  33c0                 xor eax, eax
// 005d40d8  8944240c             mov dword ptr [esp + 0xc], eax
// 005d40dc  3bc8                 cmp ecx, eax
// 005d40de  7403                 je 0x5d40e3
// 005d40e0  8d4114               lea eax, [ecx + 0x14]
// 005d40e3  8b0d4ca09700         mov ecx, dword ptr [0x97a04c]
// 005d40e9  8b11                 mov edx, dword ptr [ecx]
// 005d40eb  8d742414             lea esi, [esp + 0x14]
// 005d40ef  56                   push esi
// 005d40f0  50                   push eax
// 005d40f1  8b420c               mov eax, dword ptr [edx + 0xc]
// 005d40f4  ffd0                 call eax
// 005d40f6  8bce                 mov ecx, esi
// 005d40f8  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005d4100  ff1568248000         call dword ptr [0x802468]
// 005d4106  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d410a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4111  5e                   pop esi
// 005d4112  83c40c               add esp, 0xc
// 005d4115  c22000               ret 0x20

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[32];
    public:
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

extern void (__thiscall* string_destroy)(String*);

template<class T, class Traits, class Alloc>
__forceinline std::basic_string<T, Traits, Alloc>::~basic_string()
{
    string_destroy(this);
}

struct Service {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const String&);
};

extern Service* service;

struct S {
    char padding[20];
    char property;
    void f(String value);
};

void S::f(String value)
{
    service->set(this ? &property : 0, value);
}
