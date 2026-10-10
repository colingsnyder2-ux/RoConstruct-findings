// from server: 31% by colin
// roc 2007-08 005062b0  unit: seg_00500000  size: 1117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005062b0

extern "C" {
    void* __cdecl malloc(unsigned int);
    void __cdecl free(void*);
}

struct String {
    char buf[16];
    unsigned int len;
    unsigned int cap;
    String();
    String(const char*);
    ~String();
};

struct Image {
    int width;
    int height;
    unsigned char* data;
    int format;
    Image();
    ~Image();
};

extern "C" {
    void __stdcall sub_50c0e0(void*);
    void __stdcall sub_50e950(void*, void*, int, void*);
    void __stdcall sub_50efa0(void*, void*);
    void __stdcall sub_50ed40(void*);
    int __cdecl sub_630d60();
    void __stdcall sub_630a1e();
    void __cdecl sub_630b9e(void*, const char*);
    void __stdcall sub_502970(void*, void*);
    void __stdcall sub_46f570(void*, void*, void*);
    void __stdcall sub_484a40(void*);
    void* __stdcall sub_77e6a4();
    void* __stdcall sub_77e6ac(void*);
    int __stdcall sub_77e5f8(void*, const char*);
    int __stdcall sub_77e61c(void*, const char*);
    void* __stdcall sub_77e698(void*, const char*);
}

extern double g_78d3a8;
extern char g_7a05c0[];
extern char g_7a05c4[];
extern char g_7a05c8[];
extern char g_7a0558[];
extern char g_84b4a4[];

struct Seg00500000 {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void method(int param);
};

void Seg00500000::method(int param)
{
    char local_13c[0x98];
    char local_a4[0x20];
    char local_84[0x20];
    char local_64[0x20];
    char local_44[0x20];
    char local_24[0x20];
    char local_04[0x20];
    double dbl_1c;
    int int_18;
    int int_14;
    int int_12;
    int int_10;
    int int_8;
    int int_4;
    int int_0;
    int i;
    int j;
    int w;
    int h;
    unsigned char* p;
    double scale;
    int count;

    sub_50c0e0(local_13c);

    local_a4[0] = 1;
    local_a4[1] = 1;
    local_a4[2] = 1;
    local_a4[3] = 0;
    local_a4[4] = 0;
    local_a4[5] = 1;
    local_a4[6] = 1;

    sub_77e6a4();

    local_84[0] = 0;
    local_84[1] = 0;
    local_84[2] = 0;
    local_84[3] = 0;
    local_84[4] = 0;
    local_84[5] = 0;
    local_84[6] = 0;
    local_84[7] = 0;
    local_84[8] = 0;
    local_84[9] = 0;
    local_84[10] = 0;
    local_84[11] = 0;
    local_84[12] = 0;
    local_84[13] = 0;
    local_84[14] = 0;
    local_84[15] = 0;
    local_84[16] = 0;
    local_84[17] = 0;
    local_84[18] = 0;
    local_84[19] = 0;
    local_84[20] = 0;
    local_84[21] = 0;
    local_84[22] = 0;
    local_84[23] = 0;
    local_84[24] = 0;
    local_84[25] = 0;
    local_84[26] = 0;
    local_84[27] = 0;
    local_84[28] = 0;
    local_84[29] = 0;
    local_84[30] = 0;
    local_84[31] = 0;

    local_a4[7] = 0;
    local_a4[8] = 0x23;
    local_a4[9] = 1;
    local_a4[10] = 0;

    sub_50e950(local_64, local_13c, 0, local_a4);

    sub_50efa0(local_44, local_84);

    sub_50ed40(local_44);
    w = sub_630d60();
    sub_50ed40(local_44);
    h = sub_630d60();

    if (sub_77e61c(local_44, g_7a05c8)) {
        sub_50ed40(local_44);
        dbl_1c = (double)w;
        scale = g_78d3a8;
        if (w < 0 || h < 0 || scale <= 0.0 || scale >= 1.0) {
            goto error;
        }
        if (scale != 1.0) {
            dbl_1c = scale;
        }
    } else {
        dbl_1c = g_78d3a8;
        scale = g_78d3a8;
        if (w < 0 || h < 0 || scale <= 0.0 || scale >= 1.0) {
            goto error;
        }
    }

    fieldC = h;
    field8 = w;
    field10 = 3;
    field4 = (int)malloc(w * h * 3);

    count = field8 * fieldC;
    i = 0;
    j = 0;
    while (i < count) {
        p = (unsigned char*)field4;
        if (sub_77e5f8(local_44, g_7a05c4)) {
            sub_50ed40(local_44);
            scale = g_78d3a8 / dbl_1c;
            p[j] = (unsigned char)(int)(scale * 255.0);
            sub_50ed40(local_44);
            p[j + 1] = (unsigned char)(int)(scale * 255.0);
            sub_50ed40(local_44);
            p[j + 2] = (unsigned char)(int)(scale * 255.0);
        } else if (sub_77e5f8(local_44, g_7a05c8)) {
            sub_50ed40(local_44);
            p[j] = (unsigned char)(int)(g_78d3a8 / dbl_1c * 255.0);
            p[j + 1] = p[j];
            p[j + 2] = p[j];
        } else if (sub_77e5f8(local_44, g_7a05c0)) {
            sub_50ed40(local_44);
            p[j] = (unsigned char)(int)(255.0 * dbl_1c);
            p[j + 1] = p[j];
            p[j + 2] = p[j];
        }
        i++;
        j += 3;
    }

    sub_77e6ac(local_84);
    sub_484a40(local_44);
    sub_77e6ac(local_a4);
    sub_77e6ac(local_13c);
    return;

error:
    sub_77e698(local_24, g_7a0558);
    sub_502970(local_44, local_24);
    sub_46f570(local_04, local_44, local_24);
    sub_630b9e(local_04, g_84b4a4);
}
