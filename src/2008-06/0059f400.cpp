// from server: 100% by king_originala
// roc 2008-06 0059f400  unit: RBX::VMeshId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f400
//
// 0059f400  6aff                 push -1
// 0059f402  68e88e7d00           push 0x7d8ee8
// 0059f407  64a100000000         mov eax, dword ptr fs:[0]
// 0059f40d  50                   push eax
// 0059f40e  64892500000000       mov dword ptr fs:[0], esp
// 0059f415  83ec20               sub esp, 0x20
// 0059f418  56                   push esi
// 0059f419  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0059f41c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0059f420  8d442404             lea eax, [esp + 4]
// 0059f424  50                   push eax
// 0059f425  e8e6feffff           call 0x59f310
// 0059f42a  8b16                 mov edx, dword ptr [esi]
// 0059f42c  8b520c               mov edx, dword ptr [edx + 0xc]
// 0059f42f  50                   push eax
// 0059f430  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059f434  50                   push eax
// 0059f435  8bce                 mov ecx, esi
// 0059f437  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059f43f  ffd2                 call edx
// 0059f441  8d4c2404             lea ecx, [esp + 4]
// 0059f445  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0059f44d  ff1568248000         call dword ptr [0x802468]
// 0059f453  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059f457  5e                   pop esi
// 0059f458  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f45f  83c42c               add esp, 0x2c
// 0059f462  c20800               ret 8

extern void (__thiscall *destroy_string)(void*);

namespace std
{
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string
    {
        char storage[32];
    public:
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        destroy_string(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Value
{
    std::string get();
};

struct Setter
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(void*, const std::string&) = 0;
};

struct S
{
    char padding[24];
    Setter* setter;

    void f(void*, Value*);
};

void S::f(void* object, Value* value)
{
    Setter* target = setter;
    target->set(object, value->get());
}
