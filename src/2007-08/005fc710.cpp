// from DeepSeek/server: 100% by colin
// roc 2007-08 005fc710  unit: RBX::SlingshotTool  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fc710
//
// 005fc710  80792800             cmp byte ptr [ecx + 0x28], 0
// 005fc714  740b                 je 0x5fc721
// 005fc716  83793000             cmp dword ptr [ecx + 0x30], 0
// 005fc71a  7505                 jne 0x5fc721
// 005fc71c  e91ffeffff           jmp 0x5fc540
// 005fc721  c20400               ret 4

struct SlingshotTool {
    char pad[0x28];
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
