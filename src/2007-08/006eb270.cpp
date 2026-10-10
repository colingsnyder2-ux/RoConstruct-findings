// from server: 57% by colin
struct CXTPDockingPaneVisioTheme {
    void Construct();
    int field0;
    char pad[0x1c];
    int field20;
    char pad2[0x58];
    int field7c;
    char pad3[0x1c];
    int field9c;
    int fielda0;
    char pad4[0x198];
    int field23c;
    int field240;
};

void CXTPDockingPaneVisioTheme::Construct()
{
    field0 = 0x7da77c;
    field23c = 1;
    field240 = 1;
    field7c = 7;
    field20 = 1;
    (*(void (__thiscall**)(int, int))(*(int*)fielda0 + 0))(fielda0, 2);
    (*(void (__thiscall**)(int, int))(*(int*)fielda0 + 0))(fielda0, 4);
    *(int*)(fielda0 + 0x20) = 1;
    (*(void (__thiscall**)(int, int))(*(int*)field9c + 0))(field9c, 2);
    (*(void (__thiscall**)(int, int))(*(int*)field9c + 0))(field9c, 4);
    *(int*)(field9c + 0x20) = 1;
    *(int*)((char*)this + 0x70) = 2;
}
