// from server: 68% by atomic.potato
struct SceneMgrQueuedRenderableVisitor
{
    char pad0[4];
    void *field4;
    void *field8;
    char padC[1];
    unsigned char fieldD;
    char padE[2];
    void *field10;
    void f(void *);
};

extern "C" bool __fastcall Function_0068BFE0(void *, void *);

void SceneMgrQueuedRenderableVisitor::f(void *arg)
{
    if (Function_0068BFE0(field4, arg))
    {
        void *p = field8;
        void **vt = *(void ***)p;
        void (*fn)(void *, void *, unsigned char, void *) = (void (*)(void *, void *, unsigned char, void *))vt[5];
        fn(p, arg, fieldD, field10);
    }
}
