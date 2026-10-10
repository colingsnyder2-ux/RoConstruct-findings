// from server: 30% by colin
struct CXTButtonThemeOfficeXP {
    char pad0[0x20];
    unsigned int field20;
    char pad24[0x4];
    int field28;
    char pad2c[0x1c];
    int field48;
    int field4c;
    char pad50[0x4];
    int field54;
    int field58;
    char pad5c[0x20];
    int field7c;
    char pad80[0x8];
    char field88[0x30];
    char fieldb8[0x30];

    int sub_721fe0(void* arg0, int arg1);
};

extern "C" {
    int __stdcall CopyRect(void*, const void*);
    int __stdcall InflateRect(void*, int, int);
    unsigned int __stdcall GetCapture();
}

extern "C" void* __stdcall sub_7383be(void*);
extern "C" void __stdcall sub_6308b0(void*, void*, int);
extern "C" void __stdcall sub_6308aa(void*, void*, int, int);
extern "C" void* __stdcall sub_668f70();
extern "C" void* __stdcall sub_668770(void*, int);
extern "C" bool __stdcall sub_714a80(void*);

int CXTButtonThemeOfficeXP::sub_721fe0(void* arg0, int arg1) {
    char rect1[16];
    char rect2[16];
    void* hdc;
    int saved;
    int flag;
    int* p;

    hdc = sub_7383be(*(void**)((char*)arg0 + 0x18));
    CopyRect(rect1, (char*)arg0 + 0x1c);
    flag = *(int*)((char*)arg0 + 0x10) & 1;
    p = (int*)arg1;

    if (p[0x28] != 0 || GetCapture() == p[8]) {
        if (flag) {
            saved = (int)((char*)this + 0x88);
        } else {
            goto check2;
        }
    } else {
        if (flag) {
            saved = (int)((char*)this + 0x88);
        } else {
            goto check2;
        }
    }
    goto use_saved;

check2:
    if (p[0x1f] != 0) {
        if (p[0x28] == 0 || GetCapture() == p[8]) {
            saved = (int)((char*)this + 0x88);
        } else {
            saved = (int)((char*)this + 0xb8);
        }
    } else {
        saved = (int)((char*)this + 0x94);
    }

use_saved:
    {
        int v = *(int*)(saved + 8);
        if (v == -1) v = *(int*)(saved + 4);
        sub_6308b0(hdc, rect2, v);
    }

    if (*(int*)((char*)this + 0x7c) != 0) {
        int a = *(int*)((char*)this + 0x58);
        int b;
        if (a == -1) {
            b = *(int*)((char*)this + 0x54);
        } else {
            b = a;
        }
        if (a == -1) a = *(int*)((char*)this + 0x54);
        sub_6308aa(hdc, rect2, a, b);
    } else {
        int a = *(int*)((char*)this + 0x4c);
        int b;
        if (a == -1) {
            b = *(int*)((char*)this + 0x48);
        } else {
            b = a;
        }
        if (a == -1) a = *(int*)((char*)this + 0x48);
        sub_6308aa(hdc, rect2, a, b);
    }

    if (*(int*)((char*)this + 0x7c) != 0) {
        if (sub_714a80(arg0)) {
            void* v1 = sub_668770(sub_668f70(), 0xd);
            void* v2 = sub_668770(sub_668f70(), 0xd);
            sub_6308aa(hdc, rect2, (int)v2, (int)v1);
            InflateRect(rect2, -1, -1);
            void* v3 = sub_668770(sub_668f70(), 0xd);
            void* v4 = sub_668770(sub_668f70(), 0xd);
            sub_6308aa(hdc, rect2, (int)v4, (int)v3);
        }
    }

    return 1;
}
