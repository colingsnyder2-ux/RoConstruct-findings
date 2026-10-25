// from server: 100% by atomic.potato
// roc 2011-06 004837a0  unit: VCRobloxView::?$VerbBinder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004837a0
//
// 004837a0  56                   push esi
// 004837a1  8bf1                 mov esi, ecx
// 004837a3  e898feffff           call 0x483640
// 004837a8  6a01                 push 1
// 004837aa  8bce                 mov ecx, esi
// 004837ac  e85ff6ffff           call 0x482e10
// 004837b1  8bce                 mov ecx, esi
// 004837b3  5e                   pop esi
// 004837b4  e915773800           jmp 0x80aece

struct S
{
    void f();
    void g();
    void h(int);
    void k();
};

void S::f()
{
    g();
    h(1);
    k();
}
