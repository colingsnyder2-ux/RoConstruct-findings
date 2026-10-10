// from server: 62% by colin
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

extern void func_00657410();
extern void func_0065ad10();
extern void func_00630004();

struct CXTPReportInplaceList
{
    char pad_0000[0x20];
    void* field_20;
    char pad_0024[0x30];
    void* field_54;
    void* field_58;
    void* field_5c;
    void* field_60;
    void* field_64;
    char pad_0068[0x18];
    int field_80;
    void func_006d1e00();
};

void CXTPReportInplaceList::func_006d1e00()
{
    void* p = field_58;
    if (p == 0)
        return;

    long r1 = SendMessageA(field_20, 0x188, 0, 0);
    if (r1 == -1)
    {
        func_00630004();
        return;
    }

    field_80 = 1;
    long r2 = SendMessageA(field_20, 0x199, (unsigned int)r1, 0);

    void** vtbl = *(void***)field_64;
    void (*fn)(void*, void*, long) = (void (*)(void*, void*, long))vtbl[0x12c / 4];
    fn(field_64, &field_54, r2);

    func_00657410();
    func_0065ad10();
    func_00630004();
}
