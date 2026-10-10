// from server: 81% by colin
struct RefPropDescriptor {
    void construct(void* getset, int arg);
};

extern "C" void* __cdecl sub_5318A0(void*);

void RefPropDescriptor::construct(void* getset, int arg)
{
    void* p;
    if (arg != 0) {
        p = sub_5318A0((void*)arg);
    } else {
        p = 0;
    }
    void* holder = *(void**)((char*)this + 0x1c);
    void* tmp = p;
    void* vtbl = *(void**)holder;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vtbl + 8);
    fn(holder, &tmp, getset);
}
