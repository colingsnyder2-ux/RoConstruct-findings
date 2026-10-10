// from server: 50% by colin
struct RBX_DebrisService {
    void construct();
    void destroy();
};

extern "C" void __stdcall sub_5F8E70(void*);
extern "C" void __stdcall sub_5402B0(void*);

void RBX_DebrisService::construct()
{
    sub_5F8E70((char*)this + 0xe8);
    *(int*)((char*)this + 0x00) = 0x7c1b3c;
    *(int*)((char*)this + 0x04) = 0x7c1b34;
    *(int*)((char*)this + 0x10) = 0x7c1b2c;
    *(int*)((char*)this + 0x14) = 0x7c1b1c;
    *(int*)((char*)this + 0x2c) = 0x7c1b0c;
    *(int*)((char*)this + 0x44) = 0x7c1afc;
    *(int*)((char*)this + 0x5c) = 0x7c1aec;
    *(int*)((char*)this + 0x74) = 0x7c1adc;
    *(int*)((char*)this + 0x8c) = 0x7c1acc;
    sub_5402B0(this);
}
