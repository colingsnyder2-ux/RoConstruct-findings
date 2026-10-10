// from server: 48% by colin
// roc 2007-08 0066bfd0  unit: CRobloxControlColorSelector  size: 902 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066bfd0

struct CRobloxControlColorSelector {
    void sub_66BFD0(int);
};

extern "C" int __stdcall sub_685720(int, int, int, int);
extern "C" int __stdcall sub_685780(int, int, int, int);
extern "C" int __stdcall sub_6857C0(int, int, int, int);
extern "C" int __stdcall sub_6858A0(int, int, int);
extern "C" int __stdcall sub_63A5A0(int, int);
extern "C" int __stdcall sub_6321F0(int, int, int);
extern "C" int __stdcall sub_64DA00(int);
extern "C" int __stdcall sub_6301E4(int);

void CRobloxControlColorSelector::sub_66BFD0(int a2)
{
    int* p = (int*)a2;
    int v4 = *(int*)(a2 + 0x20);
    int v5 = *(int*)(v4 + 0x24);

    sub_685720(a2, 0x787edc, (int)((char*)this + 0xf8), 1);
    sub_685720(a2, 0x7c6dc0, (int)((char*)this + 0x84), -1);

    if (*(int*)(a2 + 0x24) != 0) {
        int v6 = *(int*)((char*)this + 0x84);
        int v7 = *(int*)(v5 + 0xbc);
        int v8 = sub_63A5A0(v7, v6);
        if (v8 != 0) {
            int v9 = *(int*)((char*)this + 0xb8);
            (*(void(**)(int))v9)(v8);
        }
    }

    sub_685720(a2, 0x7cad0c, (int)((char*)this + 0x88), 0);
    sub_685780(a2, 0x7cafd8, (int)((char*)this + 0x98), 0);
    sub_685720(a2, 0x7cafd4, (int)((char*)this + 0x7c), 0);
    sub_685720(a2, 0x7cae20, (int)((char*)this + 0xd4), 0);
    sub_685720(a2, 0x7cafc8, (int)((char*)this + 0xd0), 0);
    sub_6857C0(a2, 0x7c8090, (int)((char*)this + 0xd8), 0x785954);
    sub_6857C0(a2, 0x7cacf4, (int)((char*)this + 0xe0), 0x785954);
    sub_6857C0(a2, 0x7cace8, (int)((char*)this + 0xe8), 0x785954);
    sub_6857C0(a2, 0x7cacd8, (int)((char*)this + 0xec), 0x785954);
    sub_6857C0(a2, 0x7cafbc, (int)((char*)this + 0xf0), 0x785954);
    sub_685720(a2, 0x7cafac, (int)((char*)this + 0x90), 0);
    sub_6857C0(a2, 0x7caf9c, (int)((char*)this + 0xdc), 0x785954);

    if (*(int*)(a2 + 0x28) > 1) {
        sub_6857C0(a2, 0x7caccc, (int)((char*)this + 0x104), 0x785954);
    }

    if (*(int*)((char*)this + 0x90) > 0) {
        int v10 = (*(int(**)(int))(*p + 0x70))(a2);
        int v11 = *(int*)((char*)this + 0x90);
        int v12 = sub_6321F0(*(int*)((char*)this + 0x90), v10, 0);
        sub_64DA00(v12);
        if (v10 != 0) {
            sub_6301E4(v10);
        }
    }

    if (*(int*)(a2 + 0x28) > 3) {
        if (*(int*)(a2 + 0x24) == 0) {
            int v13 = (*(int(**)(int))(*p + 0x88))(a2);
            if (v13 != 0) {
                if (*(int*)((char*)this + 0x134) == 0) {
                    goto skip1;
                }
            }
        }
        sub_6858A0(a2, 0x7caf78, (int)((char*)this + 0x128));
    skip1:
        if (*(int*)(a2 + 0x24) == 0) {
            int v14 = (*(int(**)(int))(*p + 0x88))(a2);
            if (v14 != 0) {
                if (*(int*)((char*)this + 0x118) == 0) {
                    goto skip2;
                }
            }
        }
        sub_6858A0(a2, 0x7caf60, (int)((char*)this + 0x10c));
    skip2:
        sub_685780(a2, 0x7caf54, (int)((char*)this + 0x108), 0);
    }

    if (*(int*)(a2 + 0x28) > 6) {
        sub_685780(a2, 0x7caf40, (int)((char*)this + 0x150), 1);
    }

    if (*(int*)(a2 + 0x28) > 7) {
        sub_685720(a2, 0x7caf34, (int)((char*)this + 0x148), -1);
    }

    if (*(int*)(a2 + 0x28) < 0x12) {
        if (*(int*)((char*)this + 0x148) == 0) {
            *(int*)((char*)this + 0x148) = -1;
        }
    }

    if (*(int*)(a2 + 0x28) > 0x10) {
        sub_685720(a2, 0x7cad04, (int)((char*)this + 0x8c), 0);
    }

    if (*(int*)(a2 + 0x28) > 0x11) {
        sub_685720(a2, 0x7cae18, (int)((char*)this + 0x144), 0);
    }

    if (*(int*)(a2 + 0x28) > 0x12) {
        sub_685720(a2, 0x797ca8, (int)((char*)this + 0x15c), 0);
        sub_685720(a2, 0x797ca0, (int)((char*)this + 0x160), 0);
        sub_685720(a2, 0x7caf1c, (int)((char*)this + 0x164), 0);
    }

    if (*(int*)(a2 + 0x28) > 0x16) {
        sub_6857C0(a2, 0x7caf08, (int)((char*)this + 0xe4), 0x785954);
    }
}
