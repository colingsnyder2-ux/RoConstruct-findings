// from server: 71% by colin
struct Lighting {
    char pad[0x1ec];
    float x;
    float y;
    float z;
    void setSkyParameters(float, float, float);
};

extern "C" void __stdcall sub_444710(const char*);
extern "C" void* __stdcall sub_570270(void*);
extern "C" void __stdcall sub_5ae960(void*, void*);
extern "C" void* __stdcall sub_461680(void*);
extern "C" void __stdcall sub_52db00(void*);

void Lighting::setSkyParameters(float a, float b, float c)
{
    if (x != a || y != b || z != c)
    {
        x = a;
        y = b;
        z = c;
        sub_444710((const char*)0x8c5c40);
        void* p = 0;
        if (this)
            p = (char*)this + 4;
        void* q = sub_570270(p);
        if (q)
        {
            char buf[4];
            sub_5ae960((char*)q + 0x10, buf);
        }
        void* r = sub_461680(this);
        if (r)
        {
            sub_52db00(r);
        }
    }
}
