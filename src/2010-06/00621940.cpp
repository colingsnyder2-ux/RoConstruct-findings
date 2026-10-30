// roc 2010-06 00621940  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621940
//
// 00621940  64a100000000         mov eax, dword ptr fs:[0]
// 00621946  6aff                 push -1
// 00621948  6888ae9900           push 0x99ae88
// 0062194d  50                   push eax
// 0062194e  64892500000000       mov dword ptr fs:[0], esp
// 00621955  56                   push esi
// 00621956  57                   push edi
// 00621957  8bf1                 mov esi, ecx
// 00621959  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062195d  33c0                 xor eax, eax
// 0062195f  8d54241c             lea edx, [esp + 0x1c]
// 00621963  894e04               mov dword ptr [esi + 4], ecx
// 00621966  8d7e0c               lea edi, [esi + 0xc]
// 00621969  52                   push edx
// 0062196a  8bcf                 mov ecx, edi
// 0062196c  89442414             mov dword ptr [esp + 0x14], eax
// 00621970  8906                 mov dword ptr [esi], eax
// 00621972  894608               mov dword ptr [esi + 8], eax
// 00621975  ff150ca49e00         call dword ptr [0x9ea40c]
// 0062197b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0062197f  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 00621983  89471c               mov dword ptr [edi + 0x1c], eax
// 00621986  884e2c               mov byte ptr [esi + 0x2c], cl
// 00621989  8d4c241c             lea ecx, [esp + 0x1c]
// 0062198d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00621995  ff1500a49e00         call dword ptr [0x9ea400]
// 0062199b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062199f  5f                   pop edi
// 006219a0  8bc6                 mov eax, esi
// 006219a2  64890d00000000       mov dword ptr fs:[0], ecx
// 006219a9  5e                   pop esi
// 006219aa  83c40c               add esp, 0xc
// 006219ad  c22800               ret 0x28
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