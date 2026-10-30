// roc 2009-06 006ca810  unit: RBX::SlingshotTool  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ca810
//
// 006ca810  51                   push ecx
// 006ca811  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 006ca815  56                   push esi
// 006ca816  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca81e  741e                 je 0x6ca83e
// 006ca820  8379280a             cmp dword ptr [ecx + 0x28], 0xa
// 006ca824  7e18                 jle 0x6ca83e
// 006ca826  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca82a  6898c58e00           push 0x8ec598
// 006ca82f  8bce                 mov ecx, esi
// 006ca831  ff15b4e48900         call dword ptr [0x89e4b4]
// 006ca837  8bc6                 mov eax, esi
// 006ca839  5e                   pop esi
// 006ca83a  59                   pop ecx
// 006ca83b  c20400               ret 4
// 006ca83e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca842  68b0098e00           push 0x8e09b0
// 006ca847  8bce                 mov ecx, esi
// 006ca849  ff15b4e48900         call dword ptr [0x89e4b4]
// 006ca84f  8bc6                 mov eax, esi
// 006ca851  5e                   pop esi
// 006ca852  59                   pop ecx
// 006ca853  c20400               ret 4
// copied from an identical function in another client (function ?func@SlingshotTool@@QAE?AUString@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;
extern void (__thiscall *stringConstructor)(String *, const char *);
extern const char GunWaitCursor[];
extern const char GunCursor[];

struct String {
    char storage[28];
    String(const char *);
};

inline String::String(const char *text) {
    stringConstructor(this, text);
}

struct SlingshotTool {
    char pad[0x28];
    int field28;
    int field2c;
    String func();
};

String SlingshotTool::func() {
    volatile int state = 0;
    if (field2c && field28 > 10)
        return String(GunWaitCursor);
    return String(GunCursor);
}