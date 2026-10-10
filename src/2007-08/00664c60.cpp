// from server: 38% by colin
struct CXTPReportRows {
    void Destruct();
};

extern "C" void __cdecl sub_666df0(void*);
extern "C" void __cdecl sub_7385f8(void*);

void CXTPReportRows::Destruct()
{
    void* p = this;
    if (p != 0)
        sub_666df0((char*)p + 0x54);
    else
        sub_666df0(0);
    sub_7385f8(p);
}
