// from server: 20% by atomic.potato
struct VClient {
    char pad0[0x38];
    void (__stdcall *fn38)(int);
    char pad3c[4];
    void *p40;
    void *p44;
    void *p48;
    void *p4c;
    void *p50;
    void *p54;
    void *p58;
    void *p5c;
    void f(int, int);
};

extern "C" void *__stdcall sub_719c7a(void *, void *, void *, int, int);
extern "C" void __stdcall sub_719a4a(void *, void *);
extern "C" void *__stdcall sub_5e7df0(void *);
extern "C" void *__stdcall sub_5e8440(void *);
extern "C" void __stdcall sub_89e970(void *);
extern "C" void __stdcall sub_89e4b8(void *);

void VClient::f(int a, int b)
{
    void *v40 = p40;
    void *v44 = p44;
    void *v48 = p48;
    void *v4c = p4c;
    void *v50 = p50;
    void *v54 = p54;
    void *v58 = p58;
    void *v5c = p5c;

    void *t1 = v44 ? ((void *(__stdcall **)(void *))v44)[2](v44) : 0;
    void *t2 = v4c ? ((void *(__stdcall **)(void *))v4c)[2](v4c) : 0;
    void *t3 = v54 ? ((void *(__stdcall **)(void *))v54)[2](v54) : 0;
    void *t4 = v5c ? ((void *(__stdcall **)(void *))v5c)[2](v5c) : 0;

    void *arr[4];
    arr[0] = v40;
    arr[1] = v48;
    arr[2] = v50;
    arr[3] = v58;

    void *r = sub_719c7a(arr[0], (void*)0x9dbfc4, (void*)0x9f16a8, 0, 0);
    if (!r) {
        sub_89e970((void*)0x8ad350);
        sub_719a4a((void*)0x984bb0, (void*)0x8ad350);
    }

    void *s1 = sub_5e7df0(arr[3]);
    void *s2 = sub_5e7df0(arr[2]);
    void *s3 = sub_5e7df0(arr[1]);
    void *s4 = sub_5e8440(arr[0]);

    sub_89e4b8(s4);

    fn38((int)r);

    if (t4) ((void (__stdcall **)(void *, int))t4)[0](t4, 1);
    if (t3) ((void (__stdcall **)(void *, int))t3)[0](t3, 1);
    if (t2) ((void (__stdcall **)(void *, int))t2)[0](t2, 1);
    if (t1) ((void (__stdcall **)(void *, int))t1)[0](t1, 1);
}
