// from server: 32% by atomic.potato
struct S {
    char pad0[0x24];
    char field24;
    int f(char* src);
};

extern "C" {
    void* __stdcall sub_80245c(char*);
    void __stdcall sub_802468(char*);
}

void sub_57e730();

int S::f(char* src) {
    char buf[0x1c];
    sub_80245c(src);
    sub_57e730();
    field24 = buf[0x1c];
    *(int*)this = 0x830818;
    sub_802468(buf);
    return (int)this;
}
