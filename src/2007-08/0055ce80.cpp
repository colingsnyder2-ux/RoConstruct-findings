// from server: 66% by colin
// roc 2007-08 0055ce80  unit: RBX::DataModel  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ce80
//
// 0055ce80  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0055ce83  85c0                 test eax, eax
// 0055ce85  750c                 jne 0x55ce93
// 0055ce87  b90a000000           mov ecx, 0xa
// 0055ce8c  3bc8                 cmp ecx, eax
// 0055ce8e  1bc0                 sbb eax, eax
// 0055ce90  f7d8                 neg eax
// 0055ce92  c3                   ret 
// 0055ce93  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0055ce96  2bc8                 sub ecx, eax
// 0055ce98  b8398ee338           mov eax, 0x38e38e39
// 0055ce9d  f7e9                 imul ecx
// 0055ce9f  c1fa03               sar edx, 3
// 0055cea2  8bc2                 mov eax, edx
// 0055cea4  c1e81f               shr eax, 0x1f
// 0055cea7  03c2                 add eax, edx
// 0055cea9  b90a000000           mov ecx, 0xa
// 0055ceae  3bc8                 cmp ecx, eax
// 0055ceb0  1bc0                 sbb eax, eax
// 0055ceb2  f7d8                 neg eax
// 0055ceb4  c3                   ret 

struct RBX_DataModel {
    int field_0x0;
    int field_0x4;
    int field_0x8;
    int field_0xc;
    int field_0x10;
    int getValue();
};

int RBX_DataModel::getValue()
{
    int a = field_0xc;
    if (a == 0) {
        int c = 10;
        return (c > a) ? 1 : 0;
    }
    int b = field_0x10 - a;
    int q = b / 72;
    int c = 10;
    return (c > q) ? 1 : 0;
}
