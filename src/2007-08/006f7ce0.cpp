// from server: 63% by colin
struct CXTPPropertyGridInplaceEdit
{
    char pad0[0x20];
    void* field_20;
    char pad24[0x38];
    int field_5c;
    char pad60[0x2c];
    void* field_8c;
    char pad90[0xc];
    void* field_9c;
    void* field_a0;
    int field_a4;
    int field_a8;
    int field_ac;
    int field_b0;

    void f(void* param_1, int param_2, int param_3, int param_4, int param_5);
};

extern "C" void* __stdcall sub_0077dd98(void*);
extern "C" void* __stdcall sub_0077ecd8(void*, unsigned int, unsigned int, unsigned int, unsigned int);
extern "C" void __stdcall sub_00630016(void*, void*);
extern "C" void __stdcall sub_0063002e(void*, int, int, int, int, int, int);
extern "C" void* __stdcall sub_00698380(void*, int, int);
extern "C" void* __stdcall sub_0069ab30(void*);
extern "C" void __stdcall sub_006f7810(void*, int, int);
extern "C" void __stdcall sub_007383a0(void*, void*, void*, int, int);
extern "C" int __stdcall sub_00738412(void*);

void CXTPPropertyGridInplaceEdit::f(void* param_1, int param_2, int param_3, int param_4, int param_5)
{
    if (param_1 == 0)
        return;

    void* p = *(void**)((char*)param_1 + 0xb4);
    if (p == 0)
        return;

    field_9c = p;
    field_a0 = param_1;
    field_a8 = 0;
    field_ac = 0;
    field_b0 = 0;

    void** vtbl = *(void***)param_1;
    void* (__stdcall *fn)(void*) = (void* (__stdcall *)(void*))vtbl[0x28];
    void* result = fn(param_1);

    if (field_20 != 0)
    {
        int a = sub_00738412(this);
        int b = (int)result;
        a |= 0x50000803;
        b |= 0x50000803;
        if (a != b)
            field_a4 = 1;

        if (field_a4 != 0)
        {
            void** vt = *(void***)this;
            void (__stdcall *fn2)(void*) = (void (__stdcall *)(void*))vt[0x1a];
            fn2(this);
        }

        if (field_20 == 0)
        {
            sub_007383a0(this, result, (void*)((char*)&param_2), (int)field_9c, 0);
        }
    }
    else
    {
        sub_007383a0(this, result, (void*)((char*)&param_2), (int)field_9c, 0);
    }

    void* item2 = field_a0;
    field_a4 = 0;

    if (*(int*)((char*)item2 + 0xe8) != 0)
    {
        int c = (int)(signed char)*((char*)param_1 + 0xe4);
        sub_0077ecd8(field_20, 0xcc, c, 0, 0);
    }

    void* r = sub_00698380(field_a0, 1, 0);
    if (r != 0)
    {
        void* r2 = sub_00698380(field_a0, 1, 0);
        void* q = *(void**)((char*)r2 + 0x98);
        sub_0077ecd8(field_20, 0xc5, (int)q, 1, 0);
    }
    else
    {
        sub_0077ecd8(field_20, 0xc5, 0, 1, 0);
    }

    void* r3 = sub_0069ab30(field_9c);
    void** vt3 = *(void***)r3;
    void* r4 = ((void* (__stdcall*)(void*, void*, int))vt3[3])(r3, param_1, 1);
    int val;
    if (r4 == 0)
        val = 0;
    else
        val = *(int*)((char*)r4 + 4);

    sub_0077ecd8(field_20, 0x30, val, 1, 0);

    void* h = sub_0077dd98((char*)this + 0x8c);
    sub_00630016(this, h);

    int x1 = param_2;
    int y1 = param_3;
    int x2 = param_4;
    int y2 = param_5;
    sub_0063002e(this, x1, y1, x2 - x1, y2 - y1, 0x44, 0);

    sub_0077ecd8(field_20, 0xd3, 3, 0x30003, 0);

    void* item3 = field_a0;
    field_5c = (int)*((unsigned char*)item3 + 0xe5);
    if (*((char*)item3 + 0xe5) != 0)
    {
        void** vt = *(void***)this;
        void* h1 = sub_0077dd98((char*)item3 + 0xa0);
        void* h2 = sub_0077dd98((char*)field_a0 + 0xe0);
        void* h3 = sub_0077dd98((char*)field_a0 + 0xdc);
        void (__stdcall *fn4)(void*, void*, void*, void*) = (void (__stdcall *)(void*, void*, void*, void*))vt[0x4f];
        fn4(this, h3, h2, h1);

        int c = (int)*((unsigned char*)field_a0 + 0xe4);
        sub_006f7810(this, c, 1);
    }

    field_a8 = 1;
}
