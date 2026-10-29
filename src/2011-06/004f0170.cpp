// roc 2011-06 004f0170  unit: RBX::RbxRay  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f0170
//
// 004f0170  51                   push ecx
// 004f0171  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f0175  8b4804               mov ecx, dword ptr [eax + 4]
// 004f0178  56                   push esi
// 004f0179  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f017d  83c104               add ecx, 4
// 004f0180  51                   push ecx
// 004f0181  8bce                 mov ecx, esi
// 004f0183  c744240800000000     mov dword ptr [esp + 8], 0
// 004f018b  ff15c804a400         call dword ptr [0xa404c8]
// 004f0191  8bc6                 mov eax, esi
// 004f0193  5e                   pop esi
// 004f0194  59                   pop ecx
// 004f0195  c20800               ret 8
// copied from an identical function in another client (function ?create@Creator@ns_ROCX00000c@@QAE?AUString@2@PBUArgument@2@@Z)

namespace ns_ROCX00000c {
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
}
