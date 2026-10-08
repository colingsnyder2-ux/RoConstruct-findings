// from server: 100% by colin
// roc 2007-08 0045d240  unit: Scintilla::CScintillaView  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d240
//
// 0045d240  56                   push esi
// 0045d241  8d7158               lea esi, [ecx + 0x58]
// 0045d244  6a01                 push 1
// 0045d246  8bce                 mov ecx, esi
// 0045d248  e8b3ecffff           call 0x45bf00
// 0045d24d  6a01                 push 1
// 0045d24f  8bce                 mov ecx, esi
// 0045d251  e81af9ffff           call 0x45cb70
// 0045d256  5e                   pop esi
// 0045d257  c3                   ret 

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
