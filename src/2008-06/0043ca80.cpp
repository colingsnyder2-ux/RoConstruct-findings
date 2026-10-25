// from server: 100% by king_originala
// roc 2008-06 0043ca80  unit: RBX::Soundscape::VSoundId::?$XItem  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043ca80
//
// 0043ca80  64a100000000         mov eax, dword ptr fs:[0]
// 0043ca86  6aff                 push -1
// 0043ca88  6888067c00           push 0x7c0688
// 0043ca8d  50                   push eax
// 0043ca8e  64892500000000       mov dword ptr fs:[0], esp
// 0043ca95  56                   push esi
// 0043ca96  57                   push edi
// 0043ca97  8bf1                 mov esi, ecx
// 0043ca99  8b442418             mov eax, dword ptr [esp + 0x18]
// 0043ca9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043caa1  8b542420             mov edx, dword ptr [esp + 0x20]
// 0043caa5  8906                 mov dword ptr [esi], eax
// 0043caa7  8d442424             lea eax, [esp + 0x24]
// 0043caab  894e04               mov dword ptr [esi + 4], ecx
// 0043caae  8d7e0c               lea edi, [esi + 0xc]
// 0043cab1  50                   push eax
// 0043cab2  8bcf                 mov ecx, edi
// 0043cab4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043cabc  895608               mov dword ptr [esi + 8], edx
// 0043cabf  ff155c248000         call dword ptr [0x80245c]
// 0043cac5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0043cac9  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0043cacc  8d4c2424             lea ecx, [esp + 0x24]
// 0043cad0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0043cad8  ff1568248000         call dword ptr [0x802468]
// 0043cade  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043cae2  5f                   pop edi
// 0043cae3  8bc6                 mov eax, esi
// 0043cae5  64890d00000000       mov dword ptr fs:[0], ecx
// 0043caec  5e                   pop esi
// 0043caed  83c40c               add esp, 0xc
// 0043caf0  c22c00               ret 0x2c

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
