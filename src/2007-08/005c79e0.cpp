// from server: 83% by colin
extern "C" int __cdecl fscanf(void*, const char*, ...);
extern "C" void __cdecl func_005bdb70(double, int);

struct S_func_005c79e0
{
    int f();
};

int S_func_005c79e0::f()
{
    double d;
    if (fscanf((void*)this, "HD;H@Wr", &d) == 1)
    {
        func_005bdb70(d, *(int*)((char*)&d + 8));
        return 1;
    }
    return 0;
}
