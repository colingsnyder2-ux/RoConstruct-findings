// from server: 55% by colin
// roc 2009-06 0062d710  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062d710
//
// 0062d710  8d81e8feffff         lea eax, [ecx - 0x118]
// 0062d716  c3                   ret 

struct S {
    int field;
};

int func_0062d710(S* thisPtr) {
    return *(int*)((char*)thisPtr - 0x118);
}
