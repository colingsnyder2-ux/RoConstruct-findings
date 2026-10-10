// from server: 92% by atomic.potato
struct VObjectValueFactoryProduct
{
    void f();
};

void VObjectValueFactoryProduct::f()
{
    *(void**)this = (void*)0xA7736C;
    *(void**)((char*)this + 4) = (void*)0xA77360;
    *(void**)((char*)this + 0x18) = (void*)0xA77354;
    *(void**)((char*)this + 0x1C) = (void*)0xA77348;
    extern void (*next)();
    next();
}
