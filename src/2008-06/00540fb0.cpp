// from server: 30% by colin
struct S_func_0071f210 {
    int m_x;
    int f();
};

int S_func_0071f210::f()
{
    return m_x;
}

struct Bucket {
    int field0;
    int field4;
    Bucket(int v);
};

extern "C" void __stdcall sub_4e5c00();
extern "C" void __stdcall sub_542770();

Bucket::Bucket(int v)
{
    sub_4e5c00();
    field0 = 0x82cf04;
    field4 = 0;
    S_func_0071f210* p = (S_func_0071f210*)v;
    sub_542770();
    field4 = p->f();
}
