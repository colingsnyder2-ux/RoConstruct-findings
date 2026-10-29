// roc 2009-12 007cc8e0  unit: RBX::VGroupDragTool::?$Named  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007cc8e0
//
// 007cc8e0  51                   push ecx
// 007cc8e1  80792800             cmp byte ptr [ecx + 0x28], 0
// 007cc8e5  c7042400000000       mov dword ptr [esp], 0
// 007cc8ec  b860ea9e00           mov eax, 0x9eea60
// 007cc8f1  7505                 jne 0x7cc8f8
// 007cc8f3  b8989a9e00           mov eax, 0x9e9a98
// 007cc8f8  56                   push esi
// 007cc8f9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007cc8fd  50                   push eax
// 007cc8fe  8bce                 mov ecx, esi
// 007cc900  ff15f4b69800         call dword ptr [0x98b6f4]
// 007cc906  8bc6                 mov eax, esi
// 007cc908  5e                   pop esi
// 007cc909  59                   pop ecx
// 007cc90a  c20400               ret 4
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