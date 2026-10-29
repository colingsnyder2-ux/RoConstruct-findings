// roc 2009-12 007ccc30  unit: RBX::VPartDragTool::?$Named  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ccc30
//
// 007ccc30  51                   push ecx
// 007ccc31  80793400             cmp byte ptr [ecx + 0x34], 0
// 007ccc35  c7042400000000       mov dword ptr [esp], 0
// 007ccc3c  b860ea9e00           mov eax, 0x9eea60
// 007ccc41  7505                 jne 0x7ccc48
// 007ccc43  b8989a9e00           mov eax, 0x9e9a98
// 007ccc48  56                   push esi
// 007ccc49  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ccc4d  50                   push eax
// 007ccc4e  8bce                 mov ecx, esi
// 007ccc50  ff15f4b69800         call dword ptr [0x98b6f4]
// 007ccc56  8bc6                 mov eax, esi
// 007ccc58  5e                   pop esi
// 007ccc59  59                   pop ecx
// 007ccc5a  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX00001f@@QAEPAUString@2@PAU32@@Z)

namespace ns_ROCX00001f {
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
}
