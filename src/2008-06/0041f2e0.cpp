// from server: 65% by atomic.potato
extern "C" void construct_string(void *, const char *);
extern "C" void initialize_object(void *, void *);

struct InsertDecal
{
    void *vtable;
    InsertDecal *f(void *);
};

InsertDecal *InsertDecal::f(void *arg)
{
    char buffer[28];
    construct_string(buffer, "d$TP");
    initialize_object(this, buffer);
    vtable = (void *)0x0080f204;
    return this;
}
