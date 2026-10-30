// roc 2009-12 00786100  unit: RBX::ArrowTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00786100
//
// 00786100  51                   push ecx
// 00786101  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 00786105  c7042400000000       mov dword ptr [esp], 0
// 0078610c  b8989a9e00           mov eax, 0x9e9a98
// 00786111  7505                 jne 0x786118
// 00786113  b828229d00           mov eax, 0x9d2228
// 00786118  56                   push esi
// 00786119  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078611d  50                   push eax
// 0078611e  8bce                 mov ecx, esi
// 00786120  ff15f4b69800         call dword ptr [0x98b6f4]
// 00786126  8bc6                 mov eax, esi
// 00786128  5e                   pop esi
// 00786129  59                   pop ecx
// 0078612a  c20400               ret 4
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