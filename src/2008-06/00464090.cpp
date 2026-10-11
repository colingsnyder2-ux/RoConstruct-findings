// from server: 7% by colin
struct S_func_004613d0 {
    char pad0[88];
    int m_x;
    int* f();
};

struct S_func_004605d0 {
    char pad0[84];
    int m_a;
    int m_b;
    int f(int, int, int);
};

struct S_func_00460620 {
    char pad0[84];
    int m_a;
    int m_b;
    int f(int, int, int);
};

int* S_func_004613d0::f()
{
    return &m_x;
}

int S_func_004605d0::f(int a, int b, int c)
{
    if (c != 0)
        return 0;
    return 0;
}

int S_func_00460620::f(int a, int b, int c)
{
    if (c != 0)
        return 0;
    return 0;
}

struct CScriptEditor {
    int f();
};

int CScriptEditor::f()
{
    S_func_004613d0* p = (S_func_004613d0*)this;
    int* q = p->f();
    S_func_00460620* r = (S_func_00460620*)q;
    int v = r->f(2, 1, 1);
    if (v != 0)
        return ((S_func_004605d0*)q)->f(2, 0, 1);
    return ((S_func_004605d0*)q)->f(2, 0x10, 1);
}
