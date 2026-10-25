// from server: 100% by king_originala
// roc 2008-06 004a5d10  unit: RBX::VHint::?$FactoryProduct::Creator  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5d10
//
// 004a5d10  51                   push ecx
// 004a5d11  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a5d15  8b4804               mov ecx, dword ptr [eax + 4]
// 004a5d18  56                   push esi
// 004a5d19  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a5d1d  83c104               add ecx, 4
// 004a5d20  51                   push ecx
// 004a5d21  8bce                 mov ecx, esi
// 004a5d23  c744240800000000     mov dword ptr [esp + 8], 0
// 004a5d2b  ff155c248000         call dword ptr [0x80245c]
// 004a5d31  8bc6                 mov eax, esi
// 004a5d33  5e                   pop esi
// 004a5d34  59                   pop ecx
// 004a5d35  c20800               ret 8

struct String;
extern void (__thiscall *copy_string)(String *, const String *);

struct String
{
    unsigned char data[28];
    String(const String &);
};

inline String::String(const String &other)
{
    copy_string(this, &other);
}

struct Value
{
    unsigned int reserved;
    String text;
};

struct Argument
{
    unsigned int reserved;
    Value *value;
};

struct Creator
{
    String create(const Argument *);
};

String Creator::create(const Argument *arg)
{
    volatile unsigned int temporary = 0;
    return String(arg->value->text);
}
