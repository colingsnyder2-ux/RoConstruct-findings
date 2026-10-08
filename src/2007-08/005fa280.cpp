// from server: 79% by colin
// roc 2007-08 005fa280  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa280
//
// 005fa280  56                   push esi
// 005fa281  8bf1                 mov esi, ecx
// 005fa283  e878ffffff           call 0x5fa200
// 005fa288  8d8e94020000         lea ecx, [esi + 0x294]
// 005fa28e  e8bde01200           call 0x728350
// 005fa293  5e                   pop esi
// 005fa294  c20400               ret 4

struct Sub294 {
    void method();
};

struct S {
    char pad[0x294];
    Sub294 sub;
    void ctor(int);
};

void S::ctor(int) {
    this->ctor(0);
    sub.method();
}
