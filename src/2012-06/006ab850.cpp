// from server: 68% by atomic.potato
typedef unsigned int DWORD;
struct type_info;

struct S
{
    void *unused;
    void *unused2;
    void *unused3;
    void *unused4;
    int f();
};

extern "C" int __stdcall type_info_equal(const type_info *, const type_info *);
extern type_info *g_type_info;

int S::f()
{
    if (type_info_equal((const type_info *)g_type_info, (const type_info *)0xd9ecc0))
        return (int)((char *)this + 0x10);
    return 0;
}
