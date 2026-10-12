// from server: 100% by king_originala
// roc 2008-06 0063fd90  unit: RBX::CloneTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063fd90
//
// 0063fd90  51                   push ecx
// 0063fd91  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 0063fd95  56                   push esi
// 0063fd96  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063fd9a  c744240400000000     mov dword ptr [esp + 4], 0
// 0063fda2  8bce                 mov ecx, esi
// 0063fda4  7412                 je 0x63fdb8
// 0063fda6  68aca48400           push 0x84a4ac
// 0063fdab  ff1558248000         call dword ptr [0x802458]
// 0063fdb1  8bc6                 mov eax, esi
// 0063fdb3  5e                   pop esi
// 0063fdb4  59                   pop ecx
// 0063fdb5  c20400               ret 4
// 0063fdb8  68a0a48400           push 0x84a4a0
// 0063fdbd  ff1558248000         call dword ptr [0x802458]
// 0063fdc3  8bc6                 mov eax, esi
// 0063fdc5  5e                   pop esi
// 0063fdc6  59                   pop ecx
// 0063fdc7  c20400               ret 4

struct String;

typedef void (__thiscall *StringConstructor)(String *, const char *);
extern StringConstructor constructString;

struct CloneTool {
    char padding[28];
    int active;
    String *cursor(String *result);
};

String *CloneTool::cursor(String *result)
{
    volatile int state = 0;
    if (active)
        constructString(result, "CloneOverCursor");
    else
        constructString(result, "CloneCursor");
    return result;
}
