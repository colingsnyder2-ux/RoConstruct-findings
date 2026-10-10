// from server: 74% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

struct VBrickColor
{
    TypeInfo* value;
    void f();
};

extern TypeInfo* g_brick_color_type;

void VBrickColor::f()
{
    TypeInfo* p = value;
    TypeInfo* q = *(TypeInfo**)((char*)p + 8);
    *q == *g_brick_color_type;
}
