// from server: 67% by colin
struct CXTPControlGallery {
    char pad0[0xfc];
    int field_fc;
    char pad1[0x1e4 - 0x100];
    int field_1e4;

    int method_6b3fc0(int, int);
    int method_6b6a60(int, int);
    int method_6b6c30(int, int);
    int method_6b6dd0(int, int);
    int method_6b6f10(int);
    int method_6b7350(int, int);
};

extern "C" int __stdcall sub_681020(int, int*);
extern "C" short __stdcall GetKeyState(int);

int CXTPControlGallery::method_6b7350(int arg1, int arg2) {
    int local;
    int v;

    if (((int (__thiscall *)(CXTPControlGallery*))*(void**)(*(int*)this + 0x74))(this) == 0)
        return 0;

    sub_681020(this->field_fc, &local);

    v = local - 9;
    if ((unsigned)v > 0x1f)
        return 0;

    switch (v) {
    case 0:
        this->method_6b6f10(this->method_6b3fc0(1, -1));
        return 1;
    case 1:
        this->method_6b6f10(this->method_6b3fc0(-1, -1));
        return 1;
    case 2:
        this->method_6b6f10(this->method_6b6a60(this->field_1e4, -1));
        return 1;
    case 3:
        this->method_6b6f10(this->method_6b6a60(this->field_1e4, 1));
        return 1;
    case 4:
        {
            int r = this->method_6b6dd0(this->field_1e4, -1);
            if (r == -1)
                return 0;
            this->method_6b6f10(r);
            return 1;
        }
    case 5:
        {
            int r = this->method_6b6dd0(this->field_1e4, 1);
            if (r == -1)
                return 0;
            this->method_6b6f10(r);
            return 1;
        }
    case 6:
        this->method_6b6f10(this->method_6b6c30(this->field_1e4, -1));
        return 1;
    case 7:
        this->method_6b6f10(this->method_6b6c30(this->field_1e4, 1));
        return 1;
    case 8:
        if (GetKeyState(0x10) >= 0) {
            int r = this->method_6b3fc0(this->field_1e4, 1);
            if (r <= this->field_1e4)
                return 0;
            this->method_6b6f10(r);
            return 1;
        } else {
            int r = this->method_6b3fc0(this->field_1e4, -1);
            if (r >= this->field_1e4)
                return 0;
            this->method_6b6f10(r);
            return 1;
        }
    case 9:
        ((void (__thiscall *)(CXTPControlGallery*))*(void**)(*(int*)this + 0x98))(this);
        return 0;
    default:
        return 0;
    }
}
