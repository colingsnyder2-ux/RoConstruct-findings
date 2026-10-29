// roc 2010-06 00747f30  unit: RBX::SlingshotTool  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00747f30
//
// 00747f30  51                   push ecx
// 00747f31  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 00747f35  56                   push esi
// 00747f36  c744240400000000     mov dword ptr [esp + 4], 0
// 00747f3e  741e                 je 0x747f5e
// 00747f40  8379280a             cmp dword ptr [ecx + 0x28], 0xa
// 00747f44  7e18                 jle 0x747f5e
// 00747f46  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00747f4a  68e012a500           push 0xa512e0
// 00747f4f  8bce                 mov ecx, esi
// 00747f51  ff1510a49e00         call dword ptr [0x9ea410]
// 00747f57  8bc6                 mov eax, esi
// 00747f59  5e                   pop esi
// 00747f5a  59                   pop ecx
// 00747f5b  c20400               ret 4
// 00747f5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00747f62  685086a300           push 0xa38650
// 00747f67  8bce                 mov ecx, esi
// 00747f69  ff1510a49e00         call dword ptr [0x9ea410]
// 00747f6f  8bc6                 mov eax, esi
// 00747f71  5e                   pop esi
// 00747f72  59                   pop ecx
// 00747f73  c20400               ret 4
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