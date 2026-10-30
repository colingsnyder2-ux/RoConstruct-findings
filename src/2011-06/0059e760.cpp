// roc 2011-06 0059e760  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059e760
//
// 0059e760  64a100000000         mov eax, dword ptr fs:[0]
// 0059e766  6aff                 push -1
// 0059e768  68580f9e00           push 0x9e0f58
// 0059e76d  50                   push eax
// 0059e76e  64892500000000       mov dword ptr fs:[0], esp
// 0059e775  56                   push esi
// 0059e776  57                   push edi
// 0059e777  8bf1                 mov esi, ecx
// 0059e779  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059e77d  33c0                 xor eax, eax
// 0059e77f  8d54241c             lea edx, [esp + 0x1c]
// 0059e783  894e04               mov dword ptr [esi + 4], ecx
// 0059e786  8d7e0c               lea edi, [esi + 0xc]
// 0059e789  52                   push edx
// 0059e78a  8bcf                 mov ecx, edi
// 0059e78c  89442414             mov dword ptr [esp + 0x14], eax
// 0059e790  8906                 mov dword ptr [esi], eax
// 0059e792  894608               mov dword ptr [esi + 8], eax
// 0059e795  ff15c804a400         call dword ptr [0xa404c8]
// 0059e79b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059e79f  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 0059e7a3  89471c               mov dword ptr [edi + 0x1c], eax
// 0059e7a6  884e2c               mov byte ptr [esi + 0x2c], cl
// 0059e7a9  8d4c241c             lea ecx, [esp + 0x1c]
// 0059e7ad  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0059e7b5  ff15d004a400         call dword ptr [0xa404d0]
// 0059e7bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059e7bf  5f                   pop edi
// 0059e7c0  8bc6                 mov eax, esi
// 0059e7c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e7c9  5e                   pop esi
// 0059e7ca  83c40c               add esp, 0xc
// 0059e7cd  c22800               ret 0x28
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