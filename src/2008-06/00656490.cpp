// from server: 70% by tester
struct ScoreHud {
    char pad[0x13c];
    float f13c;
    float f140;
    int i144;
    int i148;
    ScoreHud* ctor();
};

struct Base {
    void init();
};

extern float g_827490;
extern float g_8163A4;

ScoreHud* ScoreHud::ctor()
{
    ((Base*)this)->init();
    *(int*)((char*)this + 0x00) = 0x84bdcc;
    *(int*)((char*)this + 0x10) = 0x84bdbc;
    *(int*)((char*)this + 0x14) = 0x84bdb4;
    *(int*)((char*)this + 0x20) = 0x84bdac;
    *(int*)((char*)this + 0x24) = 0x84bd9c;
    *(int*)((char*)this + 0x44) = 0x84bd8c;
    *(int*)((char*)this + 0x64) = 0x84bd7c;
    *(int*)((char*)this + 0x84) = 0x84bd6c;
    *(int*)((char*)this + 0xa4) = 0x84bd5c;
    *(int*)((char*)this + 0xc4) = 0x84bd4c;
    *(int*)((char*)this + 0x130) = 0x84bd44;
    f13c = g_827490;
    i144 = 0;
    f140 = g_8163A4;
    i148 = 0;
    return this;
}
