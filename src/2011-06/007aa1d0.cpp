// from server: 91% by atomic.potato
extern "C" void *__cdecl G1_func_007aa0f0(void);
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

struct RightAngleRampPoly
{
};

void __cdecl f(void *arg)
{
    void *p = G1_func_007aa0f0();
    EnterCriticalSection(p);
    *(void **)arg = *(void **)((char *)p + 24);
    *(void **)((char *)p + 24) = arg;
    LeaveCriticalSection(p);
}
