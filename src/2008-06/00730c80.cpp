// from server: 69% by atomic.potato
extern "C" int __cdecl func_0072e380(int, int, int);

struct S
{
    int func_0072f070();
};

int S::func_0072f070()
{
    return 0;
}

int __stdcall func_00730c80(int a, int b)
{
    return ((S*)func_0072e380(a, b, 0))->func_0072f070();
}
