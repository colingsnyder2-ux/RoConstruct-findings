// from server: 59% by why2
struct HVCXTPPropertyGridItemEnum_XItem
{
    void f(void*);
};

void HVCXTPPropertyGridItemEnum_XItem::f(void* arg)
{
    void* p = *(void**)arg;
    void** vt = *(void***)this;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vt[0x3a];
    fn(this, p);
}
