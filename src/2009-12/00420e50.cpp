// from server: 68% by atomic.potato
struct CRobloxTreeCtrlNode
{
    void *f(void *a, void *b, void *c);
};

extern "C" void *__cdecl sub_41c610(int *);

extern "C" void __cdecl sub_420d10(void *, void *, void *, void *);

void *CRobloxTreeCtrlNode::f(void *a, void *b, void *c)
{
    int value = 0;
    void *object = sub_41c610(&value);
    sub_420d10(object, c, b, a);
    return c;
}
