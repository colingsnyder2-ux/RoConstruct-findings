// from server: 40% by atomic.potato
struct CSettingsExplorer
{
    void *f(void *, void *, void *);
};

extern "C" void *__cdecl func_0041c610();
struct T;
extern "C" void __cdecl func_0041c320(T *, void *, void *, void *);

void *CSettingsExplorer::f(void *a, void *b, void *c)
{
    void *p = func_0041c610();
    func_0041c320((T *)p, a, b, c);
    return a;
}
