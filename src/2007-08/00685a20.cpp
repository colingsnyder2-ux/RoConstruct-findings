// from server: 90% by colin
// roc 2007-08 00685a20  unit: seg_00680000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685a20

extern "C" int __stdcall sub_77DD98();
extern "C" void __cdecl sub_630688(int, int);
extern "C" void __fastcall sub_73842A(void*);

struct CNameItem {
    char pad0[0x14];
    int field14;
    int field18;
    char pad1[0x0c];
    unsigned short* field28;
    unsigned short* field2c;
    CNameItem* method(unsigned short arg);
};

CNameItem* CNameItem::method(unsigned short arg) {
    if ((~field18 & 1) == 0) {
        int r = sub_77DD98();
        sub_630688(2, r);
    }
    unsigned short* p = field28 + 1;
    if (p > field2c) {
        sub_73842A(this);
    }
    *field28 = arg;
    field28 = field28 + 1;
    return this;
}
