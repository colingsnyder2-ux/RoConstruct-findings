// from server: 49% by atomic.potato
struct CScriptEditor
{
    int **vtable;

    int f();
};

extern "C" int *__cdecl func_004613d0();

struct S_func_00460620
{
    int f(int, int);
};

extern S_func_00460620 func_00460620;

int CScriptEditor::f()
{
    int *p = func_004613d0();
    int v = func_00460620.f(1, 1);
    return v ? 1 : 0;
}
