// from server: 68% by why2
extern "C" void __stdcall sub_8205d4(int);

extern "C" int (__stdcall *g_target)(int);

int __stdcall sub_81e2da(int a)
{
    sub_8205d4(1);
    return g_target(a);
}
