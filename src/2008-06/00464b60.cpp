// from server: 95% by king_originala
struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Base
{
    void *value;
    Base() : value(0) {}
    virtual ~Base();
};

struct Count
{
    Control *control;
    Count() : control(0) {}
    ~Count()
    {
        if (control)
            control->release();
    }
};

struct S : Base
{
    Count count;
    void *first;
    void *last;

    S(void *, void *, void *);
    virtual ~S();
    void connect(void *);
};

S::S(void *a, void *b, void *c)
    : first(a), last(c)
{
    connect(b);
}
