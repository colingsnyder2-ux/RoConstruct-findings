// from server: 24% by atomic.potato
struct S_func_00809140 {
    char pad0[48];
    int m_x;
    int* f();
};

int* S_func_00809140::f()
{
    return &m_x;
}

struct CXTPImageManager {
    int sub_00810EB0(int, int, int, int);
    int sub_008110C0(int, int, int);
};

int CXTPImageManager::sub_008110C0(int a, int b, int c)
{
    int local[2];
    local[0] = 0;
    local[1] = 0;
    int* p = ((S_func_00809140*)this)->f();
    return sub_00810EB0((int)p, a, b, c);
}
