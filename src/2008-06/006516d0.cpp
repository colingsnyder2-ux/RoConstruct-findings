// from server: 35% by tester
struct ScoreHud {
    char pad[0x1c];
    void* field1c;
    void destroy();
};

extern "C" void __stdcall sub_46B070(void*);
extern "C" void __stdcall sub_802468(void*);

void ScoreHud::destroy()
{
    sub_46B070(&field1c);
    sub_802468(this);
}
