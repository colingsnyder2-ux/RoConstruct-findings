// from server: 60% by atomic.potato
struct LegacyHopperService
{
    void *f(void *, void *, void *);
};

extern "C" void *__cdecl func_004c1ca0(int);
extern "C" void *func_006904a0(void *, void *, void *, void *);

void *LegacyHopperService::f(void *a, void *b, void *c)
{
    void *p = func_004c1ca0(0);
    func_006904a0(p, a, b, c);
    return a;
}
