// from server: 34% by colin
struct CXTPReportViewPrintOptions {
    void* vtable;
    char pad[0x34];
    void* field38;
    void* field3c;
    void Destruct();
};

extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_63069A(void*);

void CXTPReportViewPrintOptions::Destruct()
{
    this->vtable = (void*)0x7cebcc;
    if (this->field38)
    {
        sub_6301E4(this->field38);
        this->field38 = 0;
    }
    if (this->field3c)
    {
        sub_6301E4(this->field3c);
        this->field3c = 0;
    }
    sub_63069A(this);
}
