// from server: 96% by king_originala
struct Slot
{
    void *pointer;
    Slot() : pointer(0) {}
    ~Slot();
};

struct Listener
{
    virtual ~Listener();

    Slot first;
    Slot second;
    void *argument;
    void *context;
    void *callback;

    Listener(void *, void *, void *, void *);
    void attach(void *);
};

Listener::Listener(void *a, void *b, void *c, void *d)
    : argument(a), context(c), callback(d)
{
    attach(b);
}
