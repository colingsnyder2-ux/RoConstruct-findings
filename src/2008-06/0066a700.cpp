// from server: 100% by king_originala
// roc 2008-06 0066a700  unit: RBX::GroupDragTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066a700
//
// 0066a700  51                   push ecx
// 0066a701  80792800             cmp byte ptr [ecx + 0x28], 0
// 0066a705  c7042400000000       mov dword ptr [esp], 0
// 0066a70c  b8f4cb8400           mov eax, 0x84cbf4
// 0066a711  7505                 jne 0x66a718
// 0066a713  b8603a8400           mov eax, 0x843a60
// 0066a718  56                   push esi
// 0066a719  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066a71d  50                   push eax
// 0066a71e  8bce                 mov ecx, esi
// 0066a720  ff1558248000         call dword ptr [0x802458]
// 0066a726  8bc6                 mov eax, esi
// 0066a728  5e                   pop esi
// 0066a729  59                   pop ecx
// 0066a72a  c20400               ret 4

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
