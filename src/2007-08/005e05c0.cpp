// from server: 100% by colin
// roc 2007-08 005e05c0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e05c0
//
// 005e05c0  83c108               add ecx, 8
// 005e05c3  51                   push ecx
// 005e05c4  e887a2fdff           call 0x5ba850
// 005e05c9  59                   pop ecx
// 005e05ca  c3                   ret 

extern void G1_func_005ba850(void*);

struct Wrapper_005e05c0 {
    void invoke();
};

void Wrapper_005e05c0::invoke() {
    G1_func_005ba850((char*)this + 8);
}
