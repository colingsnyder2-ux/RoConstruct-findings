// from server: 100% by colin
// roc 2008-06 0063e400  unit: RBX::SlingshotTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063e400
//
// 0063e400  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0063e403  85c0                 test eax, eax
// 0063e405  7e04                 jle 0x63e40b
// 0063e407  48                   dec eax
// 0063e408  89412c               mov dword ptr [ecx + 0x2c], eax
// 0063e40b  80791400             cmp byte ptr [ecx + 0x14], 0
// 0063e40f  7407                 je 0x63e418
// 0063e411  8b01                 mov eax, dword ptr [ecx]
// 0063e413  8b4018               mov eax, dword ptr [eax + 0x18]
// 0063e416  ffe0                 jmp eax
// 0063e418  c20400               ret 4

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
        (*(void (__thiscall **)(SlingshotTool*, int))((*(char**)this) + 0x18))(this, a);
    }
}
