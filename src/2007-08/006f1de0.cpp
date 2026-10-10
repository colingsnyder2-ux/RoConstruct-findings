// from server: 23% by colin
struct CStatic {
    char pad[0x54];
    int field_54;
    int field_58;
    int field_5c;
    int field_990;
    void func_006f1de0();
};

extern "C" {
    int __stdcall sub_630490(int);
    int __stdcall sub_680000(int);
    int __stdcall sub_680060(int, int);
    int __stdcall sub_668f70();
    int __stdcall sub_668770(int, int);
    int __stdcall sub_6308b0(int, int);
    int __stdcall sub_6308aa(int, int, int);
    int __stdcall sub_64b500(int, int);
    int __stdcall sub_64e4f0(int, int, int, int, int, int, int);
    int __stdcall sub_6f1590(int, int, int, int, int);
    int __stdcall sub_680430(int);
    int __stdcall sub_63048a(int);
    int __stdcall sub_630a1e(int);
    int __stdcall sub_41f680(int);
    int __stdcall sub_77d0c8(int);
    int __stdcall sub_77ee78(int, int, int, int, int, int, int, int, int, int);
    int __stdcall sub_77ed90(int, int, int);
}

void CStatic::func_006f1de0()
{
    int local_78;
    int local_38;
    int local_34;
    int local_30;
    int local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    int local_4;

    sub_630490((int)&local_78);
    sub_680000((int)&local_38);
    sub_680060(local_78, (int)&local_34);
    sub_668f70();
    sub_668770(0xf, 0);
    sub_6308b0((int)&local_38, 0);
    int v1 = field_5c;
    int v2 = local_34 - v1 - local_38;
    int v3 = v2 / 2;
    int v4 = field_58 + 0xa;
    local_30 = v4;
    local_2c = 0xa;
    local_28 = v3;
    local_24 = v1 + v3;
    sub_77ed90(3, (int)&local_2c, 3);
    sub_668f70();
    sub_668770(0x10, 0);
    sub_6308aa((int)&local_2c, 0xffffff, 0);
    sub_77ed90(1, (int)&local_2c, 1);
    sub_668f70();
    int v5 = sub_668770(0x15, 0);
    sub_668f70();
    int v6 = sub_668770(0xf, 0);
    sub_6308aa((int)&local_2c, v6, v5);
    int v7 = *(int*)(field_54 + 0x990);
    if (v7 != 0) {
        if (*(int*)(v7 + 8) != 0) {
            int v8 = *(int*)(v7 + 4);
            int v9 = sub_64b500(0, v8);
            if (v9 != 0) {
                int a = 0;
                int b = 0;
                int c = 0;
                int d = 0;
                sub_64e4f0((int)&local_20, v9, 0xa, v3, v4, v1, 0);
                sub_77d0c8(v9);
            }
        } else {
            local_1c = 0;
            local_18 = 0x7db274;
            local_14 = 0;
            sub_668f70();
            sub_668770(0xf, 0);
            sub_6f1590(0, 0, 0, 0, 0);
            int v10 = field_58;
            int v11 = field_5c;
            int v12 = local_10;
            sub_77ee78(v12, 0, 0, 0xa, v3, v10, v11, 4, 0, 0);
            local_18 = 0x788300;
            sub_41f680((int)&local_18);
        }
    }
    sub_680430((int)&local_38);
    sub_63048a((int)&local_78);
    sub_630a1e(0);
}
