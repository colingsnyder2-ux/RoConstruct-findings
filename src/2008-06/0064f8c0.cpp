// from server: 19% by colin
struct RBX_ImageKeyButton {
    char pad[0x0c];
    void* field_0c;
    char pad2[0x28 - 0x10];
    void* field_28;
    void destructor();
};

extern "C" void __stdcall sub_802468(void*);

void RBX_ImageKeyButton::destructor()
{
    sub_802468(&field_28);
    sub_802468(&field_0c);
}
