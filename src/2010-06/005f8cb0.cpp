// from server: 40% by atomic.potato
extern "C" void* __cdecl G1_func_004bafd0();
extern "C" void G1_func_005f7880(void*, void*, void*, void*);

struct LegacyHopperService
{
    void* f(void*, void*, void*);
};

void* LegacyHopperService::f(void* a, void* b, void* c)
{
    void* p = G1_func_004bafd0();
    G1_func_005f7880(p, a, b, c);
    return a;
}
