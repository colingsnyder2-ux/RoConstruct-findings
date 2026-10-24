// from server: 93% by atomic.potato
struct S_func_00657d00
{
    S_func_00657d00 *f(S_func_00657d00 *a1);
};

struct CalleeClass
{
    void call(S_func_00657d00 *a1);
};

typedef void (CalleeClass::*CalleeFunc)(S_func_00657d00 *);

extern "C" CalleeClass *getCallee(S_func_00657d00 *);
extern "C" CalleeFunc getCalleeFunc();

S_func_00657d00 *S_func_00657d00::f(S_func_00657d00 *a1)
{
    CalleeClass *callee = getCallee((S_func_00657d00 *)((char *)this - 192));
    (callee->*getCalleeFunc())(a1);
    return a1;
}