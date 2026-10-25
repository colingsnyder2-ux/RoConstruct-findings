// from server: 100% by king_originala
// roc 2008-06 00665c90  unit: RBX::PartDragTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665c90
//
// 00665c90  51                   push ecx
// 00665c91  80793400             cmp byte ptr [ecx + 0x34], 0
// 00665c95  c7042400000000       mov dword ptr [esp], 0
// 00665c9c  b8f4cb8400           mov eax, 0x84cbf4
// 00665ca1  7505                 jne 0x665ca8
// 00665ca3  b8603a8400           mov eax, 0x843a60
// 00665ca8  56                   push esi
// 00665ca9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00665cad  50                   push eax
// 00665cae  8bce                 mov ecx, esi
// 00665cb0  ff1558248000         call dword ptr [0x802458]
// 00665cb6  8bc6                 mov eax, esi
// 00665cb8  5e                   pop esi
// 00665cb9  59                   pop ecx
// 00665cba  c20400               ret 4

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
