// roc 2010-06 00779e80  unit: RBX::VPartDragTool::?$Named  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00779e80
//
// 00779e80  51                   push ecx
// 00779e81  80793400             cmp byte ptr [ecx + 0x34], 0
// 00779e85  c7042400000000       mov dword ptr [esp], 0
// 00779e8c  b8c82ca500           mov eax, 0xa52cc8
// 00779e91  7505                 jne 0x779e98
// 00779e93  b888cca400           mov eax, 0xa4cc88
// 00779e98  56                   push esi
// 00779e99  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00779e9d  50                   push eax
// 00779e9e  8bce                 mov ecx, esi
// 00779ea0  ff1510a49e00         call dword ptr [0x9ea410]
// 00779ea6  8bc6                 mov eax, esi
// 00779ea8  5e                   pop esi
// 00779ea9  59                   pop ecx
// 00779eaa  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAUString@@PAU2@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

extern void (__thiscall *constructString)(String *, const char *);

struct S {
    char padding[0x34];
    unsigned char rotate;
    String *f(String *result);
};

String *S::f(String *result)
{
    volatile int state = 0;
    const char *cursor = rotate ? "GrabRotateCursor" : "DragCursor";
    constructString(result, cursor);
    return result;
}