// from server: 60% by atomic.potato
extern "C" void* func_0046f180(int);

extern "C" void func_0046e7e0(void*, void*, void*, void*);

struct CScriptEditor
{
    void* f(void*, void*, void*);
};

void* CScriptEditor::f(void* a, void* b, void* c)
{
    void* p = func_0046f180(0);
    func_0046e7e0(p, a, b, c);
    return a;
}
