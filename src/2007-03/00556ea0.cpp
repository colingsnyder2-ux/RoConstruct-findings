// roc 2007-03 00556ea0  unit: seg_00550000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00556ea0
//
// 00556ea0  80791400             cmp byte ptr [ecx + 0x14], 0
// 00556ea4  7407                 je 0x556ead
// 00556ea6  8b01                 mov eax, dword ptr [ecx]
// 00556ea8  8b5024               mov edx, dword ptr [eax + 0x24]
// 00556eab  ffe2                 jmp edx
// 00556ead  c3                   ret 
// copied from an identical function in another client (function ?method@RBX_ArrowTool@ns_ROCX000009@@QAEXXZ)

namespace ns_ROCX000009 {
struct RBX_ArrowTool {
    char pad[0x14];
    bool flag;
    void method();
};

void RBX_ArrowTool::method()
{
    if (flag) {
        (*(void (__thiscall **)(void *))(*(int *)this + 0x24))(this);
    }
}
}
