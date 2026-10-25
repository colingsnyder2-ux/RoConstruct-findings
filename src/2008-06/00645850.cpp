// from server: 100% by tester
// roc 2008-06 00645850  unit: RBX::Primitive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645850
//
// 00645850  6a07                 push 7
// 00645852  e889ffffff           call 0x6457e0
// 00645857  c3                   ret 

struct RBX_Primitive_00645850 {
    void func_006457e0(int);
    void wrapper();
};

void RBX_Primitive_00645850::wrapper() {
    func_006457e0(7);
}
