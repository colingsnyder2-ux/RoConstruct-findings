// from server: 46% by colin
struct VSeatFactoryProductCreator {
    void* vtable0;
    void* vtable4;
    int field8;
    int fieldC;
    void* vtable10;
    void* vtable14;
    char pad18[0x14];
    void* vtable2c;
    char pad30[0x14];
    void* vtable44;
    char pad48[0x14];
    void* vtable5c;
    char pad60[0x14];
    void* vtable74;
    char pad78[0x14];
    void* vtable8c;
    char pad90[0x58];
    void* vtableE8;

    VSeatFactoryProductCreator();
};

extern "C" void __stdcall sub_5901B0();
extern "C" void* __stdcall sub_58E320();

VSeatFactoryProductCreator::VSeatFactoryProductCreator()
{
    sub_5901B0();
    fieldC = 0;
    vtable0 = (void*)0x7afb24;
    vtable4 = (void*)0x7afb18;
    vtable10 = (void*)0x7afb10;
    vtable14 = (void*)0x7afb00;
    vtable2c = (void*)0x7afaf0;
    vtable44 = (void*)0x7afae0;
    vtable5c = (void*)0x7afad0;
    vtable74 = (void*)0x7afac0;
    vtable8c = (void*)0x7afab0;
    vtableE8 = (void*)0x7afa98;
    fieldC = (int)sub_58E320();
}
