// from server: 100% by king_originala
// roc 2008-06 0063f6c0  unit: RBX::HammerTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f6c0
//
// 0063f6c0  51                   push ecx
// 0063f6c1  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 0063f6c5  c7042400000000       mov dword ptr [esp], 0
// 0063f6cc  b810a48400           mov eax, 0x84a410
// 0063f6d1  7505                 jne 0x63f6d8
// 0063f6d3  b800a48400           mov eax, 0x84a400
// 0063f6d8  56                   push esi
// 0063f6d9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063f6dd  50                   push eax
// 0063f6de  8bce                 mov ecx, esi
// 0063f6e0  ff1558248000         call dword ptr [0x802458]
// 0063f6e6  8bc6                 mov eax, esi
// 0063f6e8  5e                   pop esi
// 0063f6e9  59                   pop ecx
// 0063f6ea  c20400               ret 4

typedef void (__thiscall *StringConstructor)(void *, const char *);
extern StringConstructor constructString;

struct HammerTool {
    char padding[0x1c];
    int over;
    void *cursor(void *result);
};

void *HammerTool::cursor(void *result)
{
    volatile int state = 0;
    const char *text = over ? "HammerOverCursor" : "HammerCursor";
    constructString(result, text);
    return result;
}
