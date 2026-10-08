// from server: 70% by colin
// roc 2007-08 005803f0  unit: RBX::Log  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005803f0
//
// 005803f0  51                   push ecx
// 005803f1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005803f5  803800               cmp byte ptr [eax], 0
// 005803f8  c7042400000000       mov dword ptr [esp], 0
// 005803ff  b8440b7a00           mov eax, 0x7a0b44
// 00580404  7505                 jne 0x58040b
// 00580406  b8d0797900           mov eax, 0x7979d0
// 0058040b  56                   push esi
// 0058040c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00580410  50                   push eax
// 00580411  8bce                 mov ecx, esi
// 00580413  ff1598e67700         call dword ptr [0x77e698]
// 00580419  8bc6                 mov eax, esi
// 0058041b  5e                   pop esi
// 0058041c  59                   pop ecx
// 0058041d  c3                   ret 

struct Log {
    char pad[4];
    void construct(const char* logFile);
};

void Log::construct(const char* logFile) {
    char buf[4];
    buf[0] = 0;
    const char* name = (logFile[0] != 0) ? "true" : "false";
    void* p = buf;
    extern void __stdcall string_ctor(void*, const char*);
    string_ctor(p, name);
}
