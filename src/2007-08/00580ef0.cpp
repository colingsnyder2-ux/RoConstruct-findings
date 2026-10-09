// from server: 96% by colin
// roc 2007-08 00580ef0  unit: RBX::Accoutrement  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580ef0
//
// 00580ef0  56                   push esi
// 00580ef1  8bf1                 mov esi, ecx
// 00580ef3  8d8e50010000         lea ecx, [esi + 0x150]
// 00580ef9  e852741a00           call 0x728350
// 00580efe  8d8e64010000         lea ecx, [esi + 0x164]
// 00580f04  5e                   pop esi
// 00580f05  e946741a00           jmp 0x728350

struct Sub {
    char pad[0x14];
    void destroy();
};

struct Accoutrement {
    char pad[0x150];
    Sub a;
    Sub b;
    void f();
};

void Accoutrement::f() {
    a.destroy();
    b.destroy();
}
