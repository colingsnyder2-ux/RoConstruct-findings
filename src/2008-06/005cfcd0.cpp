// from server: 52% by colin
struct StarterPackService {
    void method(int);
};

extern "C" {
    void __stdcall sub_574050(int);
    int __cdecl sub_5cfc30();
    void* __cdecl sub_573770(unsigned int);
    float* __cdecl sub_514a60();
    int __cdecl sub_7baf10(int, int, int);
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}

struct Vec3 {
    float x, y, z;
};

struct Mat4 {
    float m[16];
};

struct String {
    void* data[4];
    String(const char*);
    ~String();
};

void StarterPackService::method(int a)
{
    sub_574050(a);
    if (sub_5cfc30() == 0)
        return;

    Vec3 v;
    (*(void (__thiscall**)(int, Vec3*))(*(int*)a + 0x10))(a, &v);

    Mat4* m = (Mat4*)sub_573770(0xc);

    float f1 = v.x + *(float*)0x826e6c;
    float f2 = v.z - v.y;

    float* p = sub_514a60();
    m->m[0] = p[0];
    m->m[1] = p[1];
    m->m[2] = p[2];
    m->m[3] = 1.0f;

    String s("StarterPack - these items will be given to each new player");

    int n = sub_7baf10(1, 3, 0);

    (*(void (__thiscall**)(int, float*, float*, float, int, String*))(*(int*)a + 0x34))(
        a, &f1, &f2, (float)n, 0, &s);

    s.~String();
}
