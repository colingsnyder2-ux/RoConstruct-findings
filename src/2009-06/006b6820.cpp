// roc 2009-06 006b6820  unit: RBX::ArrowTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b6820
//
// 006b6820  51                   push ecx
// 006b6821  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 006b6825  c7042400000000       mov dword ptr [esp], 0
// 006b682c  b8d8ac8e00           mov eax, 0x8eacd8
// 006b6831  7505                 jne 0x6b6838
// 006b6833  b850a48d00           mov eax, 0x8da450
// 006b6838  56                   push esi
// 006b6839  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b683d  50                   push eax
// 006b683e  8bce                 mov ecx, esi
// 006b6840  ff15b4e48900         call dword ptr [0x89e4b4]
// 006b6846  8bc6                 mov eax, esi
// 006b6848  5e                   pop esi
// 006b6849  59                   pop ecx
// 006b684a  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAUString@@PAU2@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

typedef void (__thiscall *StringConstructor)(String *, const char *);
extern StringConstructor constructString;

struct S {
    char padding[28];
    unsigned char dragging;
    String *f(String *result);
};

String *S::f(String *result)
{
    volatile int unused = 0;
    const char *cursor = dragging ? "DragCursor" : "ArrowCursor";
    constructString(result, cursor);
    return result;
}