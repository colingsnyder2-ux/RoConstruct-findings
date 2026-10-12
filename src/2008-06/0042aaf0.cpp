// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Object;

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    long strong;
    long weak;
    Object* object;
};

struct Weak {
    Object* object;
    Control* control;
};

struct Object {
    virtual ~Object();
    Weak weak;
};

struct Count {
    Control* control;
    Count(Object*);
    ~Count();
};

struct S {
    Object* object;
    Count count;
    S(Object*);
};

S::S(Object* p) : object(p), count(p)
{
    if (p) {
        Weak* w = &p->weak;
        if (w) {
            w->object = p;
            Control* c = count.control;
            if (c)
                _InterlockedExchangeAdd(&c->weak, 1);

            Control* old = w->control;
            if (old && _InterlockedExchangeAdd(&old->weak, -1) == 1)
                old->destroy();

            w->control = c;
        }
    }
}
