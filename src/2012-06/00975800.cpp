// from server: 95% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo &other) const;
};

extern const TypeInfo g_type_info;

struct S
{
    void *f(void *);
};

void *S::f(void *p)
{
    if (*(const TypeInfo *)p == g_type_info)
        return (char *)this + 16;
    return 0;
}
