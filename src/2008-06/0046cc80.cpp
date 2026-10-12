// from server: 100% by king_originala
// roc 2008-06 0046cc80  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cc80
//
// 0046cc80  6aff                 push -1
// 0046cc82  68443c7c00           push 0x7c3c44
// 0046cc87  64a100000000         mov eax, dword ptr fs:[0]
// 0046cc8d  50                   push eax
// 0046cc8e  64892500000000       mov dword ptr fs:[0], esp
// 0046cc95  83ec1c               sub esp, 0x1c
// 0046cc98  53                   push ebx
// 0046cc99  68e4c88100           push 0x81c8e4
// 0046cc9e  8d4c2408             lea ecx, [esp + 8]
// 0046cca2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0046ccaa  ff1558248000         call dword ptr [0x802458]
// 0046ccb0  8d442404             lea eax, [esp + 4]
// 0046ccb4  50                   push eax
// 0046ccb5  8d4c2434             lea ecx, [esp + 0x34]
// 0046ccb9  51                   push ecx
// 0046ccba  c644243001           mov byte ptr [esp + 0x30], 1
// 0046ccbf  e82c2d0000           call 0x46f9f0
// 0046ccc4  83c408               add esp, 8
// 0046ccc7  85c0                 test eax, eax
// 0046ccc9  8d4c2404             lea ecx, [esp + 4]
// 0046cccd  0f94c3               sete bl
// 0046ccd0  c644242800           mov byte ptr [esp + 0x28], 0
// 0046ccd5  ff1568248000         call dword ptr [0x802468]
// 0046ccdb  84db                 test bl, bl
// 0046ccdd  7426                 je 0x46cd05
// 0046ccdf  8d4c2430             lea ecx, [esp + 0x30]
// 0046cce3  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0046cceb  ff1568248000         call dword ptr [0x802468]
// 0046ccf1  33c0                 xor eax, eax
// 0046ccf3  5b                   pop ebx
// 0046ccf4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046ccf8  64890d00000000       mov dword ptr fs:[0], ecx
// 0046ccff  83c428               add esp, 0x28
// 0046cd02  c21c00               ret 0x1c
// 0046cd05  68b82b8100           push 0x812bb8
// 0046cd0a  8d4c2408             lea ecx, [esp + 8]
// 0046cd0e  ff1558248000         call dword ptr [0x802458]
// 0046cd14  8d542404             lea edx, [esp + 4]
// 0046cd18  52                   push edx
// 0046cd19  8d442434             lea eax, [esp + 0x34]
// 0046cd1d  50                   push eax
// 0046cd1e  c644243002           mov byte ptr [esp + 0x30], 2
// 0046cd23  e8c82c0000           call 0x46f9f0
// 0046cd28  83c408               add esp, 8
// 0046cd2b  85c0                 test eax, eax
// 0046cd2d  8d4c2404             lea ecx, [esp + 4]
// 0046cd31  0f94c3               sete bl
// 0046cd34  c644242800           mov byte ptr [esp + 0x28], 0
// 0046cd39  ff1568248000         call dword ptr [0x802468]
// 0046cd3f  84db                 test bl, bl
// 0046cd41  7429                 je 0x46cd6c
// 0046cd43  8d4c2430             lea ecx, [esp + 0x30]
// 0046cd47  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0046cd4f  ff1568248000         call dword ptr [0x802468]
// 0046cd55  b801000000           mov eax, 1
// 0046cd5a  5b                   pop ebx
// 0046cd5b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046cd5f  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cd66  83c428               add esp, 0x28
// 0046cd69  c21c00               ret 0x1c
// 0046cd6c  68d8c88100           push 0x81c8d8
// 0046cd71  8d4c2408             lea ecx, [esp + 8]
// 0046cd75  ff1558248000         call dword ptr [0x802458]
// 0046cd7b  8d4c2404             lea ecx, [esp + 4]
// 0046cd7f  51                   push ecx
// 0046cd80  8d542434             lea edx, [esp + 0x34]
// 0046cd84  52                   push edx
// 0046cd85  c644243003           mov byte ptr [esp + 0x30], 3
// 0046cd8a  e8612c0000           call 0x46f9f0
// 0046cd8f  83c408               add esp, 8
// 0046cd92  85c0                 test eax, eax
// 0046cd94  8d4c2404             lea ecx, [esp + 4]
// 0046cd98  0f94c3               sete bl
// 0046cd9b  c644242800           mov byte ptr [esp + 0x28], 0
// 0046cda0  ff1568248000         call dword ptr [0x802468]
// 0046cda6  8d4c2430             lea ecx, [esp + 0x30]
// 0046cdaa  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0046cdb2  ff1568248000         call dword ptr [0x802468]
// 0046cdb8  b802000000           mov eax, 2
// 0046cdbd  84db                 test bl, bl
// 0046cdbf  7505                 jne 0x46cdc6
// 0046cdc1  b8e7030000           mov eax, 0x3e7
// 0046cdc6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046cdca  5b                   pop ebx
// 0046cdcb  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cdd2  83c428               add esp, 0x28
// 0046cdd5  c21c00               ret 0x1c

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);
extern int __cdecl compare(const String&, const String&);

inline String::String(const char* text)
{
    string_construct(this, text);
}

inline String::~String()
{
    string_destroy(this);
}

int __stdcall mapColor(String value)
{
    if (compare(value, String("ball")) == 0)
        return 0;
    if (compare(value, String("block")) == 0)
        return 1;
    if (compare(value, String("cylinder")) == 0)
        return 2;
    return 999;
}
