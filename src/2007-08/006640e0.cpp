// from server: 86% by colin
// roc 2007-08 006640e0  unit: VCXTPReportRows  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006640e0

struct CXTPHeapObjectT
{
    char pad[0x20];
    int field20;
    char pad2[4];
    int field28;
};

extern "C" int __stdcall sub_6d2910(int, int);

struct VCXTPReportRows
{
    int method(int* param);
};

int VCXTPReportRows::method(int* param)
{
    int* self = (int*)this;
    int esi = self[0x28 / 4];
    sub_6d2910(esi, (int)param);
    param[0x50 / 4] = (int)this;
    param[0x6c / 4] = esi;
    return esi;
}
