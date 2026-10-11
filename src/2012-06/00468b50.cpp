// from server: 88% by atomic.potato
struct S
{
    int f(void *);
};

extern "C" int sub_467360(void *);
extern "C" int __stdcall sub_76a190(void *, int *);

int S::f(void *arg)
{
    int value = *(int *)sub_467360((char *)arg + 4);
    return sub_76a190(this, &value);
}
