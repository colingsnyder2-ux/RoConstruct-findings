// from server: 56% by why2
struct CNullDoc {
    void f(void*);
};

void CNullDoc::f(void* a)
{
    void** p = (void**)a;
    void** obj = (void**)*p;
    void (*fn)(void*) = (void (*)(void*))*obj;
    *p = 0;
    fn(a);
}
