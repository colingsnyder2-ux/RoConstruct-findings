// roc 2009-06 00646950  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00646950
//
// 00646950  6aff                 push -1
// 00646952  6868a88600           push 0x86a868
// 00646957  64a100000000         mov eax, dword ptr fs:[0]
// 0064695d  50                   push eax
// 0064695e  64892500000000       mov dword ptr fs:[0], esp
// 00646965  83ec20               sub esp, 0x20
// 00646968  56                   push esi
// 00646969  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0064696c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00646970  8d442404             lea eax, [esp + 4]
// 00646974  50                   push eax
// 00646975  e8d6faffff           call 0x646450
// 0064697a  8b16                 mov edx, dword ptr [esi]
// 0064697c  8b520c               mov edx, dword ptr [edx + 0xc]
// 0064697f  50                   push eax
// 00646980  8b442438             mov eax, dword ptr [esp + 0x38]
// 00646984  50                   push eax
// 00646985  8bce                 mov ecx, esi
// 00646987  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0064698f  ffd2                 call edx
// 00646991  8d4c2404             lea ecx, [esp + 4]
// 00646995  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0064699d  ff15c4e48900         call dword ptr [0x89e4c4]
// 006469a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006469a7  5e                   pop esi
// 006469a8  64890d00000000       mov dword ptr fs:[0], ecx
// 006469af  83c42c               add esp, 0x2c
// 006469b2  c20800               ret 8
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