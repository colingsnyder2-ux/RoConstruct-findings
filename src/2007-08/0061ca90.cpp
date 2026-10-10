// from server: 61% by tester
struct Sub1 {
    void f();
};

struct Sub2 {
    void g();
};

struct Sub3 {
    void h();
};

struct Sub4 {
    void i();
};

struct ChatOutput {
    int pad0;
    int pad4;
    int pad8;
    int padC;
    int pad10;
    int pad14;
    int pad18;
    int pad1C;
    int pad20;
    int pad24;
    int pad28;
    int pad2C;
    int pad30;
    int pad34;
    int pad38;
    int pad3C;
    int pad40;
    int pad44;
    int pad48;
    int pad4C;
    int pad50;
    int pad54;
    int pad58;
    int pad5C;
    int pad60;
    int pad64;
    int pad68;
    int pad6C;
    int pad70;
    int pad74;
    int pad78;
    int pad7C;
    int pad80;
    int pad84;
    int pad88;
    int pad8C;
    int pad90;
    int pad94;
    int pad98;
    int pad9C;
    int padA0;
    int padA4;
    int padA8;
    int padAC;
    int padB0;
    int padB4;
    int padB8;
    int padBC;
    int padC0;
    int padC4;
    int padC8;
    int padCC;
    int padD0;
    int padD4;
    int padD8;
    int padDC;
    int padE0;
    int padE4;
    int padE8;
    int padEC;
    int padF0;
    int padF4;
    int padF8;
    int padFC;
    int pad100;
    int pad104;
    int pad108;
    int pad10C;
    int pad110;
    int pad114;
    int pad118;
    int pad11C;
    int pad120;
    int pad124;
    int pad128;
    int pad12C;

    void destroy();
};

extern "C" void __stdcall sub_40CF60();
extern "C" void __stdcall sub_40FB40();
extern "C" void __stdcall sub_61C8E0();
extern "C" void __stdcall sub_62A840();

void ChatOutput::destroy()
{
    *(int*)((char*)this + 0x00) = 0x7c4354;
    *(int*)((char*)this + 0x04) = 0x7c434c;
    *(int*)((char*)this + 0x10) = 0x7c4344;
    *(int*)((char*)this + 0x14) = 0x7c4334;
    *(int*)((char*)this + 0x2c) = 0x7c4324;
    *(int*)((char*)this + 0x44) = 0x7c4314;
    *(int*)((char*)this + 0x5c) = 0x7c4304;
    *(int*)((char*)this + 0x74) = 0x7c42f4;
    *(int*)((char*)this + 0x8c) = 0x7c42e4;
    *(int*)((char*)this + 0xe8) = 0x7c42dc;
    *(int*)((char*)this + 0xfc) = 0x7c42d0;
    *(int*)((char*)this + 0x100) = 0x7c42c4;

    while (*(int*)((char*)this + 0x128) != 0)
    {
        sub_61C8E0();
    }

    sub_40FB40();
    sub_62A840();

    *(int*)((char*)this + 0x100) = 0x795b60;
    *(int*)((char*)this + 0xfc) = 0x7c42b8;

    sub_40CF60();
}
