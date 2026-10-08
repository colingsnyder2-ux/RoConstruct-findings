// from server: 100% by colin
// roc 2007-08 005d1bc0  unit: RBX::Tool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1bc0
//
// 005d1bc0  56                   push esi
// 005d1bc1  8bf1                 mov esi, ecx
// 005d1bc3  8d8ecc010000         lea ecx, [esi + 0x1cc]
// 005d1bc9  e882671500           call 0x728350
// 005d1bce  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 005d1bd4  5e                   pop esi
// 005d1bd5  e976671500           jmp 0x728350

struct Sub {
    void method();
};

struct Tool {
    char pad[0x1cc];
    Sub sub1cc;
    char pad2[0x1e0 - 0x1cc - sizeof(Sub)];
    Sub sub1e0;
    void func();
};

void Tool::func() {
    sub1cc.method();
    sub1e0.method();
}
