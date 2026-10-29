// roc 2009-06 006e8bf0  unit: RBX::VPartDragTool::?$Named  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e8bf0
//
// 006e8bf0  51                   push ecx
// 006e8bf1  80793400             cmp byte ptr [ecx + 0x34], 0
// 006e8bf5  c7042400000000       mov dword ptr [esp], 0
// 006e8bfc  b868da8e00           mov eax, 0x8eda68
// 006e8c01  7505                 jne 0x6e8c08
// 006e8c03  b8d8ac8e00           mov eax, 0x8eacd8
// 006e8c08  56                   push esi
// 006e8c09  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8c0d  50                   push eax
// 006e8c0e  8bce                 mov ecx, esi
// 006e8c10  ff15b4e48900         call dword ptr [0x89e4b4]
// 006e8c16  8bc6                 mov eax, esi
// 006e8c18  5e                   pop esi
// 006e8c19  59                   pop ecx
// 006e8c1a  c20400               ret 4
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