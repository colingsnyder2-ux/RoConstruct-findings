// from server: 20% by colin
// roc 2010-06 007a90ec  unit: ActiveDocView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a90ec
//
// 007a90ec  33c0                 xor eax, eax
// 007a90ee  40                   inc eax
// 007a90ef  c3                   ret 

struct ActiveDocView {
    int f();
};

int ActiveDocView::f() {
    return 1;
}
