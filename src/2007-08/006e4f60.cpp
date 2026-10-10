// from server: 58% by colin
struct CXTPDockingPaneSplitterContainer;

struct CUnknown {
    void* vtable;
};

struct CSub {
    char pad[0x20];
    void* field20;
};

struct CItem {
    void* vtable;
    virtual int getSomething();
    virtual void doSomething(int, int, int, int, int);
};

struct CXTPDockingPaneSplitterContainer {
    char pad0[0x24];
    int field24;
    int field28;
    int field2c;
    char pad30[0x4];
    int field34;
    char pad38[0x4];
    int field3c;
    int field40;
    int field44;
    int field48;
    char pad4c[0x44];
    int field90;

    void func(int* a, int b);
};

extern "C" void* __stdcall sub_6e0540(void*);
extern "C" void* __stdcall sub_65e560(void*);
extern "C" void* __stdcall sub_71fa60(void*, void**);
extern "C" void __stdcall sub_6e4920(void*, void*);

void CXTPDockingPaneSplitterContainer::func(int* a, int b) {
    int* src = a;
    if (src == 0) {
        return;
    }
    this->field90 = *(int*)((char*)src + 0x90);
    void* p = sub_6e0540((char*)this + 0x20);
    this->field34 = *(int*)((char*)p + 0xcc);
    void* it = sub_65e560((char*)src + 0x20);
    if (it != 0) {
        int* pit = (int*)it;
        do {
            void* cur = sub_71fa60((char*)src + 0x20, (void**)&pit);
            CItem* item = (CItem*)cur;
            int r = item->getSomething();
            if (r == 0 || b == 0) {
                int v = this->field2c;
                item->doSomething(v, b, 0, 0, 1);
                sub_6e4920(this, (void*)r);
            }
        } while (pit != 0);
    }
    this->field24 = *(int*)((char*)src + 0x24);
    this->field28 = *(int*)((char*)src + 0x28);
    this->field3c = *(int*)((char*)src + 0x3c);
    this->field40 = *(int*)((char*)src + 0x40);
    this->field44 = *(int*)((char*)src + 0x44);
    this->field48 = *(int*)((char*)src + 0x48);
}
