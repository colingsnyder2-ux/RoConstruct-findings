// from server: 100% by king_originala
// roc 2008-06 0046cb80  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cb80
//
// 0046cb80  6aff                 push -1
// 0046cb82  686b3c7c00           push 0x7c3c6b
// 0046cb87  64a100000000         mov eax, dword ptr fs:[0]
// 0046cb8d  50                   push eax
// 0046cb8e  64892500000000       mov dword ptr fs:[0], esp
// 0046cb95  83ec1c               sub esp, 0x1c
// 0046cb98  53                   push ebx
// 0046cb99  68d0c88100           push 0x81c8d0
// 0046cb9e  8d4c2408             lea ecx, [esp + 8]
// 0046cba2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0046cbaa  ff1558248000         call dword ptr [0x802458]
// 0046cbb0  8d442404             lea eax, [esp + 4]
// 0046cbb4  50                   push eax
// 0046cbb5  8d4c2434             lea ecx, [esp + 0x34]
// 0046cbb9  51                   push ecx
// 0046cbba  c644243001           mov byte ptr [esp + 0x30], 1
// 0046cbbf  e82c2e0000           call 0x46f9f0
// 0046cbc4  83c408               add esp, 8
// 0046cbc7  85c0                 test eax, eax
// 0046cbc9  8d4c2404             lea ecx, [esp + 4]
// 0046cbcd  0f94c3               sete bl
// 0046cbd0  c644242800           mov byte ptr [esp + 0x28], 0
// 0046cbd5  ff1568248000         call dword ptr [0x802468]
// 0046cbdb  84db                 test bl, bl
// 0046cbdd  7426                 je 0x46cc05
// 0046cbdf  8d4c2430             lea ecx, [esp + 0x30]
// 0046cbe3  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0046cbeb  ff1568248000         call dword ptr [0x802468]
// 0046cbf1  33c0                 xor eax, eax
// 0046cbf3  5b                   pop ebx
// 0046cbf4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046cbf8  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cbff  83c428               add esp, 0x28
// 0046cc02  c21c00               ret 0x1c
// 0046cc05  68c8c88100           push 0x81c8c8
// 0046cc0a  8d4c2408             lea ecx, [esp + 8]
// 0046cc0e  ff1558248000         call dword ptr [0x802458]
// 0046cc14  8d542404             lea edx, [esp + 4]
// 0046cc18  52                   push edx
// 0046cc19  8d442434             lea eax, [esp + 0x34]
// 0046cc1d  50                   push eax
// 0046cc1e  c644243002           mov byte ptr [esp + 0x30], 2
// 0046cc23  e8c82d0000           call 0x46f9f0
// 0046cc28  83c408               add esp, 8
// 0046cc2b  85c0                 test eax, eax
// 0046cc2d  8d4c2404             lea ecx, [esp + 4]
// 0046cc31  0f94c3               sete bl
// 0046cc34  c644242800           mov byte ptr [esp + 0x28], 0
// 0046cc39  ff1568248000         call dword ptr [0x802468]
// 0046cc3f  8d4c2430             lea ecx, [esp + 0x30]
// 0046cc43  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0046cc4b  ff1568248000         call dword ptr [0x802468]
// 0046cc51  b801000000           mov eax, 1
// 0046cc56  84db                 test bl, bl
// 0046cc58  7505                 jne 0x46cc5f
// 0046cc5a  b802000000           mov eax, 2
// 0046cc5f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046cc63  5b                   pop ebx
// 0046cc64  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cc6b  83c428               add esp, 0x28
// 0046cc6e  c21c00               ret 0x1c

struct String
{
    char storage[28];

    String(const char *);
    ~String();
};

extern void (__thiscall *constructString)(String *, const char *);
extern void (__thiscall *destroyString)(String *);
extern int __cdecl compare(const String &, const String &);

inline String::String(const char *text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

int __stdcall classify(String value)
{
    if (compare(value, String("exact")) == 0)
        return 0;

    bool matched = compare(value, String("close")) == 0;
    if (matched)
        return 1;
    return 2;
}
