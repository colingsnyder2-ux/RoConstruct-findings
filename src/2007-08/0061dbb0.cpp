// from server: 86% by colin
struct ChatOutput {
    void construct();
};

void ChatOutput::construct() {
    *(int*)((char*)this + 0x00) = 0x7c446c;
    *(int*)((char*)this + 0x04) = 0x7c4464;
    *(int*)((char*)this + 0x10) = 0x7c445c;
    *(int*)((char*)this + 0x14) = 0x7c444c;
    *(int*)((char*)this + 0x2c) = 0x7c443c;
    *(int*)((char*)this + 0x44) = 0x7c442c;
    *(int*)((char*)this + 0x5c) = 0x7c441c;
    *(int*)((char*)this + 0x74) = 0x7c440c;
    *(int*)((char*)this + 0x8c) = 0x7c43fc;
    *(int*)((char*)this + 0xe8) = 0x7c43f4;
    *(int*)((char*)this + 0xfc) = 0x7c43e8;
    *(int*)((char*)this + 0x100) = 0x7c43dc;
    *(int*)((char*)this + 0x100) = 0x78835c;
    *(int*)((char*)this + 0xfc) = 0x788350;
    ((void (__stdcall *)(void))0x40cf60)();
}
