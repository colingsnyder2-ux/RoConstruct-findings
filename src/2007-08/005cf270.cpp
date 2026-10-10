// from server: 61% by colin
struct IStage {
    char pad[0x0c];
    void* field0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    void setPosition(const float* pos);
};

extern "C" void __stdcall sub_530100(void* p);

void IStage::setPosition(const float* pos) {
    f1c = pos[0];
    f20 = pos[1];
    f24 = pos[2];
    void* p = field0c;
    sub_530100(p);
    float dx = f1c - *(float*)((char*)p + 0xa8);
    float dy = f20 - *(float*)((char*)p + 0xac);
    float dz = f24 - *(float*)((char*)p + 0xb0);
    float r0 = *(float*)((char*)p + 0x84) * dx
             + *(float*)((char*)p + 0x90) * dy
             + *(float*)((char*)p + 0x9c) * dz;
    float r1 = *(float*)((char*)p + 0x88) * dx
             + *(float*)((char*)p + 0x94) * dy
             + *(float*)((char*)p + 0xa0) * dz;
    float r2 = *(float*)((char*)p + 0x8c) * dx
             + *(float*)((char*)p + 0x98) * dy
             + *(float*)((char*)p + 0xa4) * dz;
    f10 = r0;
    f14 = r1;
    f18 = r2;
}
