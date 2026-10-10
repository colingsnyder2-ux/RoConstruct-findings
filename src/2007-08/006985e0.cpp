// from server: 93% by tester
struct CXTPPropertyGridItem {
    void f(int);
};

extern "C" int __stdcall sub_77DD98(int);

struct Helper {
    void g(int);
};

void CXTPPropertyGridItem::f(int a) {
    if (*(int*)((char*)this + 0xb4) != 0) {
        int (__thiscall *fn)(void*) = *(int (__thiscall **)(void*))((char*)(*(void**)this) + 0x84);
        void* p = (void*)fn(this);
        if (p != 0) {
            if (*(int*)((char*)p + 0x20) != 0) {
                if (*(void**)((char*)p + 0xa0) == this) {
                    int r = sub_77DD98(a);
                    ((Helper*)p)->g(r);
                }
            }
        }
    }
}
