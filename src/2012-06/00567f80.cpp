// from server: 84% by Intel
struct S {
    void f(void* arg);
};

extern "C" void __stdcall external_func(void* ptr, int diff);

void S::f(void* arg)
{
    int diff = *(int*)arg;
    diff -= *(int*)((char*)arg + 8);
    external_func(arg, diff);
}
