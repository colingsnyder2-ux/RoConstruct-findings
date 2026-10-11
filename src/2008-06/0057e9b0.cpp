// from server: 56% by atomic.potato
typedef unsigned int DWORD;

struct S;

extern "C" void sub_0057e730(void *);
extern "C" void std_basic_string_ctor(void *, const char *);
extern void *g_00802458;

struct S
{
    S *f(const char *);
};

S *S::f(const char *value)
{
    char local[28];
    std_basic_string_ctor(local, "FilteredSelection");
    sub_0057e730(this);
    *(DWORD *)this = 0x830860;
    return this;
}
