// from server: 47% by colin
// roc 2007-08 005804f0  unit: RBX::Log  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005804f0
//
// 005804f0  83ec14               sub esp, 0x14
// 005804f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005804f7  8b08                 mov ecx, dword ptr [eax]
// 005804f9  56                   push esi
// 005804fa  51                   push ecx
// 005804fb  68c4ef7900           push 0x79efc4
// 00580500  8d542410             lea edx, [esp + 0x10]
// 00580504  6a10                 push 0x10
// 00580506  52                   push edx
// 00580507  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058050f  ff155ce87700         call dword ptr [0x77e85c]
// 00580515  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00580519  83c410               add esp, 0x10
// 0058051c  8d442408             lea eax, [esp + 8]
// 00580520  50                   push eax
// 00580521  8bce                 mov ecx, esi
// 00580523  ff1598e67700         call dword ptr [0x77e698]
// 00580529  8bc6                 mov eax, esi
// 0058052b  5e                   pop esi
// 0058052c  83c414               add esp, 0x14
// 0058052f  c3                   ret 

struct Log {
    char pad[8];
    void timeStamp(bool includeDate);
};

extern "C" {
    int __cdecl _snprintf(char* buffer, unsigned int count, const char* format, ...);
}

struct String {
    char pad[0x10];
    String(const char* s);
};

void Log::timeStamp(bool includeDate) {
    char buffer[0x10];
    buffer[0] = 0;
    _snprintf(buffer, 0x10, "%s", "");
    String* s = (String*)((char*)this + 8);
    s->String::String(buffer);
}
