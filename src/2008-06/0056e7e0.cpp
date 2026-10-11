// from server: 63% by tester
struct PropDesc;

struct GetSet {
    bool isDataDescriptor();
    bool getValue(int* out);
};

struct PropDesc {
    char pad[0x18];
    GetSet* getset;
    void equalTo(PropDesc* other, int, int);
};

extern "C" bool __fastcall sub_57C810(GetSet* self);
extern "C" bool __fastcall sub_57C4F0(GetSet* self, int* out);

void PropDesc::equalTo(PropDesc* other, int, int) {
    if (sub_57C810(other->getset))
        return;
    int val;
    if (!sub_57C4F0(other->getset, &val))
        return;
    GetSet* gs = this->getset;
    void** vtbl = *(void***)gs;
    void (*fn)(GetSet*, int*, int) = (void (*)(GetSet*, int*, int))vtbl[3];
    fn(gs, &val, val);
}
