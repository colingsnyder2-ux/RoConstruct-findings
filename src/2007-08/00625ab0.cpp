// from server: 63% by colin
// roc 2007-08 00625ab0  unit: RBX::PartDragTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625ab0
//
// 00625ab0  51                   push ecx
// 00625ab1  80793000             cmp byte ptr [ecx + 0x30], 0
// 00625ab5  c7042400000000       mov dword ptr [esp], 0
// 00625abc  b8304a7c00           mov eax, 0x7c4a30
// 00625ac1  7505                 jne 0x625ac8
// 00625ac3  b8c8d07b00           mov eax, 0x7bd0c8
// 00625ac8  56                   push esi
// 00625ac9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00625acd  50                   push eax
// 00625ace  8bce                 mov ecx, esi
// 00625ad0  ff1598e67700         call dword ptr [0x77e698]
// 00625ad6  8bc6                 mov eax, esi
// 00625ad8  5e                   pop esi
// 00625ad9  59                   pop ecx
// 00625ada  c20400               ret 4

struct PartDragTool {
    char pad[0x30];
    bool flag;
    void* MakeCursor(void* arg);
};

void* PartDragTool::MakeCursor(void* arg)
{
    const char* name = flag ? "DragCursor" : "GrabRotateCursor";
    void* result = arg;
    ((void* (__thiscall*)(void*, const char*))0x77e698)(arg, name);
    return result;
}
