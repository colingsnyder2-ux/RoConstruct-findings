// from server: 93% by atomic.potato
struct S_func_00657d00
{
    S_func_00657d00 *f(S_func_00657d00 *a1);
};

extern "C" S_func_00657d00 *__stdcall callee_006cd670(S_func_00657d00 *, S_func_00657d00 *);

S_func_00657d00 *S_func_00657d00::f(S_func_00657d00 *a1)
{
    callee_006cd670((S_func_00657d00 *)((char *)this - 192), a1);
    return a1;
}
