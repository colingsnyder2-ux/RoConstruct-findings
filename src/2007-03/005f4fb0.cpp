// roc 2007-03 005f4fb0  unit: seg_005f0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f4fb0
//
// 005f4fb0  56                   push esi
// 005f4fb1  8bf1                 mov esi, ecx
// 005f4fb3  8bce                 mov ecx, esi
// 005f4fb5  e866f6ffff           call 0x5f4620
// 005f4fba  8bce                 mov ecx, esi
// 005f4fbc  e88ff9ffff           call 0x5f4950
// 005f4fc1  84c0                 test al, al
// 005f4fc3  74ee                 je 0x5f4fb3
// 005f4fc5  8bce                 mov ecx, esi
// 005f4fc7  e894fbffff           call 0x5f4b60
// 005f4fcc  84c0                 test al, al
// 005f4fce  74e3                 je 0x5f4fb3
// 005f4fd0  8bce                 mov ecx, esi
// 005f4fd2  e8f9daffff           call 0x5f2ad0
// 005f4fd7  84c0                 test al, al
// 005f4fd9  74d8                 je 0x5f4fb3
// 005f4fdb  8bce                 mov ecx, esi
// 005f4fdd  e85eecffff           call 0x5f3c40
// 005f4fe2  8bce                 mov ecx, esi
// 005f4fe4  e897dcffff           call 0x5f2c80
// 005f4fe9  8bce                 mov ecx, esi
// 005f4feb  e810ccffff           call 0x5f1c00
// 005f4ff0  8bce                 mov ecx, esi
// 005f4ff2  5e                   pop esi
// 005f4ff3  e958ddffff           jmp 0x5f2d50
// copied from an identical function in another client (function ?run@ClumpStage@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct ClumpStage {
    bool f607bd0();
    bool f607f00();
    bool f608110();
    bool f606080();
    void f6071f0();
    void f606230();
    void f605180();
    void f606300();
    void run();
};

void ClumpStage::run()
{
    while (true) {
        f607bd0();
        if (!f607f00())
            continue;
        if (!f608110())
            continue;
        if (!f606080())
            continue;
        break;
    }
    f6071f0();
    f606230();
    f605180();
    f606300();
}
}
