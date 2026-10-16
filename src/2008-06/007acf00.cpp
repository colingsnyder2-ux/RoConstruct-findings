// from server: 79% by colin




struct OgreMaterialPtr {
    void* p;
};

extern "C" void* __stdcall sub_598FA0(void* dst, const void* src);

struct MaterialLevel {
    char pad0[4];
    char inArray;
    char pad5[3];
    OgreMaterialPtr field8;
    OgreMaterialPtr fieldC;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    char pad2c[4];
    void* assign(const MaterialLevel* other);
};

void* MaterialLevel::assign(const MaterialLevel* other)
{
    inArray = other->inArray;
    sub_598FA0(&field8, &other->field8);
    sub_598FA0(&fieldC, &other->fieldC);
    f10 = other->f10;
    f14 = other->f14;
    f18 = other->f18;
    f1c = other->f1c;
    f20 = other->f20;
    f24 = other->f24;
    f28 = other->f28;
    ((void (__stdcall*)(void*, const void*))0x8045f4)(&pad2c, &other->pad2c);

    return this;
}
