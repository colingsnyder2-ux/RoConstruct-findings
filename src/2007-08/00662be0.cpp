// from server: 83% by colin
struct CXTPReportRecordItemPreview
{
    char pad[0xb0];
    void* field_b0;
};

struct Inner
{
    char pad[0x220];
    int field_220;
    int field_224;
    int field_228;
    int field_22c;
};

struct Arg
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
};

void __stdcall func_00662be0(Arg* a, Arg* b)
{
    Inner* inner = (Inner*)((CXTPReportRecordItemPreview*)a->field_4)->field_b0;
    int v22c = inner->field_22c;
    int v228 = inner->field_228;
    int v220 = inner->field_220;
    b->field_4 -= 1;
    b->field_8 -= v228;
    v220 -= 2;
    b->field_0 += v220;
    b->field_c -= -v22c;
}
