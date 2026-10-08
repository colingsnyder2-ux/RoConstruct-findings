// from server: 57% by colin
// roc 2007-08 00655a80  unit: CInstanceRecord::CNameItem  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655a80
//
// 00655a80  e899affdff           call 0x630a1e
// 00655a85  83c464               add esp, 0x64
// 00655a88  c3                   ret 

extern "C" void __cdecl sub_630a1e();

struct CNameItem {
    void f();
};

void CNameItem::f() {
    sub_630a1e();
}
