// from server: 100% by king_originala
// roc 2008-06 004a6d00  unit: RBX::VHint::?$FactoryProduct::Creator  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6d00
//
// 004a6d00  6aff                 push -1
// 004a6d02  6809e77c00           push 0x7ce709
// 004a6d07  64a100000000         mov eax, dword ptr fs:[0]
// 004a6d0d  50                   push eax
// 004a6d0e  64892500000000       mov dword ptr fs:[0], esp
// 004a6d15  83ec1c               sub esp, 0x1c
// 004a6d18  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004a6d1c  8d0424               lea eax, [esp]
// 004a6d1f  50                   push eax
// 004a6d20  e8eb26faff           call 0x449410
// 004a6d25  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a6d29  50                   push eax
// 004a6d2a  51                   push ecx
// 004a6d2b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004a6d33  e828f8ffff           call 0x4a6560
// 004a6d38  83c408               add esp, 8
// 004a6d3b  8d0c24               lea ecx, [esp]
// 004a6d3e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004a6d46  ff1568248000         call dword ptr [0x802468]
// 004a6d4c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a6d50  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6d57  83c428               add esp, 0x28
// 004a6d5a  c3                   ret 

extern void (__thiscall *destroyString)(void *);

namespace std {
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        destroyString(this);
    }
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

struct Source {
    String get();
};

extern void __cdecl consume(void *, const String &);

void __cdecl reconstruct(Source *source, void *destination)
{
    consume(destination, source->get());
}
