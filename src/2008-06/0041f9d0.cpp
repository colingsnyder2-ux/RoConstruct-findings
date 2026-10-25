// from server: 100% by king_originala
// roc 2008-06 0041f9d0  unit: CInsertObjectDialog  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041f9d0
//
// 0041f9d0  56                   push esi
// 0041f9d1  8bf1                 mov esi, ecx
// 0041f9d3  e8b2142800           call 0x6a0e8a
// 0041f9d8  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0041f9de  e845102800           call 0x6a0a28
// 0041f9e3  33c0                 xor eax, eax
// 0041f9e5  5e                   pop esi
// 0041f9e6  c3                   ret 

struct Part {
    void update();
};

struct S {
    unsigned char padding[0xa8];
    Part part;
    void prepare();
    int f();
};

int S::f()
{
    prepare();
    part.update();
    return 0;
}
