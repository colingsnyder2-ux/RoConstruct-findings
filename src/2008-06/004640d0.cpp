// from server: 73% by atomic.potato
extern "C" int * __cdecl func_004613d0();

struct CScriptEditor
{
    int **vtable;
    void f(int);
};

extern "C" int __cdecl func_00460620(int, int);

void CScriptEditor::f(int unused)
{
    int **p = vtable;
    int *q = func_004613d0();
    int r = !func_00460620(2, 1);
    ((void (__thiscall *)(CScriptEditor *, int))p[1])(this, r);
}
