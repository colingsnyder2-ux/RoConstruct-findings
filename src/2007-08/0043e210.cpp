// from server: 40% by colin
struct VSoundChannel;

struct FactoryProductBase {
    void constructFromArgs(int a, int b);
};

struct VSoundChannelCreator {
    char pad[0x20];
    void* vtable20;
    char pad2[0x114 - 0x24];
    void* vtable114;
};

struct VSoundChannelFactoryProduct : FactoryProductBase {
    void* vtable;
    char pad[0x20 - 4];
    void* vtable20;
    char pad2[0x114 - 0x24];
    void* vtable114;

    VSoundChannelFactoryProduct(int a, int b);
};

extern "C" void __stdcall sub_69DFA0(int);

VSoundChannelFactoryProduct::VSoundChannelFactoryProduct(int a, int b)
{
    constructFromArgs(a, b);
    vtable = (void*)0x78E4A4;
    vtable20 = (void*)0x78E444;
    vtable114 = (void*)0x78E43C;
    sub_69DFA0(1);
}
