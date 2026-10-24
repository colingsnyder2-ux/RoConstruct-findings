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
extern "C" CalleeFu