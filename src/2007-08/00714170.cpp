// from server: 35% by colin
struct CXTCaptionButtonThemeOfficeXP {
    char pad0[0x24];
    int m_field24;
    int m_field28;
    char pad2c[0x2c];
    int m_field54;
    int m_field58;
    char pad5c[0x20];
    int m_field7c;

    int f(int a1, int a2);
};

struct Inner {
    char pad0[0x10];
    int m_field10;
    char pad14[0x4];
    int m_field18;
    char pad1c[0x4];
    int m_field20;
    char pad24[0x30];
    int m_field54;
    int m_field58;
    char pad5c[0x20];
    int m_field7c;
    char pad80[0x20];
    int m_fielda0;
    char pada4[0x8];
    int m_fieldac;
};

extern "C" {
    int __stdcall GetCapture();
    int __stdcall IsWindow(int hWnd);
    void __stdcall CopyRect(int* lpDstRect, const int* lpSrcRect);
}

extern "C" int __stdcall sub_7383be(int a1);
extern "C" int __stdcall sub_6308b0(int a1, int* a2, int a3);
extern "C" int __stdcall sub_6308aa(int a1, int* a2, int a3, int a4);
extern "C" int __stdcall sub_668f70();
extern "C" int __stdcall sub_668770(int a1);

int CXTCaptionButtonThemeOfficeXP::f(int a1, int a2)
{
    int local1;
    int local2;
    int local3;
    int local4;

    int v = sub_7383be(*(int*)(a1 + 0x18));
    int ebp = v;

    CopyRect(&local1, (const int*)(a1 + 0x1c));

    int ebx = *(int*)(a1 + 0x10);
    Inner* p = (Inner*)a2;

    if (p->m_fielda0 == 0) {
        if (GetCapture() != p->m_field20) {
            if (ebx & 1) {
                int h = sub_668f70();
                sub_668770(0x21);
                sub_6308b0(ebp, &local1, h);
            } else {
                int h = sub_668f70();
                sub_668770(0x1f);
                sub_6308b0(ebp, &local1, h);
            }
            int h1 = sub_668f70();
            int r1 = sub_668770(0x20);
            int h2 = sub_668f70();
            int r2 = sub_668770(0x20);
            sub_6308aa(ebp, &local1, r1, r2);
            return 1;
        }
    }

    if (ebx & 1) {
        int h = sub_668f70();
        sub_668770(0x21);
        sub_6308b0(ebp, &local1, h);
    } else {
        int h = sub_668f70();
        sub_668770(0x1f);
        sub_6308b0(ebp, &local1, h);
    }

    int h1 = sub_668f70();
    int r1 = sub_668770(0x20);
    int h2 = sub_668f70();
    int r2 = sub_668770(0x20);
    sub_6308aa(ebp, &local1, r1, r2);
    return 1;
}
