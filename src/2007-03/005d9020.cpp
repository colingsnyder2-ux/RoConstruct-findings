// roc 2007-03 005d9020  unit: seg_005d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d9020
//
// 005d9020  83c108               add ecx, 8
// 005d9023  51                   push ecx
// 005d9024  e8a7c5fdff           call 0x5b55d0
// 005d9029  59                   pop ecx
// 005d902a  c3                   ret 
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
