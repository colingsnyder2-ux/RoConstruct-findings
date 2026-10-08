// from server: 68% by colin
// roc 2007-08 005948e0  unit: RBX::HingeTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005948e0
//
// 005948e0  51                   push ecx
// 005948e1  56                   push esi
// 005948e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005948e6  6824087b00           push 0x7b0824
// 005948eb  8bce                 mov ecx, esi
// 005948ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005948f5  ff1598e67700         call dword ptr [0x77e698]
// 005948fb  8bc6                 mov eax, esi
// 005948fd  5e                   pop esi
// 005948fe  59                   pop ecx
// 005948ff  c20400               ret 4

struct HingeTool {
    char pad[8];
    void* field8;
    HingeTool(void* workspace);
};

extern "C" void* __stdcall sub_77e698(void*, const char*);

HingeTool::HingeTool(void* workspace)
{
    field8 = 0;
    sub_77e698(this, "HingeCursor");
}
