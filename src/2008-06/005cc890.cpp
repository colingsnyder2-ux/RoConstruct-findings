// from server: 63% by colin
extern float g828b60;
extern float g83a310;
extern float g81e704;
extern float g83a3ec;

extern "C" double __cdecl acos(double);

struct GCamera {
    void getAxis(int index, float* out);
};

struct S {
    char pad[0x174];
    GCamera cam;
    void method(float arg);
};

void GCamera_getAxis(GCamera* self, float* out, int index);

void S::method(float arg) {
    float v = g828b60;
    float tmp[3];
    GCamera_getAxis(&cam, tmp, 2);
    float x = tmp[0] * v;
    float y = tmp[1] * v;
    float z = tmp[2] * v;
    float a = (float)acos((double)v);
    float r = a * g83a310 * g81e704;
    int i = (int)r;
    int total = i + *(int*)((char*)&arg + 4);
    float f = (float)total * g83a3ec - v;
    ((void (__thiscall*)(S*, float))0x5cc740)(this, f);
}
