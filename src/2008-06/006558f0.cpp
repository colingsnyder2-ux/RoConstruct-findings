// from server: 37% by tester
struct ScoreHud {
    int field0;
    char pad[0x14];
    int field18;
    char pad2[0x1c];
    int field38;
    char pad3[0x1c];
    int field58;
    void destroy();
};

void sub_655870();
void sub_655800();
void sub_6541e0();
void sub_4077d0();
void sub_6a067a(void*);

void ScoreHud::destroy()
{
    sub_655870();
    sub_655800();
    sub_6541e0();
    sub_4077d0();
    sub_6a067a((void*)field0);
}
