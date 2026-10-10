// from server: 62% by tester
struct CXTPControlComboBoxPopupBar {
    char pad_0[0x5c];
    int field_5c;
    char pad_60[0x3c];
    int field_9c;
    int sub_6456a0(int, int, int);
};

extern "C" int __stdcall PtInRect(const void*, int, int);
extern "C" int __stdcall ScreenToClient(int, void*);

int sub_67ffa0();
int sub_67a9a0(int, int, int);
int sub_7383c4(int);

int CXTPControlComboBoxPopupBar::sub_6456a0(int a1, int a2, int a3) {
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    int local_4;
    int v5;
    int v6;
    int v7;

    if (a1 == 0) {
        return 0x80070057;
    }

    *(unsigned short*)a1 = 0;

    v5 = (int)((char*)this - 0x5c);
    if (v5 == 0 || *(int*)(v5 + 0x20) == 0) {
        return 1;
    }

    sub_67ffa0();
    local_18 = a2;
    local_14 = a3;
    if (PtInRect((const void*)&local_18, a2, a3) == 0) {
        return 1;
    }

    *(unsigned short*)a1 = 3;
    *(int*)(a1 + 8) = 0;

    local_10 = a2;
    local_c = a3;
    ScreenToClient(*(int*)((char*)this - 0x3c), &local_10);

    v6 = local_10;
    v7 = local_c;

    v5 = sub_67a9a0(*(int*)((char*)this + 0x9c), v6, v7);
    if (v5 != 0) {
        *(unsigned short*)a1 = 9;
        *(int*)(a1 + 8) = sub_7383c4(v5);
    }

    return 0;
}
