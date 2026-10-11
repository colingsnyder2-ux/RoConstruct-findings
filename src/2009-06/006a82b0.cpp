// from server: 57% by atomic.potato
struct S_func_006a79a0 {
    char pad0[32];
    int m_x;
    int* f();
};

struct Vec_6a7b10 {
    int* m_data;
    int m_count;
    void func(int idx, int val);
};

struct S {
    char pad0[0xc];
    Vec_6a7b10 m_vec;
    void method(S_func_006a79a0* arg);
};

void S::method(S_func_006a79a0* arg)
{
    int idx = *arg->f();
    int* data = this->m_vec.m_data;
    int count = this->m_vec.m_count;
    data[idx] = data[count - 1];
    *arg->f() = idx;
    this->m_vec.func(count - 1, 0);
    *arg->f() = -1;
}
