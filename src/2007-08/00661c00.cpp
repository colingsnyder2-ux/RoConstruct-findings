// from server: 33% by colin
struct CXTPReportRecord {
    void* vtable;
    char pad[0x1c];
    void* field20;
    char pad2[0x10];
    CXTPReportRecord* field34;
    void sub_6617E0();
    void sub_661760();
    void sub_63069A();
    void sub_6301E4();
    void sub_661C00();
};

void CXTPReportRecord::sub_661C00()
{
    this->vtable = (void*)0x7c8dfc;
    this->sub_6617E0();
    if (this->field34 != 0)
        this->field34->sub_6301E4();
    this->sub_661760();
    this->sub_63069A();
}
