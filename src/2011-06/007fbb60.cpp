// from server: 67% by atomic.potato
extern "C" void* __cdecl std_string_ctor(void*, const char*);

struct S_func_007fbb60
{
    bool f(int a1);
};

bool S_func_007fbb60::f(int a1)
{
    void* p = 0;
    std_string_ctor(&p, "ExclusiveArbiter");
    return true;
}
