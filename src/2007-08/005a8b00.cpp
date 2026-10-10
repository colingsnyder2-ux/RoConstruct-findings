// from server: 82% by colin
struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object, void* out) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct BoundPropGetSet {
    char pad0[4];
    int desc;
    int member;
    int changed;
    int pad10;
    int pad14;
    int pad18;
    void setValue(DescribedBase* object, const float* value) const;
};

extern "C" void __stdcall sub_444710(int);

void BoundPropGetSet::setValue(DescribedBase* object, const float* value) const {
    int obj = (int)object;
    int base;
    if (obj != 0) {
        base = obj - 4;
    } else {
        base = 0;
    }
    int off = *(int*)(base + 0x108);
    int ecx = *(int*)(this->pad0 + 0xc);
    int memberOff = *(int*)(ecx + off);
    memberOff += *(int*)(this->pad0 + 8);
    float* field = (float*)(memberOff + base + 0x108);
    if (*value != *field) {
        *field = *value;
        int changed = *(int*)(this->pad0 + 0x10);
        if (changed != 0) {
            int a = *(int*)(this->pad0 + 4);
            int ecx2 = *(int*)(this->pad0 + 0x18);
            int edx = *(int*)(ecx2 + off);
            edx += *(int*)(this->pad0 + 0x14);
            int arg = edx + base + 0x108;
            ((void (__thiscall*)(int, int))changed)(arg, a);
        }
        int a2 = *(int*)(this->pad0 + 4);
        sub_444710(a2);
    }
}
