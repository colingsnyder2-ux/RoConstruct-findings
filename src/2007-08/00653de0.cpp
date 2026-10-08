// from server: 73% by colin
// roc 2007-08 00653de0  size: 41 bytes
// library rbxgs

extern "C" void __stdcall sub_77ddbc();
extern "C" void __cdecl sub_62fc62(void*);
extern "C" void __cdecl sub_63069a();

struct XTP_REPORTRECORDITEM_METRICS {
    char pad[0x2c];
    int field_2c;
    void* destroy(char flag);
};

void* XTP_REPORTRECORDITEM_METRICS::destroy(char flag) {
    sub_77ddbc();
    sub_63069a();
    if (flag & 1) {
        sub_62fc62(this);
    }
    return this;
}
