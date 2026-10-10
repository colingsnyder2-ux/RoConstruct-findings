// from server: 15% by tester
struct RakPeer {
};

extern "C" void __cdecl sub_4BC200(void*, void*, void*);
extern "C" void __cdecl sub_4BE0C0(void*, void*, void*, void*);
extern "C" void __cdecl sub_4BADD0(void*, void*, void*);
extern "C" void __cdecl sub_4BB370(void*, void*, void*);
extern "C" int __cdecl sub_4CA340();

extern unsigned short g_79EB58[];

bool __cdecl func(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int v38[4];
    unsigned int v8[4];
    unsigned int v20[4];
    unsigned int v50[4];
    unsigned int v60[4];
    unsigned int v80[4];
    unsigned int v90[4];
    unsigned int v10[4];
    unsigned int v30[4];
    unsigned int v40[4];
    unsigned int v70[4];

    int i;
    for (i = 0; i < 0x100; i++) {
        v38[0] = g_79EB58[i];
        v38[1] = 0;
        v38[2] = 0;
        v38[3] = 0;
        sub_4BC200(v38, v38, &a);
        int j;
        for (j = 0; j < 4; j++) {
            if (v38[j] != 0)
                break;
        }
        if (j == 4)
            return false;
    }

    v8[0] = a;
    v8[1] = b;
    v8[2] = c;
    v8[3] = 0;

    int k;
    for (k = 0; k < 4; k++) {
        unsigned int val = v8[k];
        v8[k] = val - 1;
        if (val != 0)
            break;
    }

    unsigned int ebx = v8[0];
    unsigned int esi = v8[1];
    unsigned int edx = v8[2];
    unsigned int edi = v8[3];

    int ebp = 0;
    while ((ebx & 1) == 0) {
        unsigned int t;
        t = edi << 31;
        edx = (edx >> 1) | t;
        t = esi << 31;
        ebx = (ebx >> 1) | t;
        t = edx << 31;
        esi = (esi >> 1) | t;
        edi = edi >> 1;
        ebp++;
    }

    v30[0] = ebx;
    v30[1] = esi;
    v30[2] = edx;
    v30[3] = edi;

    v50[0] = 1;
    v50[1] = 0;
    v50[2] = 0;
    v50[3] = 0;

    v60[0] = a;
    v60[1] = b;
    v60[2] = c;
    v60[3] = 0;

    v70[0] = 0;
    v70[1] = 0;
    v70[2] = 0;
    v70[3] = 0;

    while (c != 0) {
        c--;
        for (i = 0; i < 4; i++) {
            v80[i] = sub_4CA340();
        }
        sub_4BC200(v80, v10, v80);
        sub_4BE0C0(v80, &a, v40, v20);

        if (v20[0] != v50[0] || v20[1] != v50[1] || v20[2] != v50[2] || v20[3] != v50[3]) {
            if (v10[0] != v50[0] || v10[1] != v50[1] || v10[2] != v50[2] || v10[3] != v50[3]) {
                if (ebp > 1) {
                    int m = ebp;
                    while (m > 1) {
                        m--;
                        if (v10[0] != v50[0] || v10[1] != v50[1] || v10[2] != v50[2] || v10[3] != v50[3]) {
                            sub_4BADD0(v10, v10, v90);
                            sub_4BB370(v70, v70, v90);
                            v40[0] = a;
                            v40[1] = b;
                            v40[2] = c;
                            v40[3] = 0;
                            if (v20[0] != v50[0] || v20[1] != v50[1] || v20[2] != v50[2] || v20[3] != v50[3]) {
                                return false;
                            }
                        } else {
                            break;
                        }
                    }
                }
                if (v10[0] != v50[0] || v10[1] != v50[1] || v10[2] != v50[2] || v10[3] != v50[3]) {
                    return false;
                }
            }
        }
    }
    return true;
}
