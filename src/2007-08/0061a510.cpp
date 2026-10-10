// from server: 24% by colin
struct Vec3 { float x, y, z; };
struct Mat3 { float m[9]; };

struct Body {
    char pad0[0x1c];
    void* simBody;
    char pad20[0x58 - 0x20];
    float unk58;
    char pad5c[0x7c - 0x5c];
    float unk7c;
    char pad80[0x84 - 0x80];
    char geo[0x100];
};

struct ContactConnector {
    Body* body;
    char pad4[4];
    char geoPair[0x50 - 8];
    float friction[4];
    float unk60, unk64, unk68;
    float unk6c, unk70, unk74;
    float unk78;
    float unk7c;
    char pad80[0x84 - 0x80];
    char geo[0x100];

    void updateContactPoint();
};

extern "C" {
    void __stdcall sub_5095d0(void* out, void* in);
    void __stdcall sub_530100(void* self);
    void __stdcall sub_5aa860(void* self, void* arg);
    void* __stdcall sub_5aa880(void* out, void* in);
    void __stdcall sub_5aad00(void* out, void* a, void* b);
    void __stdcall sub_5aad40(void* out, void* a);
    void __stdcall sub_61a2b0(void* out, void* a, void* b);
    void __stdcall sub_624d70(void* self);
    void __stdcall sub_624d80(void* self);
    void __stdcall sub_625100(void* self);
    void __stdcall sub_625110(void* out, void* in);
}

extern float g_8bd12c;
extern float g_8bd130;
extern float g_8bd134;
extern int g_8bd138;
extern float g_8c6dfc;
extern float g_8c6e00;
extern float g_8c6e04;
extern int g_8c6e08;
extern float g_7bcf28;

void ContactConnector::updateContactPoint()
{
    float zero = 0.0f;
    float* src;
    Body* b = this->body;
    void* sb = b->simBody;
    if (sb) {
        sub_624d70(sb);
        src = (float*)sb;
    } else {
        if (!(g_8bd138 & 1)) {
            g_8bd138 |= 1;
            g_8bd12c = zero;
            g_8bd130 = zero;
            g_8bd134 = zero;
        }
        src = &g_8bd12c;
    }
    float v0 = src[0];
    float v1 = src[1];
    float v2 = src[2];

    Body* b2 = this->body;
    sub_530100(b2);

    float tmp[3];
    tmp[0] = v0;
    tmp[1] = v1;
    tmp[2] = v2;

    char out[0x40];
    sub_61a2b0(out, tmp, (char*)b2 + 0x84);

    char* dst = (char*)this + 8;
    float* fsrc = (float*)out;
    float* fdst = (float*)dst;
    for (int i = 0; i < 9; i++) fdst[i] = fsrc[i];
    fdst[9] = fsrc[9];
    fdst[10] = fsrc[10];
    fdst[11] = fsrc[11];
    fdst[12] = fsrc[12];
    fdst[13] = fsrc[13];
    fdst[14] = fsrc[14];
    fdst[15] = fsrc[15];
    fdst[16] = fsrc[16];
    fdst[17] = fsrc[17];

    float* fr = this->friction;
    sub_5aa880(fr, dst);
    sub_5aa860(fr, fr);

    float a = fr[0], bb = fr[1], c = fr[2], d = fr[3];
    float len = a*a + bb*bb + c*c + d*d;
    float inv = 1.0f / len;
    fr[0] = a * inv;
    fr[1] = bb * inv;
    fr[2] = c * inv;
    fr[3] = d * inv;

    Body* b3 = this->body;
    sub_530100(b3);
    void* sb3 = b3->simBody;
    float* p;
    if (sb3) {
        sub_625100(sb3);
        p = (float*)sb3;
    } else {
        p = (float*)((char*)b3 + 0x58);
    }
    char m1[0x40];
    sub_5095d0(m1, p);

    char m2[0x40];
    sub_5aad00(m2, m1, (char*)b3 + 0x84);

    float r0 = this->unk60;
    float r1 = this->unk64;
    float r2 = this->unk68;
    float c44 = this->friction[0];
    float c48 = this->friction[1];
    float c4c = this->friction[2];

    float* mm = (float*)m2;
    float o0 = c44*mm[0] + c4c*mm[4] + c48*mm[8];
    float o1 = c44*mm[1] + c4c*mm[5] + c48*mm[9];
    float o2 = c44*mm[2] + c4c*mm[6] + c48*mm[10];

    this->unk60 = o0;
    this->unk64 = o1;
    this->unk68 = o2;

    Body* b4 = this->body;
    void* sb4 = b4->simBody;
    float pen;
    if (sb4) {
        sub_624d80(sb4);
        pen = *(float*)sb4;
    } else {
        pen = b4->unk7c;
    }
    this->unk78 = 1.0f / pen;

    Body* b5 = this->body;
    void* sb5 = b5->simBody;
    float* q;
    if (sb5) {
        sub_625100(sb5);
        q = (float*)sb5;
    } else {
        q = (float*)((char*)b5 + 0x58);
    }
    char m3[0x40];
    sub_5095d0(m3, q);

    float m4[3];
    sub_5aad40(m4, m3);

    this->unk6c = 1.0f / m4[0];
    this->unk70 = 1.0f / m4[1];
    this->unk74 = 1.0f / m4[2];

    Body* b6 = this->body;
    void* sb6 = b6->simBody;
    float pen2;
    if (sb6) {
        sub_624d80(sb6);
        pen2 = *(float*)sb6;
    } else {
        pen2 = b6->unk7c;
    }

    if (!(g_8c6e08 & 1)) {
        g_8c6e08 |= 1;
        g_8c6dfc = 0.0f;
        g_8c6e00 = g_7bcf28;
        g_8c6e04 = 0.0f;
    }

    float tmp2[3];
    sub_625110(tmp2, &g_8c6dfc);

    this->unk7c = tmp2[1] * pen2;
    *((char*)this + 4) = 0;
}
