// roc 2008-06 0060dd60  unit: RBX::BlockBlockContact  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dd60
//
// 0060dd60  83c108               add ecx, 8
// 0060dd63  51                   push ecx
// 0060dd64  e8c7100000           call 0x60ee30
// 0060dd69  59                   pop ecx
// 0060dd6a  c3                   ret 
// copied from an identical function in another client (function ?invoke@Wrapper_005e05c0@ns_ROCX000018@@QAEXXZ)

namespace ns_ROCX000018 {
extern void G1_func_005ba850(void*);

struct Wrapper_005e05c0 {
    void invoke();
};

void Wrapper_005e05c0::invoke() {
    G1_func_005ba850((char*)this + 8);
}
}
