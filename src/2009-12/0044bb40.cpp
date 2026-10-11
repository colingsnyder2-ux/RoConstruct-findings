// from server: 57% by atomic.potato
extern "C" void unlock(void *);
extern "C" void *rdbuf(void *);

struct S {
    void *vptr;
    void *get();
};

void *S::get()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 4);
    q = (char *)(char *)q + (unsigned int)(char *)p;
    if (!rdbuf(q))
        return 0;
    p = *(void **)this;
    q = *(void **)((char *)p + 4);
    q = (char *)(char *)q + (unsigned int)(char *)p;
    return rdbuf(q);
}
