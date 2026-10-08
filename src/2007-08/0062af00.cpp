// from server: 76% by colin
// roc 2007-08 0062af00  unit: RBX::GroupDragTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062af00
//
// 0062af00  51                   push ecx
// 0062af01  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 0062af05  c7042400000000       mov dword ptr [esp], 0
// 0062af0c  b8304a7c00           mov eax, 0x7c4a30
// 0062af11  7505                 jne 0x62af18
// 0062af13  b8c8d07b00           mov eax, 0x7bd0c8
// 0062af18  56                   push esi
// 0062af19  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062af1d  50                   push eax
// 0062af1e  8bce                 mov ecx, esi
// 0062af20  ff1598e67700         call dword ptr [0x77e698]
// 0062af26  8bc6                 mov eax, esi
// 0062af28  5e                   pop esi
// 0062af29  59                   pop ecx
// 0062af2a  c20400               ret 4

struct MouseCommand {
    char pad[0x2c];
    bool dragging;
};

struct GroupDragTool : MouseCommand {
    void* getCursorName(void* result);
};

typedef void* (__thiscall *StringCtorFn)(void*, const char*);
extern StringCtorFn g_stringCtor;

void* GroupDragTool::getCursorName(void* result) {
    char buf[4];
    *(int*)buf = 0;
    const char* cursor = dragging ? "GrabRotateCursor" : "DragCursor";
    g_stringCtor(result, cursor);
    return result;
}
