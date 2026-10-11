// from server: 34% by colin
struct RenderSceneBase
{
    void construct();
};

extern "C" void __stdcall sub_8028a4(void*);
extern "C" void sub_6a158c(void*, void*);
extern "C" void std_exception_ctor(void*, const char**);

void RenderSceneBase::construct()
{
    void* p;
    const char* msg = "shouldn't be here";
    sub_8028a4(&p);
    std_exception_ctor(&p, &msg);
    sub_6a158c(&p, (void*)0x8d997c);
}
