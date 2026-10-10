// from server: 50% by colin
struct CXTPControls {
    char pad[0xf4];
    int fieldF4;
    char pad2[0x4];
    int fieldFC;
    void SetValue(int);
};

struct CXTPRibbonControls {
    char pad[0x20];
    CXTPControls* field20;
    void RemoveItem(void* item);
};

void CXTPControls::SetValue(int nValue) {
    fieldF4 = 0;
    if (*(void**)((char*)this + 0x154) != 0) {
        extern void sub_719930(void*, void*);
        sub_719930(this, (void*)nValue);
    }
}

void CXTPRibbonControls::RemoveItem(void* item) {
    CXTPControls* c = field20;
    if (item == *(void**)((char*)c + 0x270))
        *(void**)((char*)c + 0x270) = 0;
    extern int sub_6a8f10(CXTPControls*, void*);
    if (sub_6a8f10(c, item)) {
        void* p = *(void**)((char*)c + 0x260);
        void** vt = *(void***)p;
        void (*fn)(void*, void*) = (void (*)(void*, void*))vt[0x58 / 4];
        fn(p, item);
    }
    extern void sub_67a4c0(CXTPRibbonControls*, void*);
    sub_67a4c0(this, item);
}
