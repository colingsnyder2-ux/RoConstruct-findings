// roc 2010-06 0043a4a0  unit: RBX::Soundscape::VSoundId::?$XItem  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0043a4a0
//
// 0043a4a0  64a100000000         mov eax, dword ptr fs:[0]
// 0043a4a6  6aff                 push -1
// 0043a4a8  6888289800           push 0x982888
// 0043a4ad  50                   push eax
// 0043a4ae  64892500000000       mov dword ptr fs:[0], esp
// 0043a4b5  56                   push esi
// 0043a4b6  57                   push edi
// 0043a4b7  8bf1                 mov esi, ecx
// 0043a4b9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0043a4bd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043a4c1  8b542420             mov edx, dword ptr [esp + 0x20]
// 0043a4c5  8906                 mov dword ptr [esi], eax
// 0043a4c7  8d442424             lea eax, [esp + 0x24]
// 0043a4cb  894e04               mov dword ptr [esi + 4], ecx
// 0043a4ce  8d7e0c               lea edi, [esi + 0xc]
// 0043a4d1  50                   push eax
// 0043a4d2  8bcf                 mov ecx, edi
// 0043a4d4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043a4dc  895608               mov dword ptr [esi + 8], edx
// 0043a4df  ff150ca49e00         call dword ptr [0x9ea40c]
// 0043a4e5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0043a4e9  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0043a4ec  8d4c2424             lea ecx, [esp + 0x24]
// 0043a4f0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0043a4f8  ff1500a49e00         call dword ptr [0x9ea400]
// 0043a4fe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043a502  5f                   pop edi
// 0043a503  8bc6                 mov eax, esi
// 0043a505  64890d00000000       mov dword ptr fs:[0], ecx
// 0043a50c  5e                   pop esi
// 0043a50d  83c40c               add esp, 0xc
// 0043a510  c22c00               ret 0x2c
// copied from an identical function in another client (function ??0XItem@@QAE@IIIUString@@I@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String
{
    unsigned int storage[7];

    String(const String&);
    ~String();
};

extern String* (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);

inline String::String(const String& other)
{
    string_copy(this, other);
}

inline String::~String()
{
    string_destroy(this);
}

struct Value
{
    String text;
    unsigned int last;

    Value(const String&, unsigned int);
};

inline Value::Value(const String& value, unsigned int d)
    : text(value), last(d)
{
}

struct XItem
{
    unsigned int first;
    unsigned int second;
    unsigned int third;
    Value value;

    XItem(unsigned int, unsigned int, unsigned int, String, unsigned int);
};

XItem::XItem(unsigned int a, unsigned int b, unsigned int c,
             String text, unsigned int d)
    : first(a), second(b), third(c), value(text, d)
{
}