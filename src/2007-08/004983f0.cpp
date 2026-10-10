// from server: 35% by colin
struct Plugin {
    char pad[0x14];
    int field14;
    void destroy();
};

extern "C" void __stdcall sub_00725720(int*);
extern "C" void __stdcall sub_004968c0(Plugin*);

void Plugin::destroy()
{
    field14 = 0;
    sub_00725720(&field14);
    sub_004968c0(this);
}
