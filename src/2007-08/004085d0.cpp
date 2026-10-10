// from server: 86% by tester
struct VCApp_CComObject {
    bool Init();
    bool sub_4282D0();
};



bool VCApp_CComObject::Init()
{
    return sub_4282D0();
}

int __stdcall Target(unsigned short* out, int unused)
{
    VCApp_CComObject obj;
    bool b = obj.Init();
    *out = b ? 0xFFFF : 0;
    return 0;
}
