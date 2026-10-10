// from server: 95% by atomic.potato
extern "C" void __stdcall sub_007f3b0c();

struct S_func_008a2f50 {
    char pad0[36];
    int *m_data;
    int m_size;
    void f(int index, int value);
};

void S_func_008a2f50::f(int index, int value)
{
    if (index >= 0 && index < m_size)
        m_data[index] = value;
    else
        sub_007f3b0c();
}
