// from server: 83% by colin
struct RefPropDescriptor {
    void func(void* a, void* b);
};

extern "C" void* __cdecl sub_540A30(void* p);

void RefPropDescriptor::func(void* a, void* b)
{
    void* v;
    if (a != 0) {
        v = sub_540A30(a);
    } else {
        v = 0;
    }
    void* p = *(void**)((char*)this + 0x1c);
    void* tmp = v;
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, void**) = (void (*)(void*, void*, void**))vtbl[2];
    fn(p, b, &tmp);
}
