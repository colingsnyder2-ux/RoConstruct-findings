// from server: 94% by colin
struct type_info
{
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_00631392(void*);

struct Inner
{
    char pad[0x318];
    void* field_318;
};

struct Middle
{
    char pad[0x188];
    Inner* field_188;
};

struct Outer
{
    char pad[0xc];
    Middle* field_c;
    bool f();
};

bool Outer::f()
{
    Inner* p = field_c->field_188;
    void* q = p->field_318;
    if (q != 0)
    {
        void* r = sub_00631392(q);
        return ((const type_info*)0x8a5220)->operator==(*(const type_info*)r);
    }
    return false;
}
