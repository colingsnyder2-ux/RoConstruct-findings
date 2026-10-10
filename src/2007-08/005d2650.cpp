// from server: 84% by colin
struct Tool {
    void removeAllTools();
};

struct Helper {
    void* sub_5d2380();
    void sub_541630(void*);
};

extern "C" void* __cdecl sub_57d520(void*);

void Tool::removeAllTools() {
    void* p = sub_57d520(*(void**)((char*)this + 8));
    if (p) {
        Helper* h = (Helper*)this;
        void* q = h->sub_5d2380();
        while (q) {
            h->sub_541630(p);
            q = h->sub_5d2380();
        }
    }
}
