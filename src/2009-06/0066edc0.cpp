// roc 2009-06 0066edc0  unit: RBX::VMeshId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066edc0
//
// 0066edc0  6aff                 push -1
// 0066edc2  6868a88600           push 0x86a868
// 0066edc7  64a100000000         mov eax, dword ptr fs:[0]
// 0066edcd  50                   push eax
// 0066edce  64892500000000       mov dword ptr fs:[0], esp
// 0066edd5  83ec20               sub esp, 0x20
// 0066edd8  56                   push esi
// 0066edd9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0066eddc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0066ede0  8d442404             lea eax, [esp + 4]
// 0066ede4  50                   push eax
// 0066ede5  e8e6feffff           call 0x66ecd0
// 0066edea  8b16                 mov edx, dword ptr [esi]
// 0066edec  8b520c               mov edx, dword ptr [edx + 0xc]
// 0066edef  50                   push eax
// 0066edf0  8b442438             mov eax, dword ptr [esp + 0x38]
// 0066edf4  50                   push eax
// 0066edf5  8bce                 mov ecx, esi
// 0066edf7  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0066edff  ffd2                 call edx
// 0066ee01  8d4c2404             lea ecx, [esp + 4]
// 0066ee05  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0066ee0d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0066ee13  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0066ee17  5e                   pop esi
// 0066ee18  64890d00000000       mov dword ptr fs:[0], ecx
// 0066ee1f  83c42c               add esp, 0x2c
// 0066ee22  c20800               ret 8
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