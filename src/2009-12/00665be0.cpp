// from server: 53% by atomic.potato
struct TypeInfo {
    bool operator==(const TypeInfo &other) const;
};

struct S {
    void *reserved;
    void *value;
    void *type_info;
    void *reserved2;
    void *result();
};

void *S::result()
{
    TypeInfo *a = (TypeInfo *)type_info;
    TypeInfo *b = *(TypeInfo **)((char *)this + 8);
    if (*a == *b)
        return (char *)this + 16;
    return 0;
}
