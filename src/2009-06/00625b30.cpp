// roc 2009-06 00625b30  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00625b30
//
// 00625b30  6aff                 push -1
// 00625b32  6868a88600           push 0x86a868
// 00625b37  64a100000000         mov eax, dword ptr fs:[0]
// 00625b3d  50                   push eax
// 00625b3e  64892500000000       mov dword ptr fs:[0], esp
// 00625b45  83ec20               sub esp, 0x20
// 00625b48  56                   push esi
// 00625b49  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00625b4c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00625b50  8d442404             lea eax, [esp + 4]
// 00625b54  50                   push eax
// 00625b55  e8e6feffff           call 0x625a40
// 00625b5a  8b16                 mov edx, dword ptr [esi]
// 00625b5c  8b520c               mov edx, dword ptr [edx + 0xc]
// 00625b5f  50                   push eax
// 00625b60  8b442438             mov eax, dword ptr [esp + 0x38]
// 00625b64  50                   push eax
// 00625b65  8bce                 mov ecx, esi
// 00625b67  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00625b6f  ffd2                 call edx
// 00625b71  8d4c2404             lea ecx, [esp + 4]
// 00625b75  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00625b7d  ff15c4e48900         call dword ptr [0x89e4c4]
// 00625b83  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00625b87  5e                   pop esi
// 00625b88  64890d00000000       mov dword ptr fs:[0], ecx
// 00625b8f  83c42c               add esp, 0x2c
// 00625b92  c20800               ret 8
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