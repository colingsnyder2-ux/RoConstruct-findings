// from server: 80% by colin
struct HVCXTPPropertyGridItemEnum_XItem {
    void f(void* arg);
};

void HVCXTPPropertyGridItemEnum_XItem::f(void* arg)
{
    void* p = *(void**)arg;
    void* vtable = *(void**)this;
    void* fn = *(void**)((char*)vtable + 0xe8);
    ((void (__stdcall *)(void*))fn)(p);
}
