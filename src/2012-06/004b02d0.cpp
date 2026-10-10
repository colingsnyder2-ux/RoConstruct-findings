// from server: 40% by atomic.potato
struct VideoControl
{
    struct Interface
    {
        int (*query)(Interface *);
        int (*execute)(Interface *);
    };

    char padding[268];
    Interface *interface_ptr;
    int f();
};

int VideoControl::f()
{
    Interface *p = interface_ptr;
    if (p->query(p))
        return p->execute(p);
    return 0;
}
