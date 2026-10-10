// from server: 66% by colin
struct connection;

struct sp_counted_impl_p_connection {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    float field24;
    float field28;
    float field2C;
};

extern void* G_008abe80;

extern sp_counted_impl_p_connection* __cdecl sub_5BF240(void* a, int b, void* c);
extern bool __cdecl sub_509680(sp_counted_impl_p_connection* p);
extern void __cdecl sub_5BDD60(void* a, int b);

struct S {
    bool f(void* a);
};

bool S::f(void* a)
{
    sp_counted_impl_p_connection* p1 = sub_5BF240(G_008abe80, 2, a);
    sp_counted_impl_p_connection* p2 = sub_5BF240(G_008abe80, 1, a);

    bool eq = false;
    if (p1->field24 == p2->field24 &&
        p1->field28 == p2->field28 &&
        p1->field2C == p2->field2C &&
        sub_509680(p1))
    {
        eq = true;
    }

    sub_5BDD60(a, eq ? 1 : 0);
    return true;
}
