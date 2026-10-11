// from server: 68% by colin
struct S_func_0060d580 {
    char pad0[56];
    int m_x;
    int f();
};

struct S_func_00710e30 {
    char pad0[0xb0];
    int m_x;
    int f();
};

struct S_func_00704ca0 {
    int f(int, int);
};

struct S_func_007028c0 {
    int f(int);
};

struct S_func_006a0bde {
    int f(int);
};

struct S {
    char pad0[0x38];
    void* m_p;
    int f(int, int, int, int, int);
};

int S::f(int a1, int a2, int a3, int a4, int a5)
{
    if (m_p != 0) {
        S_func_00710e30* p = (S_func_00710e30*)m_p;
        int v = p->f();
        if (*(int*)((char*)p + 0xb0) != 0) {
            S_func_00704ca0* q = (S_func_00704ca0*)m_p;
            int r = q->f(a4, a5);
            if (r != 0) {
                int* ecx = *(int**)(r + 0x60);
                if (*(int*)((char*)ecx + 4) != r) {
                    S_func_0060d580* s = (S_func_0060d580*)r;
                    int x = s->f();
                    int y = ((S_func_006a0bde*)0)->f(x);
                    ((S_func_007028c0*)m_p)->f(y);
                }
            }
        }
    }
    return 0;
}
