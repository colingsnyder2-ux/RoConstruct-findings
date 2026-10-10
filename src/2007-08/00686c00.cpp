// from server: 69% by colin
struct CXTPPropExchangeArchive
{
    int field_0x24;
    int field_0x28;
    int field_0x2c;
    int field_0x30;
    int field_0x34;
    int field_0x38;
    int field_0x3c;
    void* field_0x40;
    void Read();
};

extern "C" void __stdcall sub_00630688(void*, int);
extern "C" void __stdcall sub_0064ada0(void*, void*);
extern "C" void __stdcall sub_0073842a(void*);
extern "C" void __stdcall sub_00738430(void*, int);
extern "C" void* __stdcall sub_0077dd98(void*);

void CXTPPropExchangeArchive::Read()
{
    if (field_0x24 == 0)
    {
        void* p = field_0x40;
        if ((~*(int*)((char*)p + 0x18) & 1) == 0)
        {
            void* r = sub_0077dd98((char*)p + 0x14);
            sub_00630688(r, 2);
        }
        int* cur = *(int**)((char*)p + 0x28);
        if ((char*)cur + 4 > *(char**)((char*)p + 0x2c))
        {
            sub_0073842a(p);
        }
        cur = *(int**)((char*)p + 0x28);
        *cur = 0xff0adbf;
        *(int**)((char*)p + 0x28) = cur + 1;

        p = field_0x40;
        if ((~*(int*)((char*)p + 0x18) & 1) == 0)
        {
            void* r = sub_0077dd98((char*)p + 0x14);
            sub_00630688(r, 2);
        }
        int val = field_0x28;
        cur = *(int**)((char*)p + 0x28);
        if ((char*)cur + 4 > *(char**)((char*)p + 0x2c))
        {
            sub_0073842a(p);
        }
        cur = *(int**)((char*)p + 0x28);
        *cur = val;
        *(int**)((char*)p + 0x28) = cur + 1;
    }
    else
    {
        void* p = field_0x40;
        sub_00738430(p, 4);
        p = field_0x40;
        int* cur = *(int**)((char*)p + 0x28);
        if (*cur == 0xff0adbf)
        {
            sub_0064ada0(p, &field_0x2c);
            p = field_0x40;
            sub_0064ada0(p, &field_0x28);
        }
        else
        {
            field_0x28 = 0x11;
        }
    }
}
