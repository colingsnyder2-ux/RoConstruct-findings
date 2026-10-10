// from server: 63% by atomic.potato
typedef int BOOL;

struct TypeInfo;

struct TypeInfoEqual
{
    BOOL operator()(TypeInfo *);
};

struct S
{
    int f();
};

int S::f()
{
    TypeInfo *p = *(TypeInfo **)this;
    TypeInfo *q = *(TypeInfo **)((char *)p + 8);
    return TypeInfoEqual().operator()(q);
}
