// from server: 85% by colin
// roc 2007-08 005943a0  unit: RBX::GlueTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005943a0
//
// 005943a0  51                   push ecx
// 005943a1  56                   push esi
// 005943a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005943a6  6804067b00           push 0x7b0604
// 005943ab  8bce                 mov ecx, esi
// 005943ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005943b5  ff1598e67700         call dword ptr [0x77e698]
// 005943bb  8bc6                 mov eax, esi
// 005943bd  5e                   pop esi
// 005943be  59                   pop ecx
// 005943bf  c20400               ret 4

struct GlueTool {
    char pad[8];
    void* cursorName;
    GlueTool(void* workspace);
};

extern "C" void* __stdcall sub_77E698(void*, const char*);

GlueTool::GlueTool(void* workspace)
{
    char buf[4];
    *(int*)buf = 0;
    sub_77E698(buf, "GlueCursor");
}
