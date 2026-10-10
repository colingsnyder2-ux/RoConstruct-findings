// from server: 38% by tester
struct VCBrowserViewExternal_CComAggObject
{
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    int field18;
    unsigned short field1C;
};

extern "C" void* __cdecl sub_6A0920(unsigned int size);

void* __cdecl sub_40FBF0()
{
    VCBrowserViewExternal_CComAggObject* p = 0;
    void* result = 0;
    int saved = 0;

    p = (VCBrowserViewExternal_CComAggObject*)sub_6A0920(0x20);
    if (p != 0)
    {
        p->field18 = 0;
        p->field10 = 0;
        p->fieldC = 0;
        p->field8 = (void*)0x80D388;
        p->field1C = 0;
        p->field0 = (void*)0x80D778;
        p->field4 = (void*)0x80D760;
        p->field8 = (void*)0x80D73C;
        p->field14 = (void*)0x80D714;
        if (p != 0)
        {
            p->field18++;
            p->field18--;
        }
        result = p;
    }
    else
    {
        result = 0;
    }

    return result;
}
