// from server: 55% by colin
struct MVCXTPPropertyGridItem_XItem {
    void f(float*);
};

extern "C" int __stdcall sprintf(char*, const char*, ...);
extern "C" void* __stdcall sub_802830(void*, const char*, ...);
extern "C" void __stdcall sub_803F10(void*, void*);

void MVCXTPPropertyGridItem_XItem::f(float* p) {
    char buf[32];
    sprintf(buf, "%.3g", (double)*p);
    void* vtable = *(void**)this;
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtable + 0x60);
    fn(this, buf);
}
