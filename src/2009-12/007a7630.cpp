// roc 2009-12 007a7630  unit: RBX::SlingshotTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a7630
//
// 007a7630  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007a7633  85c0                 test eax, eax
// 007a7635  7e04                 jle 0x7a763b
// 007a7637  48                   dec eax
// 007a7638  89412c               mov dword ptr [ecx + 0x2c], eax
// 007a763b  80791400             cmp byte ptr [ecx + 0x14], 0
// 007a763f  7407                 je 0x7a7648
// 007a7641  8b01                 mov eax, dword ptr [ecx]
// 007a7643  8b4028               mov eax, dword ptr [eax + 0x28]
// 007a7646  ffe0                 jmp eax
// 007a7648  c20400               ret 4
// copied from an identical function in another client (function ?func@SlingshotTool@ns_ROCX00000a@@QAEXH@Z)

namespace ns_ROCX00000a {
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
}
