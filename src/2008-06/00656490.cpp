// from server: 78% by colin




extern float g_827490;
extern float g_8163a4;

struct PercentPanel {
    void construct();
};

struct ScoreHud {
    void construct();
    char pad0[0x10];
    int vt10;
    int vt14;
    char pad18[8];
    int vt20;
    int vt24;
    char pad28[0x1c];
    int vt44;
    char pad48[0x1c];
    int vt64;
    char pad68[0x1c];
    int vt84;
    char pad88[0x1c];
    int vta4;
    char padA8[0x1c];
    int vtc4;
    char padC8[0x68];
    int vt130;
    char pad134[8];
    float f13c;
    float f140;
    int i144;
    int i148;
};

void ScoreHud::construct()
{
    ((PercentPanel*)this)->construct();
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
    *(float*)((char*)this + 0x13c) = g_827490;
    *(float*)((char*)this + 0x140) = g_8163a4;
    *(int*)((char*)this + 0x144) = 0;
    *(int*)((char*)this + 0x148) = 0;
}
