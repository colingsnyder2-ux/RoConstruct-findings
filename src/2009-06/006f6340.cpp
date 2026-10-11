// from server: 98% by atomic.potato
int func_009639a0(void *p);

struct RbxMeshLoader {
    virtual void *getChild(unsigned int index);
    char pad[12];
    virtual void *getChild2(unsigned int index);
};

int func_006f6250(void *a, void *b, int c, int d, int e, int f);

int func_006f6340(RbxMeshLoader *self, int a, int b)
{
    void *p0 = self->getChild2(0);
    void *p1 = self->getChild2(1);

    int n0;
    if (!p0)
        n0 = 0;
    else if (!*(void **)((char *)p0 + 4))
        n0 = 1;
    else
        n0 = func_009639a0(*(void **)((char *)p0 + 4)) + 1;

    int n1;
    if (!p1)
        n1 = 0;
    else if (!*(void **)((char *)p1 + 4))
        n1 = 1;
    else
        n1 = func_009639a0(*(void **)((char *)p1 + 4)) + 1;

    return func_006f6250(p0, p1, n0, n1, a, b);
}
