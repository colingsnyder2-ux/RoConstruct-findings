// from server: 71% by atomic.potato
struct CIDEBrowserView {
    char pad[0x2b0];
    char field_2b0[1];
    void update();
};

extern "C" {
    int __stdcall sub_89fcd4(void*, const char*);
    void* __stdcall sub_89fcd0(void*, int, int, int, int, int);
    void __stdcall sub_718d2c(void*, void*);
}

void CIDEBrowserView::update()
{
    char* p = field_2b0;
    if (sub_89fcd4(p, ">Authoring")) {
        void* r = sub_89fcd0(p, 0, 0, 0, 0, 0);
        sub_718d2c(this, r);
    }
}
