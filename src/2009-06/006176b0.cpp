// roc 2009-06 006176b0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006176b0
//
// 006176b0  6aff                 push -1
// 006176b2  6868a88600           push 0x86a868
// 006176b7  64a100000000         mov eax, dword ptr fs:[0]
// 006176bd  50                   push eax
// 006176be  64892500000000       mov dword ptr fs:[0], esp
// 006176c5  83ec20               sub esp, 0x20
// 006176c8  56                   push esi
// 006176c9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 006176cc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006176d0  8d442404             lea eax, [esp + 4]
// 006176d4  50                   push eax
// 006176d5  e836fbffff           call 0x617210
// 006176da  8b16                 mov edx, dword ptr [esi]
// 006176dc  8b520c               mov edx, dword ptr [edx + 0xc]
// 006176df  50                   push eax
// 006176e0  8b442438             mov eax, dword ptr [esp + 0x38]
// 006176e4  50                   push eax
// 006176e5  8bce                 mov ecx, esi
// 006176e7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006176ef  ffd2                 call edx
// 006176f1  8d4c2404             lea ecx, [esp + 4]
// 006176f5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 006176fd  ff15c4e48900         call dword ptr [0x89e4c4]
// 00617703  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00617707  5e                   pop esi
// 00617708  64890d00000000       mov dword ptr fs:[0], ecx
// 0061770f  83c42c               add esp, 0x2c
// 00617712  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAEXPAXPAUValue@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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