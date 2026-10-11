// from server: 58% by colin
struct CXTPReportColumnOrder {
    char pad0[0x20];
    void* field20;
    char pad24[0x4];
    void* field24;
    char pad28[0x4];
    void* field28;
    int count30;
    void** items2c;
    void Clear();
};

extern "C" void __stdcall sub_6a0be4(void*);
extern "C" void __stdcall sub_6a0944();
extern "C" void __stdcall sub_70e1d0(void*, int, int);
extern "C" void __stdcall sub_750160(void*);

void CXTPReportColumnOrder::Clear()
{
    int i = count30 - 1;
    if (i >= 0)
    {
        do
        {
            if (i < 0 || i >= count30)
            {
                sub_6a0944();
            }
            sub_6a0be4(items2c[i]);
            i--;
        } while (i >= 0);
    }
    sub_70e1d0(&field28, 0, -1);
    sub_750160(field24);
    sub_750160(field20);
}
