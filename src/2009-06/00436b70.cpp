// roc 2009-06 00436b70  unit: MVCXTPPropertyGridItem::?$XItem  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00436b70
//
// 00436b70  64a100000000         mov eax, dword ptr fs:[0]
// 00436b76  6aff                 push -1
// 00436b78  6898fb8400           push 0x84fb98
// 00436b7d  50                   push eax
// 00436b7e  64892500000000       mov dword ptr fs:[0], esp
// 00436b85  56                   push esi
// 00436b86  57                   push edi
// 00436b87  8bf1                 mov esi, ecx
// 00436b89  8b442418             mov eax, dword ptr [esp + 0x18]
// 00436b8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00436b91  8b542420             mov edx, dword ptr [esp + 0x20]
// 00436b95  8906                 mov dword ptr [esi], eax
// 00436b97  8d442424             lea eax, [esp + 0x24]
// 00436b9b  894e04               mov dword ptr [esi + 4], ecx
// 00436b9e  8d7e0c               lea edi, [esi + 0xc]
// 00436ba1  50                   push eax
// 00436ba2  8bcf                 mov ecx, edi
// 00436ba4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00436bac  895608               mov dword ptr [esi + 8], edx
// 00436baf  ff15b8e48900         call dword ptr [0x89e4b8]
// 00436bb5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00436bb9  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00436bbc  8d4c2424             lea ecx, [esp + 0x24]
// 00436bc0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00436bc8  ff15c4e48900         call dword ptr [0x89e4c4]
// 00436bce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00436bd2  5f                   pop edi
// 00436bd3  8bc6                 mov eax, esi
// 00436bd5  64890d00000000       mov dword ptr fs:[0], ecx
// 00436bdc  5e                   pop esi
// 00436bdd  83c40c               add esp, 0xc
// 00436be0  c22c00               ret 0x2c
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