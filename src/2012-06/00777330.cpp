// from server: 97% by Intel
struct S_func_00777330 {
    char pad0[132];
    int m_field84;
    char pad88[56];
    int m_fieldC8;
    char padD0[728];
    int m_field2D8;
    int m_field2DC;
    int f(int arg);
};

extern "C" int __stdcall sub_776FC0(int);

int S_func_00777330::f(int arg)
{
    if (arg != 0) {
        m_field84 = 0xBB138C;
        m_fieldC8 = 0xBB1084;
    }
    sub_776FC0(0);
    int eax = m_field84;
    *(int*)this = 0xBB0114;
    *(int*)((char*)this + 4) = 0xBB0108;
    *(int*)((char*)this + 0x18) = 0xBB00FC;
    *(int*)((char*)this + 0x1C) = 0xBB00F0;
    *(int*)((char*)this + 0x80) = 0xBB00E8;
    *(int*)((char*)this + 0x90) = 0xBB00D0;
    *(int*)((char*)this + 0x9C) = 0xBB00A4;
    *(int*)((char*)this + 0xB4) = 0xBB0078;
    *(int*)((char*)this + 0xC8) = 0xBB0070;
    int ecx = *(int*)(eax + 4);
    *(int*)((char*)this + ecx + 0x84) = 0xBB0068;
    int edx = m_field84;
    int eax2 = *(int*)(edx + 4);
    *(int*)((char*)this + eax2 + 0x80) = 0;
    m_field2D8 = 0;
    m_field2DC = 0;
    return (int)this;
}
