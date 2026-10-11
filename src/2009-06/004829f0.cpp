// from server: 69% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    char pad[0x6c];
    int* begin;
    int* end;
    void f();
};

void S::f() {
    void (__stdcall *handler)() = _invalid_parameter_noinfo;
    int i = 0;
    int result = 0;
    do {
        if (result == 0) {
            int count = (int)((char*)end - (char*)begin) >> 3;
            if ((unsigned)i >= (unsigned)count) {
                handler();
            }
            result = begin[i * 2 + 1];
        }
        i++;
    } while ((unsigned)i < 0x2000);
}
