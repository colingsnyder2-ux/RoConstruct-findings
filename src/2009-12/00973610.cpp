// from server: 78% by atomic.potato
typedef void (__cdecl *Function)(void);

struct S
{
    void func_006859d0(int, int, const char *);
};

extern "C" void __cdecl func_007f4929(const char *);

void func_00973610()
{
    S *p = (S *)0xb90f90;
    p->func_006859d0(1, 0, "8csm");
    func_007f4929("GetCanUndo");
}
