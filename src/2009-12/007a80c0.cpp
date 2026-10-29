// roc 2009-12 007a80c0  unit: RBX::SlingshotTool  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a80c0
//
// 007a80c0  80792400             cmp byte ptr [ecx + 0x24], 0
// 007a80c4  740b                 je 0x7a80d1
// 007a80c6  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 007a80ca  7505                 jne 0x7a80d1
// 007a80cc  e93ffcffff           jmp 0x7a7d10
// 007a80d1  c20400               ret 4
// copied from an identical function in another client (function ?method@SlingshotTool@ns_ROCX000013@@QAEXH@Z)

namespace ns_ROCX000013 {
// from server: 100% by why2
struct SlingshotTool {
    char pad[0x24];
    char flag24;
    char pad2[0x2c - 0x25];
    int field2c;
    void method(int);
    void helper(int);
};

void SlingshotTool::method(int arg) {
    if (flag24 != 0 && field2c == 0) {
        helper(arg);
    }
}
}
