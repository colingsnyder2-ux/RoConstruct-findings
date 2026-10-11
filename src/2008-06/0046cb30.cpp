// from server: 19% by tester
struct LDraw2RobloxColorMap {
    char pad0[8];
    char field8[0x1c];
    char field24[0x1c];
    void destroy();
};

extern "C" void __stdcall sub_802468(void*);

void LDraw2RobloxColorMap::destroy()
{
    sub_802468(&field24[0]);
    sub_802468(&field8[0]);
}
