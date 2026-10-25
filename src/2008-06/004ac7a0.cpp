// from server: 100% by colin
// roc 2008-06 004ac7a0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac7a0
//
// 004ac7a0  6aff                 push -1
// 004ac7a2  68d1837c00           push 0x7c83d1
// 004ac7a7  64a100000000         mov eax, dword ptr fs:[0]
// 004ac7ad  50                   push eax
// 004ac7ae  64892500000000       mov dword ptr fs:[0], esp
// 004ac7b5  83ec28               sub esp, 0x28
// 004ac7b8  56                   push esi
// 004ac7b9  8bf1                 mov esi, ecx
// 004ac7bb  833e00               cmp dword ptr [esi], 0
// 004ac7be  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004ac7c6  7514                 jne 0x4ac7dc
// 004ac7c8  8d4c2404             lea ecx, [esp + 4]
// 004ac7cc  e81fd7f5ff           call 0x409ef0
// 004ac7d1  50                   push eax
// 004ac7d2  c644243801           mov byte ptr [esp + 0x38], 1
// 004ac7d7  e824ddf5ff           call 0x40a500
// 004ac7dc  8b442458             mov eax, dword ptr [esp + 0x58]
// 004ac7e0  50                   push eax
// 004ac7e1  83ec1c               sub esp, 0x1c
// 004ac7e4  8d54245c             lea edx, [esp + 0x5c]
// 004ac7e8  8bcc                 mov ecx, esp
// 004ac7ea  89642478             mov dword ptr [esp + 0x78], esp
// 004ac7ee  52                   push edx
// 004ac7ef  ff155c248000         call dword ptr [0x80245c]
// 004ac7f5  8b06                 mov eax, dword ptr [esi]
// 004ac7f7  8b4804               mov ecx, dword ptr [eax + 4]
// 004ac7fa  83c608               add esi, 8
// 004ac7fd  56                   push esi
// 004ac7fe  ffd1                 call ecx
// 004ac800  83c424               add esp, 0x24
// 004ac803  8d4c243c             lea ecx, [esp + 0x3c]
// 004ac807  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004ac80f  ff1568248000         call dword ptr [0x802468]
// 004ac815  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ac819  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac820  5e                   pop esi
// 004ac821  83c434               add esp, 0x34
// 004ac824  c22000               ret 0x20

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}



struct ExceptionObject {
    unsigned long words[10];

    ExceptionObject();
    ~ExceptionObject();
};

extern __declspec(noreturn) void __cdecl raise_exception(const void*);

struct Dispatch {
    void* reserved;
    void (__cdecl *invoke)(void*, std::string, int);
};

struct S {
    Dispatch* dispatch;
    unsigned long reserved;
    unsigned char object[1];

    void invoke(std::string value, int argument);
};

void S::invoke(std::string value, int argument)
{
    if (!dispatch)
        raise_exception(&ExceptionObject());

    dispatch->invoke(object, value, argument);
}
