// roc 2010-06 007496f0  unit: RBX::HammerTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007496f0
//
// 007496f0  51                   push ecx
// 007496f1  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 007496f5  c7042400000000       mov dword ptr [esp], 0
// 007496fc  b8d813a500           mov eax, 0xa513d8
// 00749701  7505                 jne 0x749708
// 00749703  b8c813a500           mov eax, 0xa513c8
// 00749708  56                   push esi
// 00749709  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0074970d  50                   push eax
// 0074970e  8bce                 mov ecx, esi
// 00749710  ff1510a49e00         call dword ptr [0x9ea410]
// 00749716  8bc6                 mov eax, esi
// 00749718  5e                   pop esi
// 00749719  59                   pop ecx
// 0074971a  c20400               ret 4
// copied from an identical function in another client (function ?cursor@HammerTool@@QAEPAXPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
typedef void (__thiscall *StringConstructor)(void *, const char *);
extern StringConstructor constructString;

struct HammerTool {
    char padding[0x1c];
    int over;
    void *cursor(void *result);
};

void *HammerTool::cursor(void *result)
{
    volatile int state = 0;
    const char *text = over ? "HammerOverCursor" : "HammerCursor";
    constructString(result, text);
    return result;
}