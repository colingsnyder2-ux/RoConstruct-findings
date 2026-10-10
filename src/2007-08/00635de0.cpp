// from server: 90% by colin
struct CPatchedControlComboBox {
    char pad[0xfc];
    int field_0xfc;
    char pad2[0x180 - 0xfc - 4];
    int field_0x180;
    int GetState();
    int IsEnabled();
    int CheckState();
};

extern "C" int __stdcall sub_77dcd0(int);
extern "C" void __stdcall sub_77ddbc(void*);

int CPatchedControlComboBox::CheckState()
{
    int state;
    int result;
    char enabled;

    if (*(int*)(field_0xfc + 0xf4) == 2)
        return 1;

    int (CPatchedControlComboBox::*fn)(int*) = *(int (CPatchedControlComboBox::**)(int*))((*(char**)this) + 0x58);
    (this->*fn)(&state);
    enabled = (char)sub_77dcd0(state);
    sub_77ddbc(&state);

    if (enabled)
        return 0;

    result = GetState();
    if (result == 1 || result == 3 || result == 4)
        return 1;

    return field_0x180 == 1;
}
