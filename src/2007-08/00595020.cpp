// from server: 68% by colin
// roc 2007-08 00595020  unit: RBX::FillTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595020
//
// 00595020  51                   push ecx
// 00595021  56                   push esi
// 00595022  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00595026  68100c7b00           push 0x7b0c10
// 0059502b  8bce                 mov ecx, esi
// 0059502d  c744240800000000     mov dword ptr [esp + 8], 0
// 00595035  ff1598e67700         call dword ptr [0x77e698]
// 0059503b  8bc6                 mov eax, esi
// 0059503d  5e                   pop esi
// 0059503e  59                   pop ecx
// 0059503f  c20400               ret 4

struct FillTool {
    char pad[8];
    void* field8;
    FillTool(void* workspace);
};

extern "C" void* __stdcall sub_77E698(void*, const char*);

FillTool::FillTool(void* workspace)
{
    field8 = 0;
    sub_77E698(this, "FillCursor");
}
