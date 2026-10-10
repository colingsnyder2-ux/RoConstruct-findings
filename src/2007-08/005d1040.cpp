// from server: 49% by colin
struct S_func_005d1040 {
    char pad0[4];
    int m_0c;
    int m_10;
    int m_14;
    char pad2[0x2c - 0x18];
    int m_2c;
    char pad3[0x44 - 0x30];
    int m_44;
    char pad4[0x5c - 0x48];
    int m_5c;
    char pad5[0x74 - 0x60];
    int m_74;
    char pad6[0x8c - 0x78];
    int m_8c;
    char pad7[0xe8 - 0x90];
    int m_e8;
    S_func_005d1040();
};

extern "C" void __stdcall sub_005cfd60();
extern "C" int __stdcall sub_0058e1d0();

S_func_005d1040::S_func_005d1040()
{
    sub_005cfd60();
    *(int*)((char*)this + 0) = 0x7baa04;
    *(int*)((char*)this + 4) = 0x7ba9f8;
    *(int*)((char*)this + 0x10) = 0x7ba9f0;
    *(int*)((char*)this + 0x14) = 0x7ba9e0;
    *(int*)((char*)this + 0x2c) = 0x7ba9d0;
    *(int*)((char*)this + 0x44) = 0x7ba9c0;
    *(int*)((char*)this + 0x5c) = 0x7ba9b0;
    *(int*)((char*)this + 0x74) = 0x7ba9a0;
    *(int*)((char*)this + 0x8c) = 0x7ba990;
    *(int*)((char*)this + 0xe8) = 0x7ba988;
    m_0c = sub_0058e1d0();
}
