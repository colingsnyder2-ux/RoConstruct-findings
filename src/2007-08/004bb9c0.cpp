// from server: 54% by colin
extern "C" void __cdecl sub_4BB370(int*, int*, int*);

void __cdecl sub_4BB9C0(int a, int b, int* c, int* d) {
    int local[8];
    int i;

    sub_4BB370(&a, c, d);

    for (i = 0; i < 8; ++i) {
        if (d[i] == 0) {
            continue;
        }
        break;
    }
    if (i == 8) {
        for (i = 0; i < 8; ++i) {
            d[i] = c[i];
        }
        return;
    }

    sub_4BB370(&a, c, local);

    for (i = 0; i < 8; ++i) {
        if (local[i] == 0) {
            continue;
        }
        break;
    }
    if (i == 8) {
        return;
    }

    sub_4BB370(&a, c, d);

    for (i = 0; i < 8; ++i) {
        if (d[i] == 0) {
            continue;
        }
        break;
    }
    if (i == 8) {
        for (i = 0; i < 8; ++i) {
            d[i] = local[i];
        }
        return;
    }

    sub_4BB370(&a, c, local);

    for (i = 0; i < 8; ++i) {
        if (local[i] == 0) {
            continue;
        }
        break;
    }
    if (i == 8) {
        return;
    }
}
