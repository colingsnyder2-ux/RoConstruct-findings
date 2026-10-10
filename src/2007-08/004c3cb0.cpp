// from server: 48% by tester
struct RakPeer {
    char pad0[4];
    unsigned char field_4;
    char pad1[0x73c - 0x5];
    char field_73c[0x870 - 0x73c];
    int field_870;
    char field_874[0x894 - 0x874];
    unsigned char field_894;
    unsigned char field_895;

    void func(int a, int b, int c, int d);
};

extern "C" void __cdecl sub_004ca1e0(void*);
extern "C" void __cdecl sub_004b91f0();
extern "C" void __cdecl sub_004c1bb0(void*, void*, void*);
extern "C" void __cdecl sub_004c3830(void*);

void __cdecl sub_004b7f70();

void RakPeer::func(int a, int b, int c, int d)
{
    if (field_4 == 0)
        return;

    sub_004b7f70();
    sub_004ca1e0(0);
    sub_004b91f0();

    field_895 = 1;

    if (a == 0 && b == 0) {
        if (c == 0 && d == 0) {
            field_894 = 1;
            sub_004c3830(&field_73c);
            return;
        }
    }

    if (c != 0) {
        if (d != 0) {
            field_870 = *(int*)c;
            char* src = (char*)d;
            char* dst = &field_874[0];
            for (int i = 0; i < 8; i++) {
                ((int*)dst)[i] = ((int*)src)[i];
            }
        }
    }

    if (a != 0 && b != 0) {
        int tmp1[4];
        int tmp2[4];
        tmp1[0] = *(int*)(a + 0);
        tmp1[1] = *(int*)(a + 4);
        tmp1[2] = *(int*)(a + 8);
        tmp1[3] = *(int*)(a + 12);
        tmp2[0] = *(int*)(b + 0);
        tmp2[1] = *(int*)(b + 4);
        tmp2[2] = *(int*)(b + 8);
        tmp2[3] = *(int*)(b + 12);
        sub_004c1bb0(&field_73c, tmp1, tmp2);
    }

    field_894 = 0;
}
