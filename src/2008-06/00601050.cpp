// from server: 58% by colin
struct VToolBoundPropGetSet {
    char pad[0x15c];
    int field_15c;
    int field_160;
    float field_164;
    float field_168;
    void sub_5cf6d0();
    VToolBoundPropGetSet* construct(int a, int b, float c, float d);
};

void VToolBoundPropGetSet::sub_5cf6d0() {
}

VToolBoundPropGetSet* VToolBoundPropGetSet::construct(int a, int b, float c, float d) {
    sub_5cf6d0();
    field_15c = a;
    *(int*)((char*)this + 0) = 0x84213c;
    *(int*)((char*)this + 0x10) = 0x84212c;
    *(int*)((char*)this + 0x14) = 0x842124;
    *(int*)((char*)this + 0x20) = 0x84211c;
    *(int*)((char*)this + 0x24) = 0x84210c;
    *(int*)((char*)this + 0x44) = 0x8420fc;
    *(int*)((char*)this + 0x64) = 0x8420ec;
    *(int*)((char*)this + 0x84) = 0x8420dc;
    *(int*)((char*)this + 0xa4) = 0x8420cc;
    *(int*)((char*)this + 0xc4) = 0x8420bc;
    *(int*)((char*)this + 0x130) = 0x8420b4;
    field_160 = b;
    field_164 = c;
    field_168 = d;
    return this;
}
