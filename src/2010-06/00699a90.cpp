// from server: 54% by atomic.potato
struct S_func_00699a90
{
    char pad0[216];
    struct V
    {
        void* vtable;
    };
    V* m_value;
    void* f();
};

void* S_func_00699a90::f()
{
    return m_value->vtable;
}
