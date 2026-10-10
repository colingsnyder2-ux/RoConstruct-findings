// from server: 89% by tester
struct RakPeer {
    char pad0[0x20];
    char field20[0xc4 - 0x20];
    char fieldc4[0xd4 - 0xc4];
    char fieldd4[0xe4 - 0xd4];
    char fielde4[0xf4 - 0xe4];
    char fieldf4[0x104 - 0xf4];
    char field104[0x114 - 0x104];
    char field114[0x124 - 0x114];
    char field124[0x80];
    char field80;
    void f(int a1, int a2);
};

extern "C" void __stdcall sub_4c09c0(
    int a1, int a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9, void* a10);
extern "C" void __stdcall sub_4bd720(int a1, void* a2, void* a3, int a4);

void RakPeer::f(int a1, int a2)
{
    if (field80 != 0) {
        sub_4c09c0(
            a1,
            a2,
            this,
            fieldc4,
            fieldf4,
            field124,
            fieldd4,
            fielde4,
            field104,
            field114);
    } else {
        sub_4bd720(a1, this, field20, a2);
    }
}
