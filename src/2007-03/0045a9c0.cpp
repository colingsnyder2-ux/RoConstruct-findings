// roc 2007-03 0045a9c0  unit: seg_00450000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a9c0
//
// 0045a9c0  56                   push esi
// 0045a9c1  8d7158               lea esi, [ecx + 0x58]
// 0045a9c4  6a01                 push 1
// 0045a9c6  8bce                 mov ecx, esi
// 0045a9c8  e8c3ecffff           call 0x459690
// 0045a9cd  6a01                 push 1
// 0045a9cf  8bce                 mov ecx, esi
// 0045a9d1  e82af9ffff           call 0x45a300
// 0045a9d6  5e                   pop esi
// 0045a9d7  c3                   ret 
// copied from an identical function in another client (function ?method@CScintillaView@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
struct Sub {
    void f1(int);
    void f2(int);
};

struct CScintillaView {
    char pad0[0x58];
    Sub sub;
    void method();
};

void CScintillaView::method()
{
    sub.f1(1);
    sub.f2(1);
}
}
