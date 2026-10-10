// from server: 77% by colin
struct Lighting {
    char pad[0x1fc];
    float field1fc;
    float field200;
    float field204;
    float field208;
    void func(float a, float b, float c, float d);
};

extern "C" void __stdcall sub_444710(const char*);
extern "C" void* __stdcall sub_461680(void*);
extern "C" void __stdcall sub_570270(void*, void*);
extern "C" void __stdcall sub_5ae960(void*, void*);
extern "C" void __stdcall sub_52db00(void*);

void Lighting::func(float a, float b, float c, float d)
{
    if (field1fc != a || field200 != b || field204 != c || field208 != d)
    {
        field1fc = a;
        field200 = b;
        field204 = c;
        field208 = d;
        sub_444710((const char*)0x8c5d6c);
        void* p = 0;
        if (this)
            p = (char*)this + 4;
        sub_570270((void*)0x8c5bec, p);
        if (p)
        {
            float tmp;
            sub_5ae960((char*)p + 0x10, &tmp);
        }
        void* q = sub_461680(this);
        if (q)
        {
            sub_52db00(q);
        }
    }
}
