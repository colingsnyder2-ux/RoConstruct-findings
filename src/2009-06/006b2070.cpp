// roc 2009-06 006b2070  unit: RBX::BlockBlockContact  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b2070
//
// 006b2070  83c108               add ecx, 8
// 006b2073  51                   push ecx
// 006b2074  e8c7210000           call 0x6b4240
// 006b2079  59                   pop ecx
// 006b207a  c3                   ret 
// copied from an identical function in another client (function ?invoke@Wrapper_005e05c0@ns_ROCX00001d@@QAEXXZ)

namespace ns_ROCX00001d {
extern void G1_func_005ba850(void*);

struct Wrapper_005e05c0 {
    void invoke();
};

void Wrapper_005e05c0::invoke() {
    G1_func_005ba850((char*)this + 8);
}
}
