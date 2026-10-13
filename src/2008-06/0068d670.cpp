// roc 2008-06 0068d670  size: 32 bytes
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void __cdecl free(void*);
extern void* vtableSym;

struct T {
    void* destroy(unsigned int flags);
};

void* T::destroy(unsigned int flags)
{
    volatile void* v = vtableSym;
    *(void**)this = (void*)v;
    if (flags & 1)
        free(this);
    return this;
}
