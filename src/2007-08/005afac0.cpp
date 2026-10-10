// from server: 67% by colin
struct Lighting {
    char pad[0x1e0];
    float x;
    float y;
    float z;
    void func(float a, float b, float c);
};

extern "C" void __stdcall sub_444710(const char*);
extern "C" void* __stdcall sub_461680(void*);
extern "C" void* __stdcall sub_570270(void*, void*);
extern "C" void __stdcall sub_52db00(void*);
extern "C" void __stdcall sub_5ae960(void*, void*, int);

void Lighting::func(float a, float b, float c)
{
    if (x == a && y == b && z == c)
        return;

    z = c;
    y = b;
    x = a;

    sub_444710((const char*)0x8c5c78);

    void* p = (char*)this + 4;
    void* q = sub_570270((void*)0x8c5bec, p);
    if (q)
    {
        int tmp = 0;
        sub_5ae960((char*)q + 0x10, &tmp, 0);
    }

    void* r = sub_461680(this);
    if (r)
        sub_52db00(r);
}
