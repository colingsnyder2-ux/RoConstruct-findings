// roc 2009-06 006ca860  unit: RBX::SlingshotTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ca860
//
// 006ca860  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006ca863  85c0                 test eax, eax
// 006ca865  7e04                 jle 0x6ca86b
// 006ca867  48                   dec eax
// 006ca868  89412c               mov dword ptr [ecx + 0x2c], eax
// 006ca86b  80791400             cmp byte ptr [ecx + 0x14], 0
// 006ca86f  7407                 je 0x6ca878
// 006ca871  8b01                 mov eax, dword ptr [ecx]
// 006ca873  8b4018               mov eax, dword ptr [eax + 0x18]
// 006ca876  ffe0                 jmp eax
// 006ca878  c20400               ret 4
// copied from an identical function in another client (function ?func@SlingshotTool@@QAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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