// from server: 12% by colin
struct HeadBuilder
{
    void func_00500350(float*, float*);
};

extern "C" void __stdcall sub_548570();
extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void __stdcall sub_4DD2E0();
extern "C" void __stdcall sub_4DCBB0();
extern "C" void __stdcall sub_45AD90();
extern "C" void __stdcall sub_598FA0();
extern "C" void __stdcall sub_4FDAF0();
extern "C" void __stdcall sub_500CA0();
extern "C" int __stdcall InterlockedIncrement(int*);
extern "C" int __stdcall InterlockedDecrement(int*);

extern float g_83A3E4;

void HeadBuilder::func_00500350(float* a, float* b)
{
    sub_548570();
    *(int*)this = 0x8271B8;

    float v;
    if (a[0] < a[2])
        v = a[0];
    else
        v = a[2];
    v = v * g_83A3E4;

    void* p = sub_6A0920(0x28);
    void* q = 0;
    if (p)
    {
        sub_4DD2E0();
        q = p;
    }

    void* r = 0;
    if (q)
    {
        InterlockedIncrement((int*)((char*)q + 4));
        r = q;
    }

    sub_4DCBB0();

    if (r)
    {
        if (InterlockedDecrement((int*)((char*)r + 4)) == 0)
        {
            sub_45AD90();
            (*(void(**)(void*, int))r)(r, 1);
        }
    }

    sub_598FA0();
    sub_4FDAF0();
    sub_500CA0();

    void* s = 0;
    if (s)
    {
        if (InterlockedDecrement((int*)((char*)s + 4)) == 0)
        {
            sub_45AD90();
            (*(void(**)(void*, int))s)(s, 1);
        }
    }
}
