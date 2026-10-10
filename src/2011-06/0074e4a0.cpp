// from server: 85% by atomic.potato
typedef struct _CRITICAL_SECTION CRITICAL_SECTION;

extern "C" void * __cdecl G1_func_0045f6f0();
extern "C" void __stdcall EnterCriticalSection(CRITICAL_SECTION *);
extern "C" void __stdcall LeaveCriticalSection(CRITICAL_SECTION *);

struct BallBallContact
{
    int value;

    void set(int *out);
};

void BallBallContact::set(int *out)
{
    BallBallContact *p;
    int old;

    p = (BallBallContact *)G1_func_0045f6f0();
    EnterCriticalSection((CRITICAL_SECTION *)p);
    old = p->value;
    *out = old;
    p->value = (int)out;
    LeaveCriticalSection((CRITICAL_SECTION *)p);
}
