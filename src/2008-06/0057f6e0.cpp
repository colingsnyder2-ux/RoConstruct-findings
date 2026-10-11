// from server: 65% by atomic.potato
extern "C" void construct_string(void *, const char *);
extern "C" void initialize(void *, void *);

struct S
{
    void *vftable;
    S(void *);
};

S::S(void *arg)
{
    char buffer[28];
    construct_string(buffer, "Controller2");
    initialize(this, buffer);
    vftable = (void *)0x830af8;
}
