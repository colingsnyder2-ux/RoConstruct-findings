// from server: 52% by atomic.potato
struct S_func_00457a40 {
    int m_x;
    int f(int a, int b);
};

extern "C" void* __cdecl sub_7f3860(int size);

int S_func_00457a40::f(int a, int b)
{
    m_x = 0;
    void* p = sub_7f3860(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x9acdd8;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    m_x = (int)p;
    return (int)this;
}
