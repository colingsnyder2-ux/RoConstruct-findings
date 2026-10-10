// from server: 81% by colin
struct GameTool {
    char pad[0x20];
    void f(int a);
};

extern "C" int __stdcall sub_5e3f80(int, float*);
extern "C" int __stdcall sub_5fde20(int, float*);
extern "C" void __stdcall sub_77e62c(void*, const char*);

void GameTool::f(int a)
{
    if (*(unsigned short*)(a + 0xc) == 0)
        return;
    if (*(unsigned short*)(a + 0xe) == 0)
        return;

    float v[3];
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;

    int r = sub_5e3f80(a, v);
    if (r == 0) {
        sub_77e62c((char*)this + 0x20, "ArrowCursor");
        return;
    }

    if (!sub_5fde20(r, v)) {
        sub_77e62c((char*)this + 0x20, "ArrowFarCursor");
        return;
    }

    sub_77e62c((char*)this + 0x20, "DragCursor");
}
