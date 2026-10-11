// from server: 29% by atomic.potato
struct Sub {
    char pad[0x1c];
    void destroy();
};

struct ScoreHud {
    char pad[0x1c];
    Sub sub;
    void destroy();
};

extern "C" void __stdcall sub_5b2d60(void*);
extern "C" void __stdcall sub_89e4c4(void*);

void ScoreHud::destroy()
{
    sub.destroy();
    sub_89e4c4(this);
}
