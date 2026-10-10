// from server: 62% by colin
struct RBX_String {
    void* data[4];
    RBX_String(const char*);
    ~RBX_String();
};

struct RBX_PercentPanel {
    char pad[0x100];
    RBX_PercentPanel* ctor();
};

extern "C" {
    void __stdcall sub_77E698();
    void __stdcall sub_77E6AC();
    void __stdcall sub_555C70();
    void __stdcall sub_541BF0(RBX_String*);
}

RBX_PercentPanel* RBX_PercentPanel::ctor()
{
    sub_555C70();
    *(int*)((char*)this + 0x00) = 0x7a84fc;
    *(int*)((char*)this + 0x04) = 0x7a84f0;
    *(int*)((char*)this + 0x10) = 0x7a84e8;
    *(int*)((char*)this + 0x14) = 0x7a84d8;
    *(int*)((char*)this + 0x2c) = 0x7a84c8;
    *(int*)((char*)this + 0x44) = 0x7a84b8;
    *(int*)((char*)this + 0x5c) = 0x7a84a8;
    *(int*)((char*)this + 0x74) = 0x7a8498;
    *(int*)((char*)this + 0x8c) = 0x7a8488;
    *(int*)((char*)this + 0xe8) = 0x7a8480;

    RBX_String s("GuiRoot");
    sub_77E698();
    sub_541BF0(&s);
    sub_77E6AC();
    s.~RBX_String();

    return this;
}
