// from server: 34% by atomic.potato
extern "C" {
    void __stdcall sub_802460(void*);
    void __stdcall sub_802458(const char*);
    void __stdcall sub_80245c(void*);
    void __stdcall sub_802468(void*);
}

struct S {
    void f(void* arg);
};

void S::f(void* arg)
{
    char buf1[16];
    char buf2[16];
    char buf3[16];
    int flag = 0;
    char result;

    sub_802460(buf1);
    sub_802458((const char*)0x827300);
    sub_802458((const char*)0x827300);
    result = ((char (__cdecl*)(void*, void*))0x514190)(buf2, buf1);
    sub_802468(buf3);
    if (result) {
        sub_80245c(buf1);
    } else {
        sub_802458((const char*)0x819e10);
    }
    sub_802468(buf1);
}
