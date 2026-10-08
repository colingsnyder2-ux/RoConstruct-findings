// from server: 44% by colin
// roc 2007-08 005fd370  unit: RBX::HammerTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd370
//
// 005fd370  51                   push ecx
// 005fd371  83792000             cmp dword ptr [ecx + 0x20], 0
// 005fd375  c7042400000000       mov dword ptr [esp], 0
// 005fd37c  b8a8257c00           mov eax, 0x7c25a8
// 005fd381  7505                 jne 0x5fd388
// 005fd383  b898257c00           mov eax, 0x7c2598
// 005fd388  56                   push esi
// 005fd389  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fd38d  50                   push eax
// 005fd38e  8bce                 mov ecx, esi
// 005fd390  ff1598e67700         call dword ptr [0x77e698]
// 005fd396  8bc6                 mov eax, esi
// 005fd398  5e                   pop esi
// 005fd399  59                   pop ecx
// 005fd39a  c20400               ret 4

struct HammerTool {
    char pad[0x20];
    int field_20;
    void* construct(const char*);
};

void* HammerTool::construct(const char* s) {
    const char* name;
    if (field_20 == 0) {
        name = (const char*)0x7c2598;
    } else {
        name = (const char*)0x7c25a8;
    }
    ((void (__thiscall*)(void*, const char*))0x77e698)(this, name);
    return this;
}
