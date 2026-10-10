// from server: 86% by colin
struct CNameItem {
    int f(int a, int b);
};

struct EnumDescriptor {
    char pad0[4];
    void* itemsBegin;
    int itemsCount;
    void clearItems(int, int);
};

struct Item {
    char pad0[0x54];
    void* vtable54;
    char pad1[0x64 - 0x58];
    int ownerPtr;
};

extern "C" void __stdcall sub_62ff20();
extern "C" void __stdcall sub_6d0fd0();
extern "C" void __stdcall sub_6ffab0();

int CNameItem::f(int a, int b) {
    int* self = (int*)this;
    int* arg0 = (int*)a;
    EnumDescriptor* ed = (EnumDescriptor*)arg0[0x1a4 / 4];
    int i = 0;
    int count = ed->itemsCount;
    while (i < count) {
        if (i < 0 || i >= count) {
            sub_62ff20();
        }
        Item* item = (Item*)((int*)ed->itemsBegin)[i];
        void** vt = (void**)item->vtable54;
        ((void (__thiscall*)(Item*))vt[0x68 / 4])(item);
        void** vt2 = (void**)item->vtable54;
        ((void (__thiscall*)(Item*, int))vt2[1])(item, 0);
        count = ed->itemsCount;
        i++;
    }
    ed->clearItems(-1, 0);
    int* p = (int*)arg0[0x1a8 / 4];
    if (p != 0 && p[0x20 / 4] != 0) {
        void** vt = (void**)*p;
        ((void (__thiscall*)(int*))vt[0x68 / 4])(p);
    }
    int* esi = (int*)arg0[0x1a0 / 4];
    if (b != 0 && esi != 0 && esi[0x20 / 4] != 0 && esi[0x64 / 4] == (int)this) {
        void** vt = (void**)*self;
        ((void (__thiscall*)(int*, int*))vt[0x120 / 4])(self, esi + 0x54 / 4);
    }
    sub_6d0fd0();
    void** vt = (void**)esi[0x54 / 4];
    ((void (__thiscall*)(int*, int))vt[1])(esi + 0x54 / 4, 0);
    return 0;
}
