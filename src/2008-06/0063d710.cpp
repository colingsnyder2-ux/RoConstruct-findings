// from server: 65% by tester
struct GCamera {
    char pad[0x24];
    float x, y, z;
};

struct Obj {
    void sub_598cb0();
    void sub_513220(void*);
};

int __stdcall sub_6a17c6(int, int, int, int, int);
void __cdecl sub_513e20();

struct Sparkles {
    char pad0[0x14];
    bool enabled;
    char pad1[0x10];
    void* parent;
    void onChangedEnabled(int);
};

void Sparkles::onChangedEnabled(int) {
    int result;
    GCamera cam;
    void* v;

    result = sub_6a17c6(*(int*)((char*)this - 0x2c), 0, 0x92907c, 0x92dd50, 0);
    if (result != 0) {
        if (enabled) {
            ((Obj*)result)->sub_598cb0();
            sub_513e20();
            ((Obj*)&cam)->sub_513220(&cam);
            cam.x = *(float*)((char*)&cam + 0x24);
            cam.y = *(float*)((char*)&cam + 0x28);
            cam.z = *(float*)((char*)&cam + 0x2c);
            v = parent;
            (*(void(__thiscall**)(void*, GCamera*))(*(int*)v + 0x38))(v, &cam);
            (*(void(__thiscall**)(void*))(*(int*)v + 0x4c))(v);
        }
    }
}
