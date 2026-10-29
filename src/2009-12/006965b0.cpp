// roc 2009-12 006965b0  unit: RBX::ArrowTool  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006965b0
//
// 006965b0  80791400             cmp byte ptr [ecx + 0x14], 0
// 006965b4  7407                 je 0x6965bd
// 006965b6  8b01                 mov eax, dword ptr [ecx]
// 006965b8  8b5038               mov edx, dword ptr [eax + 0x38]
// 006965bb  ffe2                 jmp edx
// 006965bd  c3                   ret 
// copied from an identical function in another client (function ?method@RBX_ArrowTool@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
// from server: 100% by tester
struct RBX_ArrowTool {
    char pad[0x14];
    bool flag;
    void method();
};

void RBX_ArrowTool::method()
{
    if (flag) {
        (*(void (__thiscall **)(void *))(*(int *)this + 0x38))(this);
    }
}
}
