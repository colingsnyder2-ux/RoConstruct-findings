// from server: 53% by colin
// roc 2010-06 00417211  unit: VCContent::?$CComObject  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00417211
//
// 00417211  33db                 xor ebx, ebx
// 00417213  8b7dd0               mov edi, dword ptr [ebp - 0x30]

struct VCContent {
    void m();
};

extern VCContent G1_func_00417211;
void func_00417211() {
    G1_func_00417211.m();
}
