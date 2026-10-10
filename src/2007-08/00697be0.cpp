// from server: 44% by colin
struct CXTPPropertyGridItem {
    void f();
};

extern "C" void __stdcall sub_77DDAC(void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void __stdcall sub_69AAF0(int, void*);

void CXTPPropertyGridItem::f() {
    char buf[12];
    sub_77DDAC(buf);
    int* p = (int*)((char*)this + 0xb4);
    if (*p != 0) {
        int local = 0;
        sub_69AAF0(0xd, &local);
    }
    sub_77DDBC(buf);
}
