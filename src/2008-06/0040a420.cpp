// from server: 72% by tester
extern "C" void* __cdecl func_006a0920(unsigned int size);

struct Holder {
    void* vtable;
    char value;
};

struct Any {
    void* content;
    Any* assign(char* src);
};

Any* Any::assign(char* src)
{
    Holder* h = (Holder*)func_006a0920(8);
    if (h != 0) {
        h->vtable = (void*)0x80ba84;
        h->value = *src;
    } else {
        h = 0;
    }

    void* old = content;
    if (&content != (void*)this) {
        old = content;
        content = h;
    } else {
        old = (void*)h;
    }

    if (old != 0) {
        void** vt = *(void***)old;
        void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
        dtor(old, 1);
    }

    return this;
}
