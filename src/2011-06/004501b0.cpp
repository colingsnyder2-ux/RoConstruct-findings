// from server: 100% by atomic.potato
// roc 2011-06 004501b0  unit: CDataModelPropGrid  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004501b0
//
// 004501b0  56                   push esi
// 004501b1  6a00                 push 0
// 004501b3  8bf1                 mov esi, ecx
// 004501b5  e856fbffff           call 0x44fd10
// 004501ba  8bce                 mov ecx, esi
// 004501bc  e80f4fffff           call 0x4450d0
// 004501c1  8bce                 mov ecx, esi
// 004501c3  5e                   pop esi
// 004501c4  e957a93b00           jmp 0x80ab20

struct CDataModelPropGrid
{
    void f();
    void sub1(int);
    void sub2();
    void sub3();
};

void CDataModelPropGrid::f()
{
    sub1(0);
    sub2();
    sub3();
}
