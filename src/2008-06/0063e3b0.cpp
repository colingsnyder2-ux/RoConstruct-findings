// from server: 100% by king_originala
// roc 2008-06 0063e3b0  unit: RBX::SlingshotTool  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063e3b0
//
// 0063e3b0  51                   push ecx
// 0063e3b1  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 0063e3b5  56                   push esi
// 0063e3b6  c744240400000000     mov dword ptr [esp + 4], 0
// 0063e3be  741e                 je 0x63e3de
// 0063e3c0  8379280a             cmp dword ptr [ecx + 0x28], 0xa
// 0063e3c4  7e18                 jle 0x63e3de
// 0063e3c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e3ca  6830a38400           push 0x84a330
// 0063e3cf  8bce                 mov ecx, esi
// 0063e3d1  ff1558248000         call dword ptr [0x802458]
// 0063e3d7  8bc6                 mov eax, esi
// 0063e3d9  5e                   pop esi
// 0063e3da  59                   pop ecx
// 0063e3db  c20400               ret 4
// 0063e3de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063e3e2  68b49b8300           push 0x839bb4
// 0063e3e7  8bce                 mov ecx, esi
// 0063e3e9  ff1558248000         call dword ptr [0x802458]
// 0063e3ef  8bc6                 mov eax, esi
// 0063e3f1  5e                   pop esi
// 0063e3f2  59                   pop ecx
// 0063e3f3  c20400               ret 4

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
