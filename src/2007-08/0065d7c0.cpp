// from server: 92% by colin
struct CXTPReportGroupRow_Batch {
    char pad[0x70];
    int field_70;
    void* dtor_body(unsigned int flags);
};

extern "C" void __stdcall sub_77ddbc(int*);
extern "C" void __fastcall sub_6d3f30(CXTPReportGroupRow_Batch*);
extern "C" void __stdcall sub_65b150(void*);

void* CXTPReportGroupRow_Batch::dtor_body(unsigned int flags)
{
    sub_77ddbc(&field_70);
    sub_6d3f30(this);
    if (flags & 1)
        sub_65b150(this);
    return this;
}
