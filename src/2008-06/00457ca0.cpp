// from server: 21% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* ctrl;
    void* ptr;
};

struct QTreeWidget {
    void setItemDelegate(void*);
};

struct RobloxCategoryItemDelegate {
    RobloxCategoryItemDelegate(void*);
};

struct RobloxCategoryItem {
    RobloxCategoryItem(Shared*);
};

struct RobloxReportView : QTreeWidget {
    char pad0[0x54];
    char sub54[0x24];
    char sub78[0x24];
    char sub9c[0xc];
    Shared* sharedA8;
    Shared* sharedAc;
    RobloxReportView(Shared*, Shared*);
    ~RobloxReportView();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl sub_6d7fd0();
extern "C" void __cdecl sub_554810();
extern "C" void __cdecl sub_457050();
extern "C" void __cdecl sub_4570d0();
extern "C" void __cdecl sub_6d8070();
extern "C" void __cdecl sub_5773c0();
extern "C" void __cdecl sub_4218a0();
extern "C" void* __cdecl sub_4564a0();
extern "C" void* __cdecl sub_456620();

RobloxReportView::RobloxReportView(Shared* a, Shared* b)
{
    sub_6d7fd0();
    if (a && a->ctrl)
        _InterlockedExchangeAdd(&a->ctrl->strong, 1);
    sub_554810();
    sub_457050();
    sub_4570d0();
    *(void**)this = (void*)0x818a74;
    *(void**)((char*)this + 0x54) = (void*)0x818a5c;
    *(void**)((char*)this + 0x78) = (void*)0x818a48;
    sharedA8 = a;
    sharedAc = b;
    if (b && b->ctrl)
        _InterlockedExchangeAdd(&b->ctrl->strong, 1);

    void* d1 = operator_new(0x88);
    if (d1) {
        if (a && a->ctrl)
            _InterlockedExchangeAdd(&a->ctrl->strong, 1);
        sub_4564a0();
    } else {
        d1 = 0;
    }
    sub_6d8070();

    void* d2 = operator_new(0x88);
    if (d2) {
        if (a && a->ctrl)
            _InterlockedExchangeAdd(&a->ctrl->strong, 1);
        sub_456620();
    } else {
        d2 = 0;
    }
    sub_6d8070();

    if (a && a->ctrl)
        _InterlockedExchangeAdd(&a->ctrl->strong, 1);
    sub_5773c0();

    if (a && a->ctrl) {
        if (_InterlockedExchangeAdd(&a->ctrl->strong, -1) == 1) {
            a->ctrl->dispose();
            if (_InterlockedExchangeAdd(&a->ctrl->weak, -1) == 1)
                a->ctrl->destroy();
        }
    }
    if (b && b->ctrl) {
        if (_InterlockedExchangeAdd(&b->ctrl->strong, -1) == 1) {
            b->ctrl->dispose();
            if (_InterlockedExchangeAdd(&b->ctrl->weak, -1) == 1)
                b->ctrl->destroy();
        }
    }
}
