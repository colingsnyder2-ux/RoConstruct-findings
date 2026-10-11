// from server: 53% by atomic.potato
struct CScriptEditor
{
    void* p;
    int (**vtable)(CScriptEditor*);
    void f();
};

extern "C" int* __cdecl func_004613d0();
extern "C" int func_00460620(int*, int, int);

void CScriptEditor::f()
{
    int* p = func_004613d0();
    int x = func_00460620(p, 0, 1) != 0;
    vtable[1](this);
}
