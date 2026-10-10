// from server: 42% by colin
struct MVCXTPPropertyGridItem {
    void f(int);
};

extern "C" void* __stdcall sub_77dd74(void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_698700();
extern "C" void __stdcall sub_440440();

void MVCXTPPropertyGridItem::f(int) {
    char buf[16];
    float val;
    sub_77dd74(buf);
    sub_698700();
    val = ((float (__thiscall *)(MVCXTPPropertyGridItem*))((*(void***)this)[0x39]))(this);
    sub_440440();
    sub_77ddbc(buf);
}
