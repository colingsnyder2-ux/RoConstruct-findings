// roc 2009-06 006cbd20  unit: RBX::HammerTool  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cbd20
//
// 006cbd20  51                   push ecx
// 006cbd21  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 006cbd25  c7042400000000       mov dword ptr [esp], 0
// 006cbd2c  b880c68e00           mov eax, 0x8ec680
// 006cbd31  7505                 jne 0x6cbd38
// 006cbd33  b870c68e00           mov eax, 0x8ec670
// 006cbd38  56                   push esi
// 006cbd39  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cbd3d  50                   push eax
// 006cbd3e  8bce                 mov ecx, esi
// 006cbd40  ff15b4e48900         call dword ptr [0x89e4b4]
// 006cbd46  8bc6                 mov eax, esi
// 006cbd48  5e                   pop esi
// 006cbd49  59                   pop ecx
// 006cbd4a  c20400               ret 4
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