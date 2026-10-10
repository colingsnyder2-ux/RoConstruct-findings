// from server: 53% by colin
struct Inner {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2(int);
};

struct List {
    void* field_0;
    void* field_4;
    void* field_8;
    void* field_c;
};

extern "C" void __fastcall sub_66F110(void*, int);
extern "C" void __fastcall sub_66F140(void*);
extern "C" int __fastcall sub_66E000(void*, int, void*, void*, int);

struct CXTPDockingPaneContext {
    char pad[0x11c];
    void* field_0x11c;
    void* field_0x120;
    int method(int);
};

int CXTPDockingPaneContext::method(int arg) {
    List list;
    sub_66F110(&list, 10);
    void* p = field_0x120;
    (*(void (__thiscall**)(void*, void**, int))(*(int*)p + 0xc))(p, &list.field_0, 0);
    void* node = list.field_4;
    if (node != 0) {
        void* val = list.field_c;
        do {
            void* item = *(void**)((char*)node + 8);
            node = *(void**)node;
            if (item != 0) {
                item = (char*)item - 0x20;
            } else {
                item = 0;
            }
            if (sub_66E000(field_0x11c, 6, item, val, 0) != 0) {
                sub_66F140(&list);
                return 0;
            }
        } while (node != 0);
    }
    sub_66F140(&list);
    return 1;
}
