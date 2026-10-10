// from server: 86% by colin
struct CXTPReportTip {
    void sub_6d4440();
    void sub_77ddac();
    int field_64;
    char pad_68[8];
    int field_70;
    int method();
};

int CXTPReportTip::method()
{
    sub_6d4440();
    *(int*)this = 0x7d869c;
    sub_77ddac();
    field_64 = 1;
    return (int)this;
}
