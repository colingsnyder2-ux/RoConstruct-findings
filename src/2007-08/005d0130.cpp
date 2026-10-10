// from server: 68% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct BackpackItem;

struct ItemList {
    BackpackItem** begin;
    BackpackItem** end;
};

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct BackpackItem {
    char pad0[0xc0];
    ItemList* items;
    char pad1[0x100 - 0xc4];
    int field100;
    char pad2[0x158 - 0x104];
    int field158;
    RefCounted* field15c;
    int field160;

    int getItemCount();
    void setSelection(int zero);

    int findItem(int id);
};

int BackpackItem::findItem(int id) {
    int i = 0;
    int n = getItemCount();
    if (n > 0) {
        do {
            ItemList* list = items;
            BackpackItem** begin = list->begin;
            if (begin == 0 || (unsigned int)i >= (unsigned int)((list->end - begin) >> 3)) {
                _invalid_parameter_noinfo();
            }
            BackpackItem* item = list->begin[i];
            if (item->field100 == id) {
                field160 = i;
                setSelection(0);
                if (id == field158) {
                    field158 = 0;
                    RefCounted* p = field15c;
                    field15c = 0;
                    if (p != 0) {
                        if (_InterlockedExchangeAdd(&p->refCount1, -1) == 1) {
                            p->unknown1();
                            if (_InterlockedExchangeAdd(&p->refCount2, -1) == 1) {
                                p->unknown2();
                            }
                        }
                    }
                }
                return 0;
            }
            i++;
            n = getItemCount();
        } while (i < n);
    }
    return 0;
}
