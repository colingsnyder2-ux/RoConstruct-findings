// from server: 73% by atomic.potato
struct S
{
    int f(int);
};

extern "C" int sub_467240(void *, int);
extern "C" int sub_76a190(void *, int *);

int S::f(int value)
{
    int result = sub_467240(this, value + 4);
    int value2 = *(int *)result;
    return sub_76a190(this, &value2);
}
