// from server: 95% by atomic.potato
typedef unsigned char bool8;

struct type_info
{
    bool8 operator==(const type_info&) const;
};

extern bool8 type_info_equal(const type_info*, const type_info*);
extern const type_info type_info_No_Op;

struct S
{
    char padding[16];
    void* f(void*);
};

void* S::f(void* value)
{
    if (((const type_info*)value)->operator==(type_info_No_Op))
        return (char*)this + 16;
    return 0;
}
