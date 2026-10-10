// from server: 63% by atomic.potato
extern "C" void __stdcall ContactStage(int, int);

struct S_func_00726230 {
    int *m_ptr;
    void f();
};

void S_func_00726230::f()
{
    int *p = m_ptr;
    p[9] = 0;
    int *q = p + 5;
    int v = q[0];
    q[2] = v;
    q[3] = v;
    ContactStage(0, 1);
}
