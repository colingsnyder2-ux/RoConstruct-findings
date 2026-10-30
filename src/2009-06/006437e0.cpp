// roc 2009-06 006437e0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006437e0
//
// 006437e0  64a100000000         mov eax, dword ptr fs:[0]
// 006437e6  6aff                 push -1
// 006437e8  6818ad8500           push 0x85ad18
// 006437ed  50                   push eax
// 006437ee  64892500000000       mov dword ptr fs:[0], esp
// 006437f5  56                   push esi
// 006437f6  57                   push edi
// 006437f7  8bf1                 mov esi, ecx
// 006437f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006437fd  33c0                 xor eax, eax
// 006437ff  8d54241c             lea edx, [esp + 0x1c]
// 00643803  894e04               mov dword ptr [esi + 4], ecx
// 00643806  8d7e0c               lea edi, [esi + 0xc]
// 00643809  52                   push edx
// 0064380a  8bcf                 mov ecx, edi
// 0064380c  89442414             mov dword ptr [esp + 0x14], eax
// 00643810  8906                 mov dword ptr [esi], eax
// 00643812  894608               mov dword ptr [esi + 8], eax
// 00643815  ff15b8e48900         call dword ptr [0x89e4b8]
// 0064381b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0064381f  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 00643823  89471c               mov dword ptr [edi + 0x1c], eax
// 00643826  884e2c               mov byte ptr [esi + 0x2c], cl
// 00643829  8d4c241c             lea ecx, [esp + 0x1c]
// 0064382d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00643835  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064383b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064383f  5f                   pop edi
// 00643840  8bc6                 mov eax, esi
// 00643842  64890d00000000       mov dword ptr fs:[0], ecx
// 00643849  5e                   pop esi
// 0064384a  83c40c               add esp, 0xc
// 0064384d  c22800               ret 0x28
// copied from an identical function in another client (function ??0FactoryProduct@@QAE@PAXV?$basic_string@DU?$char_traits@D@std@@U?$allocator@D@2@@std@@H_N@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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