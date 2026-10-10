// from server: 43% by colin
struct RBX_RunService {
    void construct(int);
};

extern "C" void __stdcall sub_59cec0();
extern "C" void __stdcall sub_555720();

void RBX_RunService::construct(int arg) {
    sub_59cec0();
    *(int*)((char*)this + 0x00) = 0x7b1d7c;
    *(int*)((char*)this + 0x04) = 0x7b1d70;
    *(int*)((char*)this + 0x10) = 0x7b1d68;
    *(int*)((char*)this + 0x14) = 0x7b1d58;
    *(int*)((char*)this + 0x2c) = 0x7b1d48;
    *(int*)((char*)this + 0x44) = 0x7b1d38;
    *(int*)((char*)this + 0x5c) = 0x7b1d28;
    *(int*)((char*)this + 0x74) = 0x7b1d18;
    *(int*)((char*)this + 0x8c) = 0x7b1d08;
    *(int*)((char*)this + 0xe8) = 0x7b1d00;
    *(short*)((char*)this + 0x11c) = 0;
    *(short*)((char*)this + 0x11e) = 0;
    sub_555720();
}
