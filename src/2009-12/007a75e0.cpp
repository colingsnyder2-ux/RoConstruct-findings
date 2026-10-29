// roc 2009-12 007a75e0  unit: RBX::SlingshotTool  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a75e0
//
// 007a75e0  51                   push ecx
// 007a75e1  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 007a75e5  56                   push esi
// 007a75e6  c744240400000000     mov dword ptr [esp + 4], 0
// 007a75ee  741e                 je 0x7a760e
// 007a75f0  8379280a             cmp dword ptr [ecx + 0x28], 0xa
// 007a75f4  7e18                 jle 0x7a760e
// 007a75f6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a75fa  68e8d49e00           push 0x9ed4e8
// 007a75ff  8bce                 mov ecx, esi
// 007a7601  ff15f4b69800         call dword ptr [0x98b6f4]
// 007a7607  8bc6                 mov eax, esi
// 007a7609  5e                   pop esi
// 007a760a  59                   pop ecx
// 007a760b  c20400               ret 4
// 007a760e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a7612  6820919d00           push 0x9d9120
// 007a7617  8bce                 mov ecx, esi
// 007a7619  ff15f4b69800         call dword ptr [0x98b6f4]
// 007a761f  8bc6                 mov eax, esi
// 007a7621  5e                   pop esi
// 007a7622  59                   pop ecx
// 007a7623  c20400               ret 4
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