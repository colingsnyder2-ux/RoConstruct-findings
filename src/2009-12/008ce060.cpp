// from server: 90% by atomic.potato
extern "C" void func_0098dec0(void*);

struct CXTPTabManagerItem
{
    void* p;
    void f();
};

void CXTPTabManagerItem::f()
{
    void* p = *(void**)((char*)this + 0x0c);
    *(unsigned int*)this = 0x00a0a69c;
    if (*(void**)((char*)p + 0x10) == this)
        *(void**)((char*)p + 0x10) = 0;
    func_0098dec0((char*)this + 0x28);
}
