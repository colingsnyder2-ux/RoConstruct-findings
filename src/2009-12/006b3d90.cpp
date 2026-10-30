// roc 2009-12 006b3d90  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b3d90
//
// 006b3d90  64a100000000         mov eax, dword ptr fs:[0]
// 006b3d96  6aff                 push -1
// 006b3d98  68e8899300           push 0x9389e8
// 006b3d9d  50                   push eax
// 006b3d9e  64892500000000       mov dword ptr fs:[0], esp
// 006b3da5  56                   push esi
// 006b3da6  57                   push edi
// 006b3da7  8bf1                 mov esi, ecx
// 006b3da9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b3dad  33c0                 xor eax, eax
// 006b3daf  8d54241c             lea edx, [esp + 0x1c]
// 006b3db3  894e04               mov dword ptr [esi + 4], ecx
// 006b3db6  8d7e0c               lea edi, [esi + 0xc]
// 006b3db9  52                   push edx
// 006b3dba  8bcf                 mov ecx, edi
// 006b3dbc  89442414             mov dword ptr [esp + 0x14], eax
// 006b3dc0  8906                 mov dword ptr [esi], eax
// 006b3dc2  894608               mov dword ptr [esi + 8], eax
// 006b3dc5  ff15f0b69800         call dword ptr [0x98b6f0]
// 006b3dcb  8b442438             mov eax, dword ptr [esp + 0x38]
// 006b3dcf  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 006b3dd3  89471c               mov dword ptr [edi + 0x1c], eax
// 006b3dd6  884e2c               mov byte ptr [esi + 0x2c], cl
// 006b3dd9  8d4c241c             lea ecx, [esp + 0x1c]
// 006b3ddd  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006b3de5  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b3deb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b3def  5f                   pop edi
// 006b3df0  8bc6                 mov eax, esi
// 006b3df2  64890d00000000       mov dword ptr fs:[0], ecx
// 006b3df9  5e                   pop esi
// 006b3dfa  83c40c               add esp, 0xc
// 006b3dfd  c22800               ret 0x28
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