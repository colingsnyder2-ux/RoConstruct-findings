// from server: 37% by colin
struct CRbxPlayDocTemplate
{
    bool method(int, int, int, int, int, int, int);
};

extern "C" void* __stdcall sub_0080245C(void*);
extern "C" void __stdcall sub_00802468(void*);
extern "C" bool __fastcall sub_0044A1F0(CRbxPlayDocTemplate*);

bool CRbxPlayDocTemplate::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char buf[28];
    sub_0080245C(buf);
    bool result = sub_0044A1F0(this) == 0;
    sub_00802468(buf);
    return result;
}
