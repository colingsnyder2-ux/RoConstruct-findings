// from server: 100% by tester
// roc 2008-06 0063ec40  unit: RBX::SlingshotTool  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ec40
//
// 0063ec40  80792400             cmp byte ptr [ecx + 0x24], 0
// 0063ec44  740b                 je 0x63ec51
// 0063ec46  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 0063ec4a  7505                 jne 0x63ec51
// 0063ec4c  e93ffcffff           jmp 0x63e890
// 0063ec51  c20400               ret 4

struct SlingshotTool {
    char pad[36];
    bool flag28;
    char pad2[0x30 - 0x29];
    int field30;
    void sub_5fc540(int);
    void func(int);
};

void SlingshotTool::func(int a) {
    if (flag28 && field30 == 0) {
        sub_5fc540(a);
    }
}
