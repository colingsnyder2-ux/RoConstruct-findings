// from server: 58% by atomic.potato
struct XItem
{
    void* f(void*, void*, void*);
};

extern "C" void* __cdecl sub_004207e0(int);
extern "C" void* sub_00440810(void*, void*, void*, void*);

void* XItem::f(void* a, void* b, void* c)
{
    void* p = sub_004207e0(0);
    sub_00440810(p, c, b, a);
    return c;
}
