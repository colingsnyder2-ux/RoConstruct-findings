// from server: 55% by colin
struct StarterPackService {
    void method(int);
};

extern "C" void __stdcall sub_5562c0(int);
extern "C" int __stdcall sub_59d210();
extern "C" void* __stdcall sub_555a10(int);
extern "C" void* __stdcall sub_50b200();
extern "C" void* __stdcall sub_736ed0(int, int, int);
extern "C" void __stdcall sub_77e698(void*);
extern "C" void __stdcall sub_77e6ac(void*);

struct string_impl {
    void construct(const char*);
    void destroy();
};

void StarterPackService::method(int a) {
    sub_5562c0(a);
    if (sub_59d210() == 0) {
        return;
    }

    char buf[0x20];
    (*(void (__thiscall**)(int, char*))(*(int*)a + 0xc))(a, buf);

    void* mem = sub_555a10(0xc);
    float f1 = *(float*)(buf + 4);
    float f2 = *(float*)0x79f2fc;
    float f3 = *(float*)(buf + 0xc);
    float r1 = f1 + f2;
    float r2 = f3 - f2;
    *(float*)((char*)mem + 0) = r1;
    *(float*)((char*)mem + 4) = r2;

    float* v = (float*)sub_50b200();
    float vx = v[0];
    float vy = v[1];
    float vz = v[2];

    string_impl s;
    s.construct("StarterPack - these items will be given to each new player");

    int flag = 0;
    void* p = sub_736ed0(1, 3, 0);

    double d = (double)flag;
    (*(void (__thiscall**)(int, char*, float*, float*, double, void*, int))(*(int*)a + 0x30))(
        a, buf, &vx, &vy, d, p, 1);

    s.destroy();
}
