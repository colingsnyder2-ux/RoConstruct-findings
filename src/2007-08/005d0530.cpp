// from server: 65% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GuiDrawImage {
    void setImage(const void*);
};

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void onZeroRefCount();
    virtual void onZeroWeakCount();
};

struct LocalBackpackItem {
    char pad[0x128];
    GuiDrawImage image1;
    GuiDrawImage image2;
    char pad2[0x150 - 0x12c - sizeof(GuiDrawImage)];
    RefCounted* ptr150;
    RefCounted* ptr154;
    void clear();
};

void LocalBackpackItem::clear()
{
    if (ptr150) {
        if (ptr150) {
            image1.setImage(&ptr150->refCount);
        }
        if (ptr150) {
            image2.setImage(&ptr150->weakCount);
        }
        ptr150 = 0;
        RefCounted* p = ptr154;
        ptr154 = 0;
        if (p) {
            if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
                p->onZeroRefCount();
                if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                    p->onZeroWeakCount();
                }
            }
        }
    }
}
