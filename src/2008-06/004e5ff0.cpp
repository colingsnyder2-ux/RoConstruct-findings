// from server: 55% by colin
// roc 2008-06 004e5ff0  unit: RBX::ViewNew::PartChunk  size: 52 bytes

struct Src {
    float data[12];
};

struct PartChunk {
    char pad0[0x28];
    float field28[9];
    float field4c;
    float field50;
    float field54;
    char pad58[0xbc - 0x58];
    void* fieldbc;
    void copyFrom();
};

extern "C" Src* __stdcall sub_598cb0(void* self);

void PartChunk::copyFrom() {
    Src* src = sub_598cb0(fieldbc);
    *(Src*)field28 = *src;
}
