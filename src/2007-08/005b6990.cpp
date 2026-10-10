// from server: 42% by colin
struct std_string {
    void destroy();
};

struct Sky {
    char pad0[0xe8];
    std_string s0;
    std_string s1;
    std_string s2;
    std_string s3;
    std_string s4;
    std_string s5;
    void ctor();
};

extern "C" void __stdcall sub_5402b0();

void Sky::ctor()
{
    s5.destroy();
    s4.destroy();
    s3.destroy();
    s2.destroy();
    s1.destroy();
    s0.destroy();
    *(void**)((char*)this + 0x00) = (void*)0x7b800c;
    *(void**)((char*)this + 0x04) = (void*)0x7b8004;
    *(void**)((char*)this + 0x10) = (void*)0x7b7ffc;
    *(void**)((char*)this + 0x14) = (void*)0x7b7fec;
    *(void**)((char*)this + 0x2c) = (void*)0x7b7fdc;
    *(void**)((char*)this + 0x44) = (void*)0x7b7fcc;
    *(void**)((char*)this + 0x5c) = (void*)0x7b7fbc;
    *(void**)((char*)this + 0x74) = (void*)0x7b7fac;
    *(void**)((char*)this + 0x8c) = (void*)0x7b7f9c;
    sub_5402b0();
}
