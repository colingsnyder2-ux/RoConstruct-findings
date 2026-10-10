// from server: 78% by colin
struct CXTPCommandBar {
    void* f_643980();
    void* f_643950();
    void* f_6303d0();
    void* f_6301c0(void*);
    void* f_GetParent(void*);
    void* method();
};

void* CXTPCommandBar::method()
{
    void* p = f_643980();
    if (p != 0) {
        return *(void**)((char*)p + 0xa0);
    }
    void* q = f_643950();
    void* r = *(void**)((char*)q + 0xe0);
    if (r != 0) {
        return r;
    }
    void* s = *(void**)((char*)q + 0x20);
    if (s != 0) {
        void* t = *(void**)((char*)q + 0x38);
        if (t == 0) {
            t = f_GetParent(s);
        }
        return f_6301c0(t);
    }
    void* u = f_6303d0();
    if (u != 0) {
        void* v = *(void**)u;
        void* (*fn)(void*) = (void* (*)(void*))*(void**)((char*)v + 0x7c);
        return fn(u);
    }
    return 0;
}
