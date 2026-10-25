// from server: 100% by king_originala
// roc 2008-06 00504b00  unit: RBX::Render::RenderScene  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00504b00
//
// 00504b00  56                   push esi
// 00504b01  8bf1                 mov esi, ecx
// 00504b03  6a00                 push 0
// 00504b05  6a00                 push 0
// 00504b07  8d8e74020000         lea ecx, [esi + 0x274]
// 00504b0d  e8fedcffff           call 0x502810
// 00504b12  6a00                 push 0
// 00504b14  6a00                 push 0
// 00504b16  8d8e98020000         lea ecx, [esi + 0x298]
// 00504b1c  e8bfeaffff           call 0x5035e0
// 00504b21  6a00                 push 0
// 00504b23  6a00                 push 0
// 00504b25  8d8e80020000         lea ecx, [esi + 0x280]
// 00504b2b  e8e0dcffff           call 0x502810
// 00504b30  6a00                 push 0
// 00504b32  6a00                 push 0
// 00504b34  8d8e8c020000         lea ecx, [esi + 0x28c]
// 00504b3a  e8d1dcffff           call 0x502810
// 00504b3f  6a00                 push 0
// 00504b41  6a00                 push 0
// 00504b43  8d8e68020000         lea ecx, [esi + 0x268]
// 00504b49  e892eaffff           call 0x5035e0
// 00504b4e  6a00                 push 0
// 00504b50  6a00                 push 0
// 00504b52  8d8ea4020000         lea ecx, [esi + 0x2a4]
// 00504b58  e8332dfdff           call 0x4d7890
// 00504b5d  5e                   pop esi
// 00504b5e  c3                   ret 

struct A {
    char data[12];
    void reset(void*, void*);
};

struct B {
    char data[12];
    void reset(void*, void*);
};

struct C {
    void reset(void*, void*);
};

struct S {
    char padding[0x268];
    B b268;
    A a274;
    A a280;
    A a28c;
    B b298;
    C c2a4;

    void f();
};

void S::f()
{
    a274.reset(0, 0);
    b298.reset(0, 0);
    a280.reset(0, 0);
    a28c.reset(0, 0);
    b268.reset(0, 0);
    c2a4.reset(0, 0);
}
