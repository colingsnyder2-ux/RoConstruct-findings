// roc 2009-12 00438ad0  unit: RBX::Soundscape::VSoundId::?$XItem  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00438ad0
//
// 00438ad0  64a100000000         mov eax, dword ptr fs:[0]
// 00438ad6  6aff                 push -1
// 00438ad8  6838a19200           push 0x92a138
// 00438add  50                   push eax
// 00438ade  64892500000000       mov dword ptr fs:[0], esp
// 00438ae5  56                   push esi
// 00438ae6  57                   push edi
// 00438ae7  8bf1                 mov esi, ecx
// 00438ae9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00438aed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00438af1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00438af5  8906                 mov dword ptr [esi], eax
// 00438af7  8d442424             lea eax, [esp + 0x24]
// 00438afb  894e04               mov dword ptr [esi + 4], ecx
// 00438afe  8d7e0c               lea edi, [esi + 0xc]
// 00438b01  50                   push eax
// 00438b02  8bcf                 mov ecx, edi
// 00438b04  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00438b0c  895608               mov dword ptr [esi + 8], edx
// 00438b0f  ff15f0b69800         call dword ptr [0x98b6f0]
// 00438b15  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00438b19  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00438b1c  8d4c2424             lea ecx, [esp + 0x24]
// 00438b20  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00438b28  ff15e4b69800         call dword ptr [0x98b6e4]
// 00438b2e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00438b32  5f                   pop edi
// 00438b33  8bc6                 mov eax, esi
// 00438b35  64890d00000000       mov dword ptr fs:[0], ecx
// 00438b3c  5e                   pop esi
// 00438b3d  83c40c               add esp, 0xc
// 00438b40  c22c00               ret 0x2c
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