// from server: 68% by colin
// roc 2007-08 00594790  unit: RBX::InletTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594790
//
// 00594790  51                   push ecx
// 00594791  56                   push esi
// 00594792  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594796  689c077b00           push 0x7b079c
// 0059479b  8bce                 mov ecx, esi
// 0059479d  c744240800000000     mov dword ptr [esp + 8], 0
// 005947a5  ff1598e67700         call dword ptr [0x77e698]
// 005947ab  8bc6                 mov eax, esi
// 005947ad  5e                   pop esi
// 005947ae  59                   pop ecx
// 005947af  c20400               ret 4

struct InletTool {
    char pad[8];
    void* field8;
    InletTool(void* workspace);
};

extern "C" void* __stdcall sub_77E698(void*, const char*);

InletTool::InletTool(void* workspace)
{
    field8 = 0;
    sub_77E698(this, "InletCursor");
}
