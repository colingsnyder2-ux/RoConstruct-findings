// from server: 56% by colin
// roc 2007-08 005804b0  unit: RBX::Log  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005804b0
//
// 005804b0  83ec14               sub esp, 0x14
// 005804b3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005804b7  8b08                 mov ecx, dword ptr [eax]
// 005804b9  56                   push esi
// 005804ba  51                   push ecx
// 005804bb  68a0d37800           push 0x78d3a0
// 005804c0  8d542410             lea edx, [esp + 0x10]
// 005804c4  6a10                 push 0x10
// 005804c6  52                   push edx
// 005804c7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005804cf  ff155ce87700         call dword ptr [0x77e85c]
// 005804d5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005804d9  83c410               add esp, 0x10
// 005804dc  8d442408             lea eax, [esp + 8]
// 005804e0  50                   push eax
// 005804e1  8bce                 mov ecx, esi
// 005804e3  ff1598e67700         call dword ptr [0x77e698]
// 005804e9  8bc6                 mov eax, esi
// 005804eb  5e                   pop esi
// 005804ec  83c414               add esp, 0x14
// 005804ef  c3                   ret 

struct Log {
    char pad[8];
    void timeStamp(bool includeDate);
};

extern "C" int __stdcall _snprintf(char*, unsigned int, const char*, ...);

struct String {
    char buf[16];
    String(const char*);
};

void Log::timeStamp(bool includeDate) {
    char buffer[16];
    buffer[0] = 0;
    _snprintf(buffer, 16, "%s", "o@46");
    String s(buffer);
    (void)s;
}
