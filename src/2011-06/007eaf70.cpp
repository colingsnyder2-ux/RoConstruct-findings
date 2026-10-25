// from server: 100% by tester
// roc 2011-06 007eaf70  unit: RBX::VGroupDragTool::?$Named  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eaf70
//
// 007eaf70  51                   push ecx
// 007eaf71  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 007eaf75  c7042400000000       mov dword ptr [esp], 0
// 007eaf7c  b850ebab00           mov eax, 0xabeb50
// 007eaf81  7505                 jne 0x7eaf88
// 007eaf83  b8ec63ab00           mov eax, 0xab63ec
// 007eaf88  56                   push esi
// 007eaf89  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007eaf8d  50                   push eax
// 007eaf8e  8bce                 mov ecx, esi
// 007eaf90  ff15c404a400         call dword ptr [0xa404c4]
// 007eaf96  8bc6                 mov eax, esi
// 007eaf98  5e                   pop esi
// 007eaf99  59                   pop ecx
// 007eaf9a  c20400               ret 4

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
    volatile int zero = 0;
    const char* cursor = dragging ? "GrabRotateCursor" : "DragCursor";
    g_stringCtor(result, cursor);
    return result;
}
