// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct GuiItem {
    void* vptr;
    char pad[0xa0];
    GuiItem* field_0xa4;
    RefCounted* field_0xa8;
};

struct CMainFrame {
    GuiItem* field_0x0;
    GuiItem* field_0x4;
    void func(GuiItem* a, GuiItem* b);
};

void CMainFrame::func(GuiItem* a, GuiItem* b)
{
    this->field_0x0 = a;
    this->field_0x4 = 0;
    (*(void (__thiscall **)(void *, GuiItem *, GuiItem *))(*(int *)&this->field_0x4))(0, a, b);
    if (a != 0) {
        GuiItem* p = (GuiItem*)((char*)a + 0xa4);
        if (p != 0) {
            p->field_0xa4 = a;
            RefCounted* old = (RefCounted*)this->field_0x4;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            RefCounted* cur = p->field_0xa8;
            if (cur != 0) {
                if (_InterlockedExchangeAdd(&cur->refcount, -1) == 1) {
                    (*(void (__thiscall **)(RefCounted*))(*(int*)cur->vptr + 8))(cur);
                }
            }
            p->field_0xa8 = old;
        }
    }
}
