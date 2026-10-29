// roc 2009-12 007a9530  unit: RBX::CloneTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a9530
//
// 007a9530  51                   push ecx
// 007a9531  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 007a9535  56                   push esi
// 007a9536  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a953a  c744240400000000     mov dword ptr [esp + 4], 0
// 007a9542  8bce                 mov ecx, esi
// 007a9544  7412                 je 0x7a9558
// 007a9546  688cd69e00           push 0x9ed68c
// 007a954b  ff15f4b69800         call dword ptr [0x98b6f4]
// 007a9551  8bc6                 mov eax, esi
// 007a9553  5e                   pop esi
// 007a9554  59                   pop ecx
// 007a9555  c20400               ret 4
// 007a9558  6880d69e00           push 0x9ed680
// 007a955d  ff15f4b69800         call dword ptr [0x98b6f4]
// 007a9563  8bc6                 mov eax, esi
// 007a9565  5e                   pop esi
// 007a9566  59                   pop ecx
// 007a9567  c20400               ret 4
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