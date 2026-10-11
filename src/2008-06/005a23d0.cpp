// from server: 68% by tester
struct Invoker {
    int (*fn)(void*, int);
    void* obj;
    int a;
    int b;
};

int call_invoker(Invoker* inv)
{
    return inv->fn(inv->obj, inv->a + inv->b);
}
