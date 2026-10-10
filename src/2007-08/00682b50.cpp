// from server: 35% by colin
struct CXTPPropertyGridToolBar
{
    void func_00682b50();
};

extern "C" void __stdcall sub_00630490(void*);
extern "C" void __stdcall sub_00680000(void*);
extern "C" void __stdcall sub_00680060(void*, void*, void*);
extern "C" void __stdcall sub_00668f70();
extern "C" void __stdcall sub_00668770(int);
extern "C" void __stdcall sub_006308b0(void*, void*, void*);
extern "C" void __stdcall sub_0062fde2(void*, int, void*, int);
extern "C" void __stdcall sub_00680430(void*);
extern "C" void __stdcall sub_0063048a(void*);
extern "C" void __stdcall sub_00630a1e();

void CXTPPropertyGridToolBar::func_00682b50()
{
    char buf1[64];
    char buf2[64];
    void* p;

    sub_00630490(buf1);
    sub_00680000(buf2);
    sub_00680060(buf1, buf2, &p);
    sub_00668f70();
    sub_00668770(15);
    sub_006308b0(buf2, &p, buf1);
    sub_0062fde2(this, 15, p, 0);
    sub_00680430(buf2);
    sub_0063048a(buf1);
    sub_00630a1e();
}
