// from server: 71% by atomic.potato
extern "C" void* __cdecl func_00420740(int);
extern "C" void* func_00472420;

struct CScriptEditor
{
    void* f(void*, void*, void*);
};

void* CScriptEditor::f(void* a, void* b, void* c)
{
    void* p = func_00420740(0);
    p = ((void* (__thiscall *)(void*, void*, void*, void*))func_00472420)(p, a, b, c);
    return a;
}
