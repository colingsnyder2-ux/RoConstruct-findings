// from server: 58% by colin
struct ChatOutput {
    char pad[0x118];
    int field_118;
    int field_128;
    void destroy();
    ~ChatOutput();
};

extern "C" void __stdcall sub_40FB40(int);
extern "C" void __stdcall sub_62A840(int);
extern "C" void __stdcall sub_40CF60(int);
extern "C" void __stdcall sub_61C8E0(int);

ChatOutput::~ChatOutput()
{
    *(int*)((char*)this + 0x00) = 0x7c4354;
    *(int*)((char*)this + 0x04) = 0x7c434c;
    *(int*)((char*)this + 0x10) = 0x7c4344;
    *(int*)((char*)this + 0x14) = 0x7c4334;
    *(int*)((char*)this + 0x2C) = 0x7c4324;
    *(int*)((char*)this + 0x44) = 0x7c4314;
    *(int*)((char*)this + 0x5C) = 0x7c4304;
    *(int*)((char*)this + 0x74) = 0x7c42f4;
    *(int*)((char*)this + 0x8C) = 0x7c42e4;
    *(int*)((char*)this + 0xE8) = 0x7c42dc;
    *(int*)((char*)this + 0xFC) = 0x7c42d0;
    *(int*)((char*)this + 0x100) = 0x7c42c4;
    while (field_128 != 0) {
        sub_61C8E0((int)this);
    }
    sub_40FB40((int)((char*)this + 0x118));
    sub_62A840((int)((char*)this + 0x10C));
    *(int*)((char*)this + 0x100) = 0x795b60;
    *(int*)((char*)this + 0xFC) = 0x7c42b8;
    sub_40CF60((int)this);
}
