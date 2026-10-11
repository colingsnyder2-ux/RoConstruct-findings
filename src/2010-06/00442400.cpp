// from server: 40% by atomic.potato
extern "C" void* __cdecl sub_00420740();
extern "C" void sub_00440950(void*);

struct XItem
{
    void* f(void*, void*, void*);
};

void* XItem::f(void* a, void* b, void* c)
{
    void* value = sub_00420740();
    sub_00440950(value);
    return a;
}
