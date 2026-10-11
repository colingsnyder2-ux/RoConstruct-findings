// from server: 95% by atomic.potato
extern "C" void* g_8d2f70;

struct FactoryProduct
{
    void method();
};

void FactoryProduct::method()
{
    *(void**)((char*)this + 0) = (void*)0x00becfb4;
    *(void**)((char*)this + 4) = (void*)0x00becfa8;
    *(void**)((char*)this + 0x18) = (void*)0x00becf9c;
    *(void**)((char*)this + 0x1c) = (void*)0x00becf90;
    *(void**)((char*)this + 0x80) = (void*)0x00becf80;
    *(void**)((char*)this + 0x84) = (void*)0x00becf54;
    ((void (*)(void))g_8d2f70)();
}
