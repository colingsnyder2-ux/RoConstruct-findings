// from server: 73% by colin
// roc 2007-08 006d3e10  unit: CXTPReportColumnOrder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3e10

struct CXTPReportColumnOrder {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    void RemoveAll();
};

extern "C" void __fastcall sub_6301e4(int);
extern "C" void __fastcall sub_6d3ba0(int);
extern "C" void __fastcall sub_6ffab0(int, int, int);
extern "C" void __fastcall sub_62ff20();

void CXTPReportColumnOrder::RemoveAll()
{
    int i = field_30 - 1;
    if (i >= 0) {
        do {
            if (i >= 0)
                sub_62ff20();
            if (i >= field_30)
                sub_62ff20();
            sub_6301e4(*(int*)(field_2c + i * 4));
            i--;
        } while (i >= 0);
    }
    sub_6ffab0((int)(this) + 0x28, 0, -1);
    sub_6d3ba0(field_24);
    sub_6d3ba0(field_20);
}
