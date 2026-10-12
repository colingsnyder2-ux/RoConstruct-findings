// from server: 54% by colin
struct S {
    char pad[0x14];
    char pad2[0x130 - 0x14];
    float f130;
    float f134;
    float f138;
    void method(int);
};

struct T {
    char pad[0x10];
    void sub_639490(float*);
};

extern "C" void* __stdcall sub_56b620(const char*);

void S::method(int arg) {
    float a = f130;
    float b = f134;
    float c = f138;
    void* p = (this != 0) ? (void*)((char*)this + 0x14) : 0;
    void* r = sub_56b620((const char*)0x97d29c);
    if (r != 0) {
        float tmp[3];
        tmp[0] = a;
        tmp[1] = b;
        tmp[2] = c;
        ((T*)r)->sub_639490(tmp);
    }
}
