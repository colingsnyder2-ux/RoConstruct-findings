// from server: 76% by atomic.potato
typedef int (__cdecl *FunctionType)();

extern "C" int __cdecl sub_00820471();
extern FunctionType g_00A3183C;
extern FunctionType g_00A31840;
extern FunctionType sub_00820766;
extern FunctionType sub_00820890;
extern FunctionType sub_0082097C;

struct seg_00820000
{
    void f();
};

void seg_00820000::f()
{
    if (sub_00820471())
        g_00A3183C = sub_0082097C;
    else
    {
        g_00A3183C = sub_00820766;
        sub_00820890;
    }

    g_00A31840 = sub_00820890;
}
