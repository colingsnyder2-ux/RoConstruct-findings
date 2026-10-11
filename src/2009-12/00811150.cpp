// from server: 49% by atomic.potato
struct CXTPToolBar_CControlButtonHide {
    char pad[0x100];
    void* field_100;
    void* method_0();
    void method_1(void*);
};

void* CXTPToolBar_CControlButtonHide::method_0() {
    return 0;
}

void CXTPToolBar_CControlButtonHide::method_1(void* a) {
    void* p = method_0();
    void* vtable = *(void**)p;
    void (*fn)(void*, void*, void*, void*, void*, void*, void*) = *(void (**)(void*, void*, void*, void*, void*, void*, void*))((char*)vtable + 0xb0);
    fn(p, a, (void*)2, this, field_100, (void*)1, (void*)0);
}
