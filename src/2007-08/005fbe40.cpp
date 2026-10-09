// from server: 79% by colin
// roc 2007-08 005fbe40  unit: RBX::SlingshotTool  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fbe40
//
// 005fbe40  51                   push ecx
// 005fbe41  83793000             cmp dword ptr [ecx + 0x30], 0
// 005fbe45  56                   push esi
// 005fbe46  c744240400000000     mov dword ptr [esp + 4], 0
// 005fbe4e  741e                 je 0x5fbe6e
// 005fbe50  83792c0a             cmp dword ptr [ecx + 0x2c], 0xa
// 005fbe54  7e18                 jle 0x5fbe6e
// 005fbe56  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fbe5a  68c8247c00           push 0x7c24c8
// 005fbe5f  8bce                 mov ecx, esi
// 005fbe61  ff1598e67700         call dword ptr [0x77e698]
// 005fbe67  8bc6                 mov eax, esi
// 005fbe69  5e                   pop esi
// 005fbe6a  59                   pop ecx
// 005fbe6b  c20400               ret 4
// 005fbe6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fbe72  68000f7b00           push 0x7b0f00
// 005fbe77  8bce                 mov ecx, esi
// 005fbe79  ff1598e67700         call dword ptr [0x77e698]
// 005fbe7f  8bc6                 mov eax, esi
// 005fbe81  5e                   pop esi
// 005fbe82  59                   pop ecx
// 005fbe83  c20400               ret 4

struct RBX_SlingshotTool
{
    char pad[0x2c];
    int field_2c;
    int field_30;
    void* getCursor(void*);
};

extern "C" void* __stdcall string_ctor(void*, const char*);

void* RBX_SlingshotTool::getCursor(void* a)
{
    void* result = 0;
    if (this->field_30 != 0 && this->field_2c > 0xa)
    {
        string_ctor(&result, "GunCursor");
    }
    else
    {
        string_ctor(&result, "GunWaitCursor");
    }
    return a;
}
