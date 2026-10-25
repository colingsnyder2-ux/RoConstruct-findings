// from server: 91% by atomic.potato
struct S
{
    void f();
};

struct CalleeClass
{
    void call(const void *);
};

typedef void (CalleeClass::*CalleeFunc)(const void *);

extern "C" CalleeClass *getCallee(void *);
extern "C" CalleeFunc getCalleeFunc();

void S::f()
{
    CalleeClass *callee = getCallee((char *)this - 0xa4);
    (callee->*getCalleeFunc())( (const void *)0x00b92a00 );
}