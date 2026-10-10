// from server: 41% by colin
struct Binder {
    void construct(char* dst, const char* src);
};

extern "C" char* __stdcall sub_570270(const char*);
extern "C" void __stdcall sub_77e69c(char*, const char*);
extern "C" void __stdcall sub_77e6ac(char*);
extern "C" void __stdcall sub_42cbc0(char*, const char*);

void Binder::construct(char* dst, const char* src) {
    char* p = sub_570270(src);
    if (p) {
        char buf[28];
        sub_77e69c(buf, src);
        sub_42cbc0(p + 16, buf);
    }
    sub_77e6ac(dst);
}
