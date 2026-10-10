// from server: 25% by tester
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

Bucket::Bucket(int v)
{
    field0 = 0x82cf04;
    field4 = 0;
    S_func_0071f210* p = (S_func_0071f210*)v;
    field4 = p->f();
}
