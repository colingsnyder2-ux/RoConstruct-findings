// from server: 100% by king_originala
// roc 2008-06 005b6f70  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6f70
//
// 005b6f70  64a100000000         mov eax, dword ptr fs:[0]
// 005b6f76  6aff                 push -1
// 005b6f78  6898397d00           push 0x7d3998
// 005b6f7d  50                   push eax
// 005b6f7e  64892500000000       mov dword ptr fs:[0], esp
// 005b6f85  56                   push esi
// 005b6f86  57                   push edi
// 005b6f87  8bf1                 mov esi, ecx
// 005b6f89  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005b6f8d  33c0                 xor eax, eax
// 005b6f8f  8d54241c             lea edx, [esp + 0x1c]
// 005b6f93  894e04               mov dword ptr [esi + 4], ecx
// 005b6f96  8d7e0c               lea edi, [esi + 0xc]
// 005b6f99  52                   push edx
// 005b6f9a  8bcf                 mov ecx, edi
// 005b6f9c  89442414             mov dword ptr [esp + 0x14], eax
// 005b6fa0  8906                 mov dword ptr [esi], eax
// 005b6fa2  894608               mov dword ptr [esi + 8], eax
// 005b6fa5  ff155c248000         call dword ptr [0x80245c]
// 005b6fab  8b442438             mov eax, dword ptr [esp + 0x38]
// 005b6faf  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 005b6fb3  89471c               mov dword ptr [edi + 0x1c], eax
// 005b6fb6  884e2c               mov byte ptr [esi + 0x2c], cl
// 005b6fb9  8d4c241c             lea ecx, [esp + 0x1c]
// 005b6fbd  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005b6fc5  ff1568248000         call dword ptr [0x802468]
// 005b6fcb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b6fcf  5f                   pop edi
// 005b6fd0  8bc6                 mov eax, esi
// 005b6fd2  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6fd9  5e                   pop esi
// 005b6fda  83c40c               add esp, 0xc
// 005b6fdd  c22800               ret 0x28

namespace std
{
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Allocator>
    class basic_string
    {
        char storage[28];

    public:
        basic_string(const basic_string&);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

extern String* (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);

namespace std
{
    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::basic_string(
        const basic_string& other)
    {
        stringCopy(this, other);
    }

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        stringDestroy(this);
    }
}

struct NamedValue
{
    String name;
    int value;

    NamedValue(const String& text, int number);
};

inline NamedValue::NamedValue(const String& text, int number)
    : name(text), value(number)
{
}

struct FactoryProduct
{
    int field0;
    void* field4;
    int field8;
    NamedValue named;
    bool flag;

    FactoryProduct(void* arg, String text, int number, bool enabled);
};

FactoryProduct::FactoryProduct(void* arg, String text, int number, bool enabled)
    : field0(0),
      field4(arg),
      field8(0),
      named(text, number),
      flag(enabled)
{
}
