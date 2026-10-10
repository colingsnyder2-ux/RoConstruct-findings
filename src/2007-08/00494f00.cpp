// from server: 38% by colin
struct VPlayersSignalDesc {
    void* vtable0;
    void* vtable4;
    int field8;
    int fieldC;
    void* vtable10;
    void* vtable14;
    char pad18[0x14];
    void* vtable2C;
    char pad30[0x14];
    void* vtable44;
    char pad48[0x14];
    void* vtable5C;
    char pad60[0x14];
    void* vtable74;
    char pad78[0x14];
    void* vtable8C;
    void construct();
};

extern "C" void __stdcall sub_4916C0();
extern "C" void* __stdcall sub_494E80();

void VPlayersSignalDesc::construct()
{
    sub_4916C0();
    fieldC = 0;
    vtable0 = (void*)0x79ba5c;
    vtable4 = (void*)0x79ba54;
    vtable10 = (void*)0x79ba4c;
    vtable14 = (void*)0x79ba3c;
    vtable2C = (void*)0x79ba2c;
    vtable44 = (void*)0x79ba1c;
    vtable5C = (void*)0x79ba0c;
    vtable74 = (void*)0x79b9fc;
    vtable8C = (void*)0x79b9ec;
    field8 = (int)sub_494E80();
}
