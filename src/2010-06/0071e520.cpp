// roc 2010-06 0071e520  unit: RBX::ArrowTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071e520
//
// 0071e520  51                   push ecx
// 0071e521  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 0071e525  c7042400000000       mov dword ptr [esp], 0
// 0071e52c  b888cca400           mov eax, 0xa4cc88
// 0071e531  7505                 jne 0x71e538
// 0071e533  b8e80ba300           mov eax, 0xa30be8
// 0071e538  56                   push esi
// 0071e539  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071e53d  50                   push eax
// 0071e53e  8bce                 mov ecx, esi
// 0071e540  ff1510a49e00         call dword ptr [0x9ea410]
// 0071e546  8bc6                 mov eax, esi
// 0071e548  5e                   pop esi
// 0071e549  59                   pop ecx
// 0071e54a  c20400               ret 4
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