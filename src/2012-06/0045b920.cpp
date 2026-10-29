// roc 2012-06 0045b920  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0045b920
//
// 0045b920  64a100000000         mov eax, dword ptr fs:[0]
// 0045b926  6aff                 push -1
// 0045b928  6888f1a900           push 0xa9f188
// 0045b92d  50                   push eax
// 0045b92e  64892500000000       mov dword ptr fs:[0], esp
// 0045b935  56                   push esi
// 0045b936  57                   push edi
// 0045b937  8bf1                 mov esi, ecx
// 0045b939  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045b93d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045b941  8b542420             mov edx, dword ptr [esp + 0x20]
// 0045b945  8906                 mov dword ptr [esi], eax
// 0045b947  8d442424             lea eax, [esp + 0x24]
// 0045b94b  894e04               mov dword ptr [esi + 4], ecx
// 0045b94e  8d7e0c               lea edi, [esi + 0xc]
// 0045b951  50                   push eax
// 0045b952  8bcf                 mov ecx, edi
// 0045b954  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0045b95c  895608               mov dword ptr [esi + 8], edx
// 0045b95f  ff154426b200         call dword ptr [0xb22644]
// 0045b965  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0045b969  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0045b96c  8d4c2424             lea ecx, [esp + 0x24]
// 0045b970  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0045b978  ff153c26b200         call dword ptr [0xb2263c]
// 0045b97e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045b982  5f                   pop edi
// 0045b983  8bc6                 mov eax, esi
// 0045b985  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b98c  5e                   pop esi
// 0045b98d  83c40c               add esp, 0xc
// 0045b990  c22c00               ret 0x2c
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