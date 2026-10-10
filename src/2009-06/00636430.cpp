// from server: 76% by why2
struct S {
    void f(void* a, void* b);
};

void S::f(void* a, void* b)
{
    void (*fn)(void*) = *(void (**)(void*))a;
    fn(b);
}
