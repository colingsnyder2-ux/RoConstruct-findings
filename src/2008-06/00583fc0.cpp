// from server: 70% by colin
struct GCamera {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
    void copyFrom(const GCamera& other);
};

struct ModelInstance {
    char pad0[0x8];
    int (__cdecl *fn8)(int);
    int off_c;
    int off_10;
    char pad14[0x134 - 0x14];
    int off_134;
};

struct GetSetImpl {
    char pad0[0x8];
    int (__cdecl *fn8)(int);
    int off_c;
    int off_10;
    char pad14[0x134 - 0x14];
    int off_134;
    void setValue(ModelInstance* inst, GCamera* out);
};

void GetSetImpl::setValue(ModelInstance* inst, GCamera* out) {
    int base;
    if (inst) {
        base = (int)inst - 0x14;
    } else {
        base = 0;
    }
    int edx = *(int*)(base + 0x134);
    int esi = this->off_10;
    edx = *(int*)(edx + esi);
    edx += this->off_c;
    int (__cdecl *fn)(int) = this->fn8;
    int ecx = edx + base + 0x134;
    GCamera* src = (GCamera*)fn(ecx);
    out->copyFrom(*src);
    out->f24 = src->f24;
    out->f28 = src->f28;
    out->f2c = src->f2c;
}
