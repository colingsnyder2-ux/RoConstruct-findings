// roc 2009-06 006cc350  unit: RBX::CloneTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cc350
//
// 006cc350  51                   push ecx
// 006cc351  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 006cc355  56                   push esi
// 006cc356  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cc35a  c744240400000000     mov dword ptr [esp + 4], 0
// 006cc362  8bce                 mov ecx, esi
// 006cc364  7412                 je 0x6cc378
// 006cc366  681cc78e00           push 0x8ec71c
// 006cc36b  ff15b4e48900         call dword ptr [0x89e4b4]
// 006cc371  8bc6                 mov eax, esi
// 006cc373  5e                   pop esi
// 006cc374  59                   pop ecx
// 006cc375  c20400               ret 4
// 006cc378  6810c78e00           push 0x8ec710
// 006cc37d  ff15b4e48900         call dword ptr [0x89e4b4]
// 006cc383  8bc6                 mov eax, esi
// 006cc385  5e                   pop esi
// 006cc386  59                   pop ecx
// 006cc387  c20400               ret 4
// copied from an identical function in another client (function ?cursor@CloneTool@@QAEPAUString@@PAU2@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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