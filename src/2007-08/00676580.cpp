// from server: 65% by colin
struct CA
{
    char pad0[0x20];
    void* field20;
    char pad24[0x14];
    void* field38;
    char pad3c[0x10];
    void* field4c;
    char pad50[0x4];
    void* field54;
    void* field58;
    int method(int a, int b, int c);
};

extern "C" void __stdcall sub_6329E0(void*, int);
extern "C" int __stdcall sub_73838E(CA*, int, int, int*);
extern "C" void* __stdcall sub_6301C0(void*);
extern "C" void __stdcall sub_630004(CA*);
extern "C" unsigned short __stdcall sub_7385B0(CA*);
extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_63023E(CA*);
extern "C" int __stdcall sub_644710(void*);
extern "C" void __stdcall sub_6A0E30(void*, void*, int);
extern "C" void* __stdcall GetParent(void*);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

int CA::method(int a, int b, int c)
{
    void* ebp = field54;
    int local = 0;
    sub_6329E0(ebp, 0);
    int edi = sub_73838E(this, a, b, &local);
    if (local != 0)
        goto fail;
    if (field58 == 0)
        goto fail;
    {
        int r = SendMessageA(field20, 0x186, (unsigned int)edi, 0);
        if (r == -1)
            goto fail;
    }
    {
        int r2 = SendMessageA(field20, 0x199, (unsigned int)edi, 0);
        edi = r2;
    }
    {
        void* p = field38;
        if (p == 0)
            p = GetParent(field20);
        void* ebx = sub_6301C0(p);
        if (ebx != 0)
        {
            sub_630004(this);
            void* ebp2 = field20;
            unsigned short w = sub_7385B0(this);
            unsigned int v = (unsigned int)w | 0x10000;
            PostMessageA(*(void**)((char*)ebx + 0x20), 0x111, v, (int)ebp2);
            ebp = *(void**)((char*)&local + 4);
        }
    }
    if (edi != 0)
    {
        void** vt = *(void***)edi;
        int (*fn)(void*) = (int (*)(void*))vt[0x8c/4];
        int r = fn((void*)edi);
        if (r != 0)
        {
            void** vt2 = *(void***)edi;
            int (*fn2)(void*) = (int (*)(void*))vt2[0x8c/4];
            void* r2 = (void*)fn2((void*)edi);
            if (sub_644710(r2) == 0)
            {
                void** vt3 = *(void***)edi;
                void* (*fn3)(void*, int) = (void* (*)(void*, int))vt3[0x13c/4];
                void* esi = fn3((void*)edi, 1);
                sub_6A0E30(*(void**)((char*)ebp + 0x4c), esi, 1);
                sub_6301E4(esi);
                return c;
            }
        }
        sub_6A0E30(*(void**)((char*)ebp + 0x4c), (void*)edi, 1);
        return c;
    }
fail:
    sub_63023E(this);
    return c;
}
