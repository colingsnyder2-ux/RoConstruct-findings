// from server: 64% by colin
// roc 2007-08 00619930  unit: RBX::Edge  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00619930
//
// 00619930  d9442414             fld dword ptr [esp + 0x14]
// 00619934  8b542408             mov edx, dword ptr [esp + 8]
// 00619938  d9442418             fld dword ptr [esp + 0x18]
// 0061993c  8bc1                 mov eax, ecx
// 0061993e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00619942  dcc9                 fmul st(1), st(0)
// 00619944  c74004ffffffff       mov dword ptr [eax + 4], 0xffffffff
// 0061994b  89480c               mov dword ptr [eax + 0xc], ecx
// 0061994e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00619952  dec9                 fmulp st(1)
// 00619954  895010               mov dword ptr [eax + 0x10], edx
// 00619957  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061995b  d95808               fstp dword ptr [eax + 8]
// 0061995e  894814               mov dword ptr [eax + 0x14], ecx
// 00619961  d9ee                 fldz 
// 00619963  c7005c3a7c00         mov dword ptr [eax], 0x7c3a5c
// 00619969  d9501c               fst dword ptr [eax + 0x1c]
// 0061996c  895018               mov dword ptr [eax + 0x18], edx
// 0061996f  33c9                 xor ecx, ecx
// 00619971  894820               mov dword ptr [eax + 0x20], ecx
// 00619974  d95024               fst dword ptr [eax + 0x24]
// 00619977  d95028               fst dword ptr [eax + 0x28]
// 0061997a  884830               mov byte ptr [eax + 0x30], cl
// 0061997d  d9582c               fstp dword ptr [eax + 0x2c]
// 00619980  c21800               ret 0x18

struct RBX_Edge {
    int field0;
    int field4;
    float field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    float field1C;
    int field20;
    float field24;
    float field28;
    float field2C;
    char field30;
    RBX_Edge* construct(int a, int b, int c, int d, float e, float f);
};

RBX_Edge* RBX_Edge::construct(int a, int b, int c, int d, float e, float f) {
    float prod = e * f;
    this->field4 = -1;
    this->fieldC = a;
    this->field10 = b;
    this->field8 = prod;
    this->field14 = c;
    this->field0 = 0x7c3a5c;
    this->field1C = 0.0f;
    this->field18 = d;
    this->field20 = 0;
    this->field24 = 0.0f;
    this->field28 = 0.0f;
    this->field30 = 0;
    this->field2C = 0.0f;
    return this;
}
