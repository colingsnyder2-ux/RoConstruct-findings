// from server: 90% by atomic.potato
extern "C" int __stdcall sub_62d140(void*);

volatile int g_cca3e4;

struct S
{
    int f();
};

int S::f()
{
    ++g_cca3e4;
    int* p = reinterpret_cast<int*>(this);
    *p = sub_62d140(this);
    p[1] = 0;
    return *p;
}
