// from server: 70% by colin
// roc 2007-08 005fd9a0  unit: RBX::CloneTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd9a0
//
// 005fd9a0  51                   push ecx
// 005fd9a1  83792000             cmp dword ptr [ecx + 0x20], 0
// 005fd9a5  56                   push esi
// 005fd9a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fd9aa  c744240400000000     mov dword ptr [esp + 4], 0
// 005fd9b2  8bce                 mov ecx, esi
// 005fd9b4  7412                 je 0x5fd9c8
// 005fd9b6  683c267c00           push 0x7c263c
// 005fd9bb  ff1598e67700         call dword ptr [0x77e698]
// 005fd9c1  8bc6                 mov eax, esi
// 005fd9c3  5e                   pop esi
// 005fd9c4  59                   pop ecx
// 005fd9c5  c20400               ret 4
// 005fd9c8  6830267c00           push 0x7c2630
// 005fd9cd  ff1598e67700         call dword ptr [0x77e698]
// 005fd9d3  8bc6                 mov eax, esi
// 005fd9d5  5e                   pop esi
// 005fd9d6  59                   pop ecx
// 005fd9d7  c20400               ret 4

struct CloneTool {
    char pad[0x20];
    int field_20;
    void* getCursorName(void* result);
};

extern "C" void* __stdcall string_ctor(void* self, const char* s);

void* CloneTool::getCursorName(void* result) {
    string_ctor(result, 0);
    if (field_20 != 0) {
        string_ctor(result, (const char*)0x7c263c);
    } else {
        string_ctor(result, (const char*)0x7c2630);
    }
    return result;
}
