// roc 2009-06 006e8900  unit: RBX::VGroupDragTool::?$Named  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e8900
//
// 006e8900  51                   push ecx
// 006e8901  80792800             cmp byte ptr [ecx + 0x28], 0
// 006e8905  c7042400000000       mov dword ptr [esp], 0
// 006e890c  b868da8e00           mov eax, 0x8eda68
// 006e8911  7505                 jne 0x6e8918
// 006e8913  b8d8ac8e00           mov eax, 0x8eacd8
// 006e8918  56                   push esi
// 006e8919  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e891d  50                   push eax
// 006e891e  8bce                 mov ecx, esi
// 006e8920  ff15b4e48900         call dword ptr [0x89e4b4]
// 006e8926  8bc6                 mov eax, esi
// 006e8928  5e                   pop esi
// 006e8929  59                   pop ecx
// 006e892a  c20400               ret 4
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