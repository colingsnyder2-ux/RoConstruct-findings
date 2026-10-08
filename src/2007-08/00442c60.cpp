// from server: 76% by colin
// roc 2007-08 00442c60  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442c60
//
// 00442c60  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00442c66  85c9                 test ecx, ecx
// 00442c68  7405                 je 0x442c6f
// 00442c6a  e941ffffff           jmp 0x442bb0
// 00442c6f  33c0                 xor eax, eax
// 00442c71  c20800               ret 8

struct FactoryProduct {
    int sub_442bb0(int, int);
    int getValue(int, int);
};

int FactoryProduct::getValue(int a, int b) {
    int p = *(int*)((char*)this + 0xe8);
    if (p != 0) {
        return sub_442bb0(a, b);
    }
    return 0;
}
