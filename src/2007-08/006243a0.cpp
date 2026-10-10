// from server: 20% by colin
struct Cofm {
    int f(int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_61C560(int);

extern "C" void __cdecl sub_77E6D8();
extern "C" void __cdecl sub_77E4FC();

int Cofm::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int result = 0;
    int v9 = a1;
    int v10 = a2;
    int v11 = a3;
    int v12 = a4;
    int v13 = a5;
    int v14 = a6;
    int v15 = a7;
    int v16 = a8;

    while (1) {
        if (v9 != -2) {
            if (v9 == 0) {
                sub_77E6D8();
            } else if (v9 != v11) {
                sub_77E6D8();
            }
        }

        if (v10 == v12) {
            break;
        }

        if (v9 != -2) {
            if (v9 == 0) {
                sub_77E6D8();
            }
            if (*(int*)(v9 + 0x18) >= 0x10) {
                if (v10 > *(int*)(v9 + 4)) {
                    sub_77E6D8();
                }
            } else {
                if (v10 > (int)(v9 + 4)) {
                    sub_77E6D8();
                }
            }
        }

        v10--;

        if (v9 != -2) {
            if (v9 == 0) {
                sub_77E6D8();
            }
            if (*(int*)(v9 + 0x18) >= 0x10) {
                if (v10 < *(int*)(v9 + 4) + *(int*)(v9 + 0x14)) {
                    sub_77E6D8();
                }
            } else {
                if (v10 < (int)(v9 + 4) + *(int*)(v9 + 0x14)) {
                    sub_77E6D8();
                }
            }
        }

        unsigned char v17 = *(unsigned char*)v10;
        unsigned short v18 = *(unsigned short*)v13;
        int v19 = sub_61C560(v14);
        if ((*(unsigned short*)(*(int*)(v19 + 0x10) + v17 * 2) & v18) != 0) {
            continue;
        }

        if (v9 != -2) {
            if (v9 == 0) {
                sub_77E6D8();
            }
            if (*(int*)(v9 + 0x18) >= 0x10) {
                if (v10 < *(int*)(v9 + 4) + *(int*)(v9 + 0x14)) {
                    sub_77E6D8();
                }
            } else {
                if (v10 < (int)(v9 + 4) + *(int*)(v9 + 0x14)) {
                    sub_77E6D8();
                }
            }
        }

        v10++;
        *(int*)v15 = v9;
        *(int*)(v15 + 4) = v10;
        sub_77E4FC();
        return v15;
    }

    *(int*)v15 = v11;
    *(int*)(v15 + 4) = v12;
    sub_77E4FC();
    return v15;
}
