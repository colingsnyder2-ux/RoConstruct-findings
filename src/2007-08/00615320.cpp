// from server: 38% by colin
struct S {
    char pad0[0x10];
    int field10;
    char pad14[0x1c];
    int field30;
    int field34;
    int f(int a, int b);
};

extern "C" int __stdcall sub_614F90(int);
extern "C" int __stdcall sub_615170(int);
extern "C" int __stdcall sub_615320(int, int, int);
extern "C" int __stdcall sub_617520(int, const char*, int);
extern "C" int __stdcall sub_6189F0(int);
extern "C" int __stdcall sub_629B10(int, int, int);
extern "C" int __stdcall sub_629BB0(int, int, int);
extern "C" int __stdcall sub_629C20(int, int, int, int);

extern unsigned char data_7C3350[];
extern unsigned char data_7C3351[];
extern const char data_7C3430[];

int S::f(int a, int b) {
    int result;
    int i;
    int v;

    *(unsigned short*)(this->field34 + 0x34) += 1;
    if (*(unsigned short*)(this->field34 + 0x34) > 0xc8) {
        sub_617520((int)this, data_7C3430, 0);
    }

    if (this->field10 == 0x23) {
        result = 2;
        goto label_53FB;
    }
    if (this->field10 == 0x2d) {
        result = 0;
        goto label_53FB;
    }
    if (this->field10 == 0x10e) {
        goto label_53FB;
    }

    sub_614F90(b);
    result = sub_615170(this->field10);

    while (result != 0xf) {
        if (data_7C3350[result * 2] <= (unsigned int)a) {
            break;
        }
        sub_6189F0((int)this);
        sub_629BB0(this->field30, result, b);
        v = data_7C3351[result * 2];
        i = sub_615320((int)this, (int)&a, v);
        sub_629C20(this->field30, result, b, (int)&a);
        result = i;
    }

    *(unsigned short*)(this->field34 + 0x34) -= 1;
    return result;

label_53FB:
    sub_6189F0((int)this);
    sub_615320((int)this, b, 8);
    sub_629B10(this->field30, result, b);
    goto label_537C;

label_537C:
    result = sub_615170(this->field10);
    while (result != 0xf) {
        if (data_7C3350[result * 2] <= (unsigned int)a) {
            break;
        }
        sub_6189F0((int)this);
        sub_629BB0(this->field30, result, b);
        v = data_7C3351[result * 2];
        i = sub_615320((int)this, (int)&a, v);
        sub_629C20(this->field30, result, b, (int)&a);
        result = i;
    }

    *(unsigned short*)(this->field34 + 0x34) -= 1;
    return result;
}
