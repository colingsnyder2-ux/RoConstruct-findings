// from server: 46% by colin
struct CXTPCommandBar {
    char pad[0xf4];
    int field_f4;
    char pad2[0x10];
    int field_108;
    int field_10c;
    int field_110;
    int field_114;
    int method_650b80(int* out);
};

extern "C" int __stdcall sub_643980();
extern "C" int __stdcall sub_64efd0(int, int);
extern "C" int __stdcall sub_64f130(int, int);

int CXTPCommandBar::method_650b80(int* out) {
    int local[2];
    int* p;
    int v;
    int* r;

    v = sub_643980();
    if (v == 0) {
        p = &field_108;
        if (field_108 != 0 || field_10c != 0) {
            goto done;
        }
        local[0] = 0x10;
        local[1] = 0x10;
        p = local;
        goto done;
    }

    if (field_f4 == 2) {
        p = &field_108;
        if (field_108 != 0 || field_10c != 0) {
            goto done;
        }
        r = (int*)(v + 0x74);
        if (r[0x74/4] != 0) {
            goto done;
        }
        p = &r[0x74/4];
        if (r[0x78/4] != 0) {
            goto done;
        }
        sub_64efd0(0, (int)local);
        p = local;
        goto done;
    }

    p = &field_108;
    if (field_108 == 0 && field_10c == 0) {
        int* q = (int*)(*(int*)(v + 0x74) + 0x64);
        if (q[0] == 0 && q[1] == 0) {
            sub_64efd0(0, (int)local);
        }
    }

    r = (int*)(*(int*)(v + 0x74));
    if (r[0x30/4] != 0 && field_110 == 0 && field_114 == 0) {
        if (sub_64f130(0, 0) != 0) {
            p = (int*)((char*)r + 0x6c);
            goto done;
        }
        sub_64efd0(1, (int)local);
        p = local;
    } else {
        p = (int*)((char*)r + 0x30);
    }

done:
    out[0] = p[0];
    out[1] = p[1];
    return (int)out;
}
