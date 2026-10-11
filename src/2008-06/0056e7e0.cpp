// from server: 60% by colin
struct PropDesc;

struct GetSet {
    bool isDataDescriptor();
    bool getValue(int* out);
};

struct PropDesc {
    char pad[0x18];
    GetSet* getset;
    bool equalTo(PropDesc* other);
};

extern "C" bool __fastcall sub_57C810(GetSet* self);
extern "C" bool __fastcall sub_57C4F0(GetSet* self, int* out);

bool PropDesc::equalTo(PropDesc* other) {
    if (sub_57C810(other->getset))
        return true;
    int val;
    if (!sub_57C4F0(other->getset, &val))
        return true;
    GetSet* gs = this->getset;
    void** vtbl = *(void***)gs;
    void (*fn)(GetSet*, int*, int) = (void (*)(GetSet*, int*, int))vtbl[3];
    fn(gs, &val, val);
    return true;
}
