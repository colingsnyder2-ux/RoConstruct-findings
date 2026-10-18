// from server: 53% by colin
// roc 2008-06 004e5ff0  unit: RBX::ViewNew::PartChunk  size: 52 bytes

struct Src {
    int data[9];
    float f24;
    float f28;
    float f2c;
};

struct PartChunk {
    char pad0[0x28];
    int data[9];
    float f24;
    float f28;
    float f2c;
    char pad30[0xbc - 0x30 - 0xc];
    void* field_bc;
    void copyFrom();
};

extern "C" Src* __stdcall sub_598cb0(void* self);

void PartChunk::copyFrom() {
    Src* src = sub_598cb0(field_bc);
    *(Src*)data = *src;
}
