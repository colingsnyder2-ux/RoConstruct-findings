// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct QModelIndex {
    int r;
    int c;
    void* p;
    void* m;
};

struct QTreeWidgetItem {
    void* vfptr;
    void* d;
};

struct RobloxCategoryItem : QTreeWidgetItem {
};

struct QTreeWidget {
    void* vfptr;
};

struct RobloxReportView : QTreeWidget {
    char pad[0x38];
    void* field38;
    RefCounted* field3c;
    char pad2[0x18];
    void* field54;
};

extern "C" void __cdecl sub_492940(void*, void*);
extern "C" void* __cdecl sub_654D90(unsigned int);
extern "C" void __cdecl sub_661F30(void*, void*);
extern "C" void __cdecl sub_661850(void*);
extern "C" void __cdecl sub_454B50(void*, void*, void*);

void RobloxReportView_addCategoryItem(RobloxReportView* self, RobloxCategoryItem* item, int a3, int a4)
{
    QModelIndex idx;
    idx.r = 0;
    idx.c = 0;
    idx.p = 0;
    idx.m = 0;

    sub_492940(&idx, &item);

    RobloxCategoryItem* newItem = (RobloxCategoryItem*)sub_654D90(0xa0);

    if (newItem) {
        RefCounted* r1 = self->field3c;
        void* v1 = self->field38;
        if (r1) {
            _InterlockedExchangeAdd(&r1->refcount, 1);
        }
        RefCounted* r2 = (RefCounted*)idx.m;
        void* v2 = idx.p;
        if (r2) {
            _InterlockedExchangeAdd(&r2->refcount, 1);
        }
        sub_454B50(newItem, v1, v2);
    } else {
        newItem = 0;
    }

    sub_661F30((char*)self - 0x54, newItem);
    sub_661850(newItem);

    if (idx.m) {
        RefCounted* r = (RefCounted*)idx.m;
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            void** vt = (void**)r->vfptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(r);
            if (_InterlockedExchangeAdd(&r->weakrefcount, -1) == 1) {
                void** vt2 = (void**)r->vfptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(r);
            }
        }
    }

    if (idx.p) {
        RefCounted* r = (RefCounted*)idx.p;
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            void** vt = (void**)r->vfptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(r);
            if (_InterlockedExchangeAdd(&r->weakrefcount, -1) == 1) {
                void** vt2 = (void**)r->vfptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(r);
            }
        }
    }
}
