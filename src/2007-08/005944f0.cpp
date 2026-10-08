// from server: 68% by colin
// roc 2007-08 005944f0  unit: RBX::WeldTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005944f0
//
// 005944f0  51                   push ecx
// 005944f1  56                   push esi
// 005944f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005944f6  688c067b00           push 0x7b068c
// 005944fb  8bce                 mov ecx, esi
// 005944fd  c744240800000000     mov dword ptr [esp + 8], 0
// 00594505  ff1598e67700         call dword ptr [0x77e698]
// 0059450b  8bc6                 mov eax, esi
// 0059450d  5e                   pop esi
// 0059450e  59                   pop ecx
// 0059450f  c20400               ret 4

struct WeldTool {
    char pad[8];
    void* cursorName;
    WeldTool(void* workspace);
};

extern "C" void* __stdcall WeldTool_string_ctor(void*, const char*);

WeldTool::WeldTool(void* workspace)
{
    cursorName = 0;
    WeldTool_string_ctor(this, "WeldCursor");
}
