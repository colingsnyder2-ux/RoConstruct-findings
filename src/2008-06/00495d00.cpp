// from server: 100% by king_originala
// roc 2008-06 00495d00  unit: RBX::VRunService::?$SignalDesc  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495d00
//
// 00495d00  53                   push ebx
// 00495d01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00495d05  56                   push esi
// 00495d06  57                   push edi
// 00495d07  8bf1                 mov esi, ecx
// 00495d09  8dbe94010000         lea edi, [esi + 0x194]
// 00495d0f  57                   push edi
// 00495d10  53                   push ebx
// 00495d11  ff15d8238000         call dword ptr [0x8023d8]
// 00495d17  83c408               add esp, 8
// 00495d1a  84c0                 test al, al
// 00495d1c  742d                 je 0x495d4b
// 00495d1e  53                   push ebx
// 00495d1f  8bcf                 mov ecx, edi
// 00495d21  ff150c248000         call dword ptr [0x80240c]
// 00495d27  6a00                 push 0
// 00495d29  56                   push esi
// 00495d2a  e881010000           call 0x495eb0
// 00495d2f  83c408               add esp, 8
// 00495d32  84c0                 test al, al
// 00495d34  7409                 je 0x495d3f
// 00495d36  6a00                 push 0
// 00495d38  8bce                 mov ecx, esi
// 00495d3a  e841f6ffff           call 0x495380
// 00495d3f  6890fe9600           push 0x96fe90
// 00495d44  8bce                 mov ecx, esi
// 00495d46  e8b57df7ff           call 0x40db00
// 00495d4b  5f                   pop edi
// 00495d4c  5e                   pop esi
// 00495d4d  5b                   pop ebx
// 00495d4e  c20400               ret 4

struct String
{
    char data[28];
};

extern bool (__cdecl *strings_differ)(const String&, const String&);
extern String& (__thiscall *string_assign)(String*, const String&);
extern int __cdecl sub_495e80(int, int);
extern char descriptor;

struct S
{
    char padding[0x194];
    String value;

    void set(const String&);
    void update(int);
    void notify(const void*);
};

void S::set(const String& input)
{
    if (strings_differ(input, value))
    {
        string_assign(&value, input);
        if ((unsigned char)sub_495e80((int)this, 0))
            update(0);
        notify(&descriptor);
    }
}
