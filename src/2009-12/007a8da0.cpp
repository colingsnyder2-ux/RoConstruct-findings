// roc 2009-12 007a8da0  unit: RBX::HammerTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a8da0
//
// 007a8da0  51                   push ecx
// 007a8da1  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 007a8da5  c7042400000000       mov dword ptr [esp], 0
// 007a8dac  b8e0d59e00           mov eax, 0x9ed5e0
// 007a8db1  7505                 jne 0x7a8db8
// 007a8db3  b8d0d59e00           mov eax, 0x9ed5d0
// 007a8db8  56                   push esi
// 007a8db9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a8dbd  50                   push eax
// 007a8dbe  8bce                 mov ecx, esi
// 007a8dc0  ff15f4b69800         call dword ptr [0x98b6f4]
// 007a8dc6  8bc6                 mov eax, esi
// 007a8dc8  5e                   pop esi
// 007a8dc9  59                   pop ecx
// 007a8dca  c20400               ret 4
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