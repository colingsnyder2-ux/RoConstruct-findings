// roc 2010-06 00779b80  unit: RBX::VGroupDragTool::?$Named  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00779b80
//
// 00779b80  51                   push ecx
// 00779b81  80792800             cmp byte ptr [ecx + 0x28], 0
// 00779b85  c7042400000000       mov dword ptr [esp], 0
// 00779b8c  b8c82ca500           mov eax, 0xa52cc8
// 00779b91  7505                 jne 0x779b98
// 00779b93  b888cca400           mov eax, 0xa4cc88
// 00779b98  56                   push esi
// 00779b99  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00779b9d  50                   push eax
// 00779b9e  8bce                 mov ecx, esi
// 00779ba0  ff1510a49e00         call dword ptr [0x9ea410]
// 00779ba6  8bc6                 mov eax, esi
// 00779ba8  5e                   pop esi
// 00779ba9  59                   pop ecx
// 00779baa  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAUString@@PAU2@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

extern void (__thiscall *constructString)(String *, const char *);

struct S {
    char padding[40];
    bool rotating;
    String *f(String *result);
};

String *S::f(String *result)
{
    volatile int state = 0;
    const char *cursor = rotating ? "GrabRotateCursor" : "DragCursor";
    constructString(result, cursor);
    return result;
}