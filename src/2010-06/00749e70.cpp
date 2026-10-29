// roc 2010-06 00749e70  unit: RBX::CloneTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00749e70
//
// 00749e70  51                   push ecx
// 00749e71  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 00749e75  56                   push esi
// 00749e76  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00749e7a  c744240400000000     mov dword ptr [esp + 4], 0
// 00749e82  8bce                 mov ecx, esi
// 00749e84  7412                 je 0x749e98
// 00749e86  688414a500           push 0xa51484
// 00749e8b  ff1510a49e00         call dword ptr [0x9ea410]
// 00749e91  8bc6                 mov eax, esi
// 00749e93  5e                   pop esi
// 00749e94  59                   pop ecx
// 00749e95  c20400               ret 4
// 00749e98  687814a500           push 0xa51478
// 00749e9d  ff1510a49e00         call dword ptr [0x9ea410]
// 00749ea3  8bc6                 mov eax, esi
// 00749ea5  5e                   pop esi
// 00749ea6  59                   pop ecx
// 00749ea7  c20400               ret 4
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