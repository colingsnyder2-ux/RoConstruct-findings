// from server: 43% by atomic.potato
struct S_func_004e9330 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

void S_func_004e9330::f(int a1)
{
    m_x = (int)a1;
}

struct TreeStage {
    void f(S_func_004e9330 *a1);
};

void TreeStage::f(S_func_004e9330 *a1)
{
    a1->f(0);
}
