// from server: 100% by tester
// roc 2008-06 005b0920  unit: RBX::Accoutrement  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0920
//
// 005b0920  56                   push esi
// 005b0921  8bf1                 mov esi, ecx
// 005b0923  8d8e9c010000         lea ecx, [esi + 0x19c]
// 005b0929  e80249feff           call 0x595230
// 005b092e  8d8eb0010000         lea ecx, [esi + 0x1b0]
// 005b0934  5e                   pop esi
// 005b0935  e9f648feff           jmp 0x595230

struct Sub {
    char pad[0x14];
    void destroy();
};

struct Accoutrement {
    char pad[0x19c];
    Sub a;
    Sub b;
    void f();
};

void Accoutrement::f() {
    a.destroy();
    b.destroy();
}
