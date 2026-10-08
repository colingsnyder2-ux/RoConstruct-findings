// from server: 85% by colin
// roc 2007-08 00594ca0  unit: RBX::ModelSetFrontTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594ca0
//
// 00594ca0  51                   push ecx
// 00594ca1  56                   push esi
// 00594ca2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594ca6  68240a7b00           push 0x7b0a24
// 00594cab  8bce                 mov ecx, esi
// 00594cad  c744240800000000     mov dword ptr [esp + 8], 0
// 00594cb5  ff1598e67700         call dword ptr [0x77e698]
// 00594cbb  8bc6                 mov eax, esi
// 00594cbd  5e                   pop esi
// 00594cbe  59                   pop ecx
// 00594cbf  c20400               ret 4

struct ModelSetFrontTool {
    void* setDirectionCursor(const char* name);
};

extern "C" void* __stdcall MSVCP80_basic_string_ctor(void*, const char*);

void* ModelSetFrontTool::setDirectionCursor(const char* name)
{
    char buf[4];
    *(int*)buf = 0;
    MSVCP80_basic_string_ctor(buf, "DirectionCursor");
    return this;
}
