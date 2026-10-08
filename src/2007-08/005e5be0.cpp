// from server: 57% by colin
// roc 2007-08 005e5be0  unit: RBX::NullTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5be0
//
// 005e5be0  51                   push ecx
// 005e5be1  56                   push esi
// 005e5be2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e5be6  6860d27b00           push 0x7bd260
// 005e5beb  8bce                 mov ecx, esi
// 005e5bed  c744240800000000     mov dword ptr [esp + 8], 0
// 005e5bf5  ff1598e67700         call dword ptr [0x77e698]
// 005e5bfb  8bc6                 mov eax, esi
// 005e5bfd  5e                   pop esi
// 005e5bfe  59                   pop ecx
// 005e5bff  c20400               ret 4

struct NullTool {
    char pad[4];
    void* m_str;
    NullTool* construct(char* s);
};

extern "C" void* __stdcall string_ctor(void*, const char*);

NullTool* NullTool::construct(char* s)
{
    m_str = 0;
    string_ctor(&m_str, "ArrowFarCursor");
    return this;
}
