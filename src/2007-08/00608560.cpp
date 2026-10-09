// from server: 100% by colin
// roc 2007-08 00608560  unit: RBX::ClumpStage  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608560
//
// 00608560  56                   push esi
// 00608561  8bf1                 mov esi, ecx
// 00608563  8bce                 mov ecx, esi
// 00608565  e866f6ffff           call 0x607bd0
// 0060856a  8bce                 mov ecx, esi
// 0060856c  e88ff9ffff           call 0x607f00
// 00608571  84c0                 test al, al
// 00608573  74ee                 je 0x608563
// 00608575  8bce                 mov ecx, esi
// 00608577  e894fbffff           call 0x608110
// 0060857c  84c0                 test al, al
// 0060857e  74e3                 je 0x608563
// 00608580  8bce                 mov ecx, esi
// 00608582  e8f9daffff           call 0x606080
// 00608587  84c0                 test al, al
// 00608589  74d8                 je 0x608563
// 0060858b  8bce                 mov ecx, esi
// 0060858d  e85eecffff           call 0x6071f0
// 00608592  8bce                 mov ecx, esi
// 00608594  e897dcffff           call 0x606230
// 00608599  8bce                 mov ecx, esi
// 0060859b  e8e0cbffff           call 0x605180
// 006085a0  8bce                 mov ecx, esi
// 006085a2  5e                   pop esi
// 006085a3  e958ddffff           jmp 0x606300

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
