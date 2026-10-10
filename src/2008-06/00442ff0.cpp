// from server: 99% by atomic.potato
extern "C" int __cdecl sub_6A17C6(void *, void *, const char *, const char *, int);

struct S
{
    int f(void *);
};

int S::f(void *p)
{
    return sub_6A17C6(p, 0, ".?AVMembers@Metadata@Reflection@RBX@@", ".?AVInstance@RBX@@", 0) != 0;
}
