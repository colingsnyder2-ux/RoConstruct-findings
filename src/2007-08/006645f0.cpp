// from server: 44% by colin
struct VCXTPReportRows_CXTPHeapObjectT
{
    char pad_0000[0x20];
    int field_20;
    int field_24;
    char pad_0028[0x08];
    int field_30;
    int field_34;

    void func_006641b0();
    void func_006641e0(int, int, int);
    void func_006644c0(int);
    void func_006645f0(int, int);
};

struct Sub20
{
    char pad_0000[0xa0];
    void* field_a0;
};

struct SubA0
{
    void* method_5c(int);
};

struct Sub5C
{
    int method_88();
    int method_78();
};

extern "C" int __stdcall sub_0047b540(int);
extern "C" void __stdcall sub_0062ff20();

void VCXTPReportRows_CXTPHeapObjectT::func_006645f0(int a1, int a2)
{
    int edi = field_24;
    if (edi == -1)
        edi = a1;
    int esi = edi;
    if (edi == -1)
        return;
    int ebp = a2;
    if (ebp == -1)
        return;
    if (edi > ebp)
    {
        esi = ebp;
        ebp = edi;
    }
    if (field_34 == 1)
    {
        if (field_34 <= 0)
            sub_0062ff20();
        if (*(int*)field_30 == esi)
        {
            if (field_34 <= 0)
                sub_0062ff20();
            if (*(int*)(field_30 + 4) == ebp + 1)
                return;
        }
    }
    func_006641b0();
    if (field_24 == -1)
        field_24 = edi;
    Sub20* p20 = (Sub20*)field_20;
    int v1 = *(int*)((char*)p20 + 0x17c);
    SubA0* pa0 = *(SubA0**)((char*)p20 + 0xac);
    int v2 = sub_0047b540(*(int*)((char*)pa0 + 0x20));
    if (v2 == 0 || v1 == 0)
    {
        func_006641e0(0, esi, ebp + 1);
        return;
    }
    if (esi > ebp)
        return;
    do
    {
        Sub20* p = (Sub20*)field_20;
        SubA0* pa = *(SubA0**)((char*)p + 0xa0);
        void* obj = ((SubA0*)pa)->method_5c(esi);
        if (obj != 0)
        {
            Sub5C* o = (Sub5C*)obj;
            if (o->method_88() != 0)
            {
                if (o->method_78() != 0)
                {
                    if (esi != a1 && esi != ebp)
                    {
                        func_006644c0((int)obj);
                    }
                }
                else
                {
                    func_006644c0((int)obj);
                }
            }
            else
            {
                func_006644c0((int)obj);
            }
        }
        esi++;
    } while (esi <= ebp);
}
