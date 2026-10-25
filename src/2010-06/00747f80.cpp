// from server: 100% by tester
// roc 2010-06 00747f80  unit: RBX::SlingshotTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00747f80
//
// 00747f80  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00747f83  85c0                 test eax, eax
// 00747f85  7e04                 jle 0x747f8b
// 00747f87  48                   dec eax
// 00747f88  89412c               mov dword ptr [ecx + 0x2c], eax
// 00747f8b  80791400             cmp byte ptr [ecx + 0x14], 0
// 00747f8f  7407                 je 0x747f98
// 00747f91  8b01                 mov eax, dword ptr [ecx]
// 00747f93  8b4028               mov eax, dword ptr [eax + 0x28]
// 00747f96  ffe0                 jmp eax
// 00747f98  c20400               ret 4

struct SlingshotTool {
    char pad[0x14];
    bool flag14;
    char pad2[0x2c - 0x15];
    int field2c;
    void func(int);
};

void SlingshotTool::func(int a) {
    int v = field2c;
    if (v > 0) {
        field2c = v - 1;
    }
    if (flag14) {
        (*(void (__thiscall **)(SlingshotTool*, int))((*(char**)this) + 0x28))(this, a);
    }
}
