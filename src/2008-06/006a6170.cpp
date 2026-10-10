// from server: 85% by tester
struct MyXTPCommandBars {
    char pad[0x74];
    void* field_74;
    int FindCommand(void* cmd);
};

extern "C" int __stdcall sub_00721410(void* self, void* cmd, int* index);

int MyXTPCommandBars::FindCommand(void* cmd)
{
    int index;
    int result = sub_00721410((char*)field_74 + 0x8c, cmd, &index);
    if (result == 0)
        return 0;
    result = sub_00721410((char*)field_74 + 0xa8, cmd, &index);
    return (result == 0) ? 1 : 0;
}
