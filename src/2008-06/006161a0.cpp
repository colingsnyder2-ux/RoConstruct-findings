// from server: 100% by king_originala
// roc 2008-06 006161a0  unit: RBX::ArrowTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006161a0
//
// 006161a0  51                   push ecx
// 006161a1  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 006161a5  c7042400000000       mov dword ptr [esp], 0
// 006161ac  b8603a8400           mov eax, 0x843a60
// 006161b1  7505                 jne 0x6161b8
// 006161b3  b850388300           mov eax, 0x833850
// 006161b8  56                   push esi
// 006161b9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006161bd  50                   push eax
// 006161be  8bce                 mov ecx, esi
// 006161c0  ff1558248000         call dword ptr [0x802458]
// 006161c6  8bc6                 mov eax, esi
// 006161c8  5e                   pop esi
// 006161c9  59                   pop ecx
// 006161ca  c20400               ret 4

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
