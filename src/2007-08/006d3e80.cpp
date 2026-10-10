// from server: 5% by colin
struct CXTPReportColumnOrder {
    void* vtable;
    char pad[0x1c];
    void* field20;
    void* field24;
    char field28[0x18];
    void destruct();
    void sub_6D3E10();
    void sub_6D36E0();
    void sub_6301E4();
    void sub_63069A();
};

void CXTPReportColumnOrder::sub_6301E4() {}
void CXTPReportColumnOrder::sub_63069A() {}
void CXTPReportColumnOrder::sub_6D36E0() {}
void CXTPReportColumnOrder::sub_6D3E10() {}

void CXTPReportColumnOrder::destruct()
{
    this->vtable = (void*)0x7d8344;
    this->sub_6D3E10();
    if (this->field20)
        this->sub_6301E4();
    if (this->field24)
        this->sub_6301E4();
    this->sub_6D36E0();
    this->sub_63069A();
}
