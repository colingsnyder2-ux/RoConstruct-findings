// from server: 20% by atomic.potato
struct ContentProvider {
    void method(int, int, int, int, int, int, int, int, int);
};

extern "C" void __stdcall sub_55f3b0(void*, void*, void*, int, int);
extern "C" void __stdcall sub_5618e0(void*);
extern "C" void __stdcall sub_562530(void*, int);

extern unsigned char byte_9740ec;
extern unsigned char byte_9740ed;

void ContentProvider::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    char buf1[0x20];
    char buf2[0x28];
    char buf3[0x20];
    void* p;
    int v;

    p = 0;
    v = 0;
    if (a9) {
        p = (void*)a9;
        (*(void (__stdcall**)(void*, void*, int))a9)(&buf3[8], &v, 0);
    }
    sub_55f3b0(buf2, buf3, (void*)0x561530, byte_9740ed, byte_9740ec);
    sub_5618e0(buf1);
    sub_562530(this, a8);
    if (p) {
        void* q = *(void**)p;
        if (q) {
            (*(void (__stdcall**)(void*, void*, int))q)(&buf1[0x14], &buf1[0x14], 1);
        }
    }
}
