// from server: 63% by colin
struct CXTPCommandBar {
    int field_0;
    char pad_4[0x1c];
    int field_20;
    char pad_24[0xd4];
    int field_f8;
    char pad_fc[0x38];
    int field_134;

    int sub_6439b0();
    int sub_643980();
    int sub_645a70(int, int, int);
    int sub_63023e();
    int sub_67a9a0(int, int);

    int sub_6468a0(int a1, int a2, int a3);
};

struct CXTPCommandBarSite {
    int field_0;
    char pad_4[0x48];
    int field_4c;
    int sub_6329e0(int);
    int sub_6a0400(int, int);
};

struct CXTPCommandBarPopup {
    int sub_673610();
};

extern "C" int __stdcall ClientToScreen(int, int);

int CXTPCommandBar::sub_6468a0(int a1, int a2, int a3) {
    int result = this->sub_67a9a0(a2, a3);
    if (result == 0) {
        return this->sub_63023e();
    }
    int v = (*(int (__thiscall **)(int, int, int))(*(int *)result + 0xf0))(result, a2, a3);
    if (v != 0) {
        return 0;
    }
    if (this->field_134 == 0) {
        return this->sub_63023e();
    }
    if (this->sub_6439b0() == 0) {
        return this->sub_63023e();
    }
    if ((*(int (__thiscall **)(int, int))(*(int *)result + 0x80))(result, 0) == 0) {
        return 0;
    }
    if ((*(int (__thiscall **)(int))(*(int *)result + 0x128))(result) == 0) {
        return 0;
    }
    this->sub_645a70(0, -1, 0);
    (*(int (__thiscall **)(CXTPCommandBar *, int, int))(*(int *)this + 0x148))(this, -1, 0);
    CXTPCommandBarSite *site = (CXTPCommandBarSite *)this->sub_643980();
    int v2 = site->field_4c;
    site->sub_6329e0(result);
    if (site->sub_6a0400(v2, 0) != 0) {
        int pt[2];
        ClientToScreen(this->field_20, (int)pt);
        CXTPCommandBarPopup *popup = (CXTPCommandBarPopup *)site->sub_6a0400(v2, pt[0]);
        popup->sub_673610();
    }
    return 0;
}
