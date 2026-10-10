// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SharedPtr {
    void* px;
    long* pn;
};

struct ChangePropertyItem {
    void* vptr;
    SharedPtr instance;
    char rest[8];
    ChangePropertyItem(const SharedPtr& instance, void* desc);
};

ChangePropertyItem::ChangePropertyItem(const SharedPtr& instance_, void* desc)
{
    this->vptr = 0;
    this->instance.px = instance_.px;
    this->instance.pn = instance_.pn;
    if (this->instance.pn) {
        _InterlockedExchangeAdd(this->instance.pn + 1, 1);
    }
    void* d = desc;
    void* tmp = d;
    (void)tmp;
    extern void sub_728220(void*, void*);
    sub_728220(&this->rest[0], desc);
}
