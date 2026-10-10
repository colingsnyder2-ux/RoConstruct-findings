// from server: 19% by colin
struct ScoreHud {
    char pad[0x1c];
    int field1c;
    int field20;
    int field24;
    void destroy();
};

extern "C" void __stdcall sub_543460();
extern "C" void __cdecl sub_62fc62(int);
extern "C" void __stdcall sub_77e6ac();

void ScoreHud::destroy()
{
    int* p = &field1c;
    int v = field20;
    int w = *(int*)v;
    sub_543460();
    sub_62fc62(field20);
    field20 = 0;
    field24 = 0;
    sub_77e6ac();
}
