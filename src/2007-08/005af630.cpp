// from server: 73% by colin
struct Lighting {
    char pad[0x10c];
    float field10c;
    float field110;
    float field114;
    void setSkyParameters(float a, float b, float c);
};

extern "C" void __cdecl sub_444710(const char*);
extern "C" void* __cdecl sub_461680(void*);
extern "C" void* __cdecl sub_570270(void*);
extern "C" void __cdecl sub_5ae960();
extern "C" void __cdecl sub_52db00();

void Lighting::setSkyParameters(float a, float b, float c)
{
    if (field10c != a || field110 != b || field114 != c)
    {
        field10c = a;
        field110 = b;
        field114 = c;
        sub_444710((const char*)0x8c5d50);
        void* p = 0;
        if (this)
            p = (char*)this + 4;
        void* r = sub_570270(p);
        if (r)
        {
            sub_5ae960();
        }
        void* q = sub_461680(this);
        if (q)
        {
            sub_52db00();
        }
    }
}
