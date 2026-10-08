// from server: 57% by colin
// roc 2007-08 00594230  unit: RBX::FlatTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594230
//
// 00594230  51                   push ecx
// 00594231  56                   push esi
// 00594232  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594236  687c057b00           push 0x7b057c
// 0059423b  8bce                 mov ecx, esi
// 0059423d  c744240800000000     mov dword ptr [esp + 8], 0
// 00594245  ff1598e67700         call dword ptr [0x77e698]
// 0059424b  8bc6                 mov eax, esi
// 0059424d  5e                   pop esi
// 0059424e  59                   pop ecx
// 0059424f  c20400               ret 4

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD

struct Workspace;

struct FlatTool
{
    char pad[8];
    void* str;
    FlatTool(Workspace* workspace);
};

extern "C" void* __stdcall sub_77E698(void*, const char*);

FlatTool::FlatTool(Workspace* workspace)
{
    str = 0;
    sub_77E698(&str, "FlatCursor");
}
