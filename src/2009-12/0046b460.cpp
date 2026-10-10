// from server: 70% by atomic.potato
extern "C" int __stdcall ImportedCall(void *, void *);

struct CScintillaView
{
    char padding[132];
    int value;
    void *f(void *);
};

void *CScintillaView::f(void *arg)
{
    ImportedCall(arg, (void *)value);
    return arg;
}
