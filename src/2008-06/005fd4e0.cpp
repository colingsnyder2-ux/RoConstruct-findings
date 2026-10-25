// from server: 100% by tester
// roc 2008-06 005fd4e0  unit: RBX::Tool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd4e0
//
// 005fd4e0  56                   push esi
// 005fd4e1  8bf1                 mov esi, ecx
// 005fd4e3  8d8e40020000         lea ecx, [esi + 0x240]
// 005fd4e9  e8427df9ff           call 0x595230
// 005fd4ee  8d8e54020000         lea ecx, [esi + 0x254]
// 005fd4f4  5e                   pop esi
// 005fd4f5  e9367df9ff           jmp 0x595230

struct Sub {
    void method();
};

struct Tool {
    char pad[0x240];
    Sub sub1cc;
    char pad2[0x254 - 0x240 - sizeof(Sub)];
    Sub sub1e0;
    void func();
};

void Tool::func() {
    sub1cc.method();
    sub1e0.method();
}
