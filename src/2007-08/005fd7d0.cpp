// from server: 43% by colin
// roc 2007-08 005fd7d0  unit: RBX::NewNullTool  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd7d0
//
// 005fd7d0  6aff                 push -1
// 005fd7d2  6888ad7500           push 0x75ad88
// 005fd7d7  64a100000000         mov eax, dword ptr fs:[0]
// 005fd7dd  50                   push eax
// 005fd7de  64892500000000       mov dword ptr fs:[0], esp
// 005fd7e5  51                   push ecx
// 005fd7e6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005fd7ea  56                   push esi
// 005fd7eb  8bf1                 mov esi, ecx
// 005fd7ed  50                   push eax
// 005fd7ee  89742408             mov dword ptr [esp + 8], esi
// 005fd7f2  e81965feff           call 0x5e3d10
// 005fd7f7  6838cf7a00           push 0x7acf38
// 005fd7fc  8d4e20               lea ecx, [esi + 0x20]
// 005fd7ff  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005fd807  c706ec257c00         mov dword ptr [esi], 0x7c25ec
// 005fd80d  c74604d4257c00       mov dword ptr [esi + 4], 0x7c25d4
// 005fd814  ff1598e67700         call dword ptr [0x77e698]
// 005fd81a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd81e  8bc6                 mov eax, esi
// 005fd820  5e                   pop esi
// 005fd821  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd828  83c410               add esp, 0x10
// 005fd82b  c20400               ret 4

struct MouseCommand {
    void construct(const char *);
};

struct NewNullTool : MouseCommand {
    char pad[0x1c];
    void *cursor;
    NewNullTool(const char *);
};

extern "C" void __stdcall sub_5E3D10(const char *);
extern "C" void __stdcall sub_77E698(void *);

void *g_7ACF38 = (void *)0x7acf38;

NewNullTool::NewNullTool(const char *name)
{
    sub_5E3D10(name);
    *(void **)this = (void *)0x7c25ec;
    *(void **)((char *)this + 4) = (void *)0x7c25d4;
    sub_77E698(&g_7ACF38);
    *(void **)((char *)this + 0x20) = 0;
}
