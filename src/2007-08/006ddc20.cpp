// from server: 87% by TrollStein
struct CXTPDockingPaneWindowSelect {
    char pad[0x110];
    void* field_110;
    void method(int, int, int);
int sub_6dcaf0(int, int);
};


extern "C" void __stdcall sub_63023e(void*);

void CXTPDockingPaneWindowSelect::method(int a, int b, int c) {
    int r = sub_6dcaf0(b, c);
    if (r != 0) {
        field_110 = (void*)r;
        void** vtbl = *(void***)this;
        void (__stdcall *fn)(void*, int) = (void (__stdcall *)(void*, int))vtbl[0x8c / 4];
        fn(this, 1);
    }
    sub_63023e(this);
}
