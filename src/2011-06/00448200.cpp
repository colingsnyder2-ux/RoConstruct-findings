// roc 2011-06 00448200  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00448200
//
// 00448200  64a100000000         mov eax, dword ptr fs:[0]
// 00448206  6aff                 push -1
// 00448208  6808159d00           push 0x9d1508
// 0044820d  50                   push eax
// 0044820e  64892500000000       mov dword ptr fs:[0], esp
// 00448215  56                   push esi
// 00448216  57                   push edi
// 00448217  8bf1                 mov esi, ecx
// 00448219  8b442418             mov eax, dword ptr [esp + 0x18]
// 0044821d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00448221  8b542420             mov edx, dword ptr [esp + 0x20]
// 00448225  8906                 mov dword ptr [esi], eax
// 00448227  8d442424             lea eax, [esp + 0x24]
// 0044822b  894e04               mov dword ptr [esi + 4], ecx
// 0044822e  8d7e0c               lea edi, [esi + 0xc]
// 00448231  50                   push eax
// 00448232  8bcf                 mov ecx, edi
// 00448234  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044823c  895608               mov dword ptr [esi + 8], edx
// 0044823f  ff15c804a400         call dword ptr [0xa404c8]
// 00448245  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00448249  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0044824c  8d4c2424             lea ecx, [esp + 0x24]
// 00448250  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00448258  ff15d004a400         call dword ptr [0xa404d0]
// 0044825e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00448262  5f                   pop edi
// 00448263  8bc6                 mov eax, esi
// 00448265  64890d00000000       mov dword ptr fs:[0], ecx
// 0044826c  5e                   pop esi
// 0044826d  83c40c               add esp, 0xc
// 00448270  c22c00               ret 0x2c
// copied from an identical function in another client (function ??0XItem@ns_ROCX00001f@@QAE@IIIUString@1@I@Z)

namespace ns_ROCX00001f {
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
}
