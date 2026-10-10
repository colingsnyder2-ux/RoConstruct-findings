// from server: 39% by colin
struct Vector3 {
    float x, y, z;
};

struct CFrame {
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    float x, y, z;
};

struct SlingshotTool {
    char pad[0x24];
    float x, y, z;
    void method(int, int, int);
};

extern "C" {
    int __cdecl sub_5E3DC0(int, int, float*);
    int __cdecl sub_509640(int, int, float*);
    int __cdecl sub_50A500();
    int __cdecl sub_5095D0(int, int);
    float __cdecl sub_50F3A0(float);
    int __cdecl sub_625110(float*, int);
    float __cdecl sub_5ABED0(float, float, float);
    int __cdecl sub_52FB80(int, int, int);
    double __cdecl sqrt(double);
    double __cdecl sin(double);
    double __cdecl cos(double);
}

extern float dword_797B38;
extern float dword_79FE50;
extern float dword_7A32E8;
extern float dword_7BCF28;
extern float dword_7C24D8;
extern float dword_8BD12C;
extern float dword_8BD130;
extern float dword_8BD134;
extern int dword_8BD138;
extern float dword_8C6DFC;
extern float dword_8C6E00;
extern float dword_8C6E04;
extern int dword_8C6E08;

void SlingshotTool::method(int a2, int a3, int a4) {
    float local18 = 0.0f;
    float local1c = 0.0f;
    float local20 = 0.0f;
    int edi = sub_5E3DC0(a2, 0, &local18);
    float local24, local28, local2c;
    if (edi != 0) {
        float dx = local18 - this->x;
        float dy = local1c - this->y;
        float dz = local20 - this->z;
        float len = 1.0f / (float)sqrt(dx*dx + dy*dy + dz*dz);
        local24 = dx * len;
        local28 = dy * len;
        local2c = dz * len;
    } else {
        float tmp = dword_7A32E8;
        float arr[3];
        sub_509640(a3, 2, arr);
        local24 = tmp * arr[0];
        local28 = tmp * arr[1];
        local2c = tmp * arr[2];
    }
    float f0 = local24;
    float f1 = local28;
    float f2 = local2c;
    float s = dword_797B38;
    float vx = f0 * s + this->x;
    float vy = f1 * s + this->y;
    float vz = f2 * s + this->z;
    local24 = vx;
    local28 = vy;
    local2c = vz;
    int ebx;
    if (edi == 0) {
        int r = sub_50A500();
        sub_5095D0(a4, r);
        ebx = 1;
    } else {
        float dx = local18 - vx;
        float dy = local1c - vy;
        float dz = local20 - vz;
        float len = (float)sqrt(dx*dx + dy*dy + dz*dz);
        float angle = sub_50F3A0(dword_79FE50);
        ebx = 1;
        if ((dword_8C6E08 & ebx) == 0) {
            dword_8C6E08 |= ebx;
            dword_8C6DFC = 0.0f;
            dword_8C6E00 = dword_7BCF28;
            dword_8C6E04 = 0.0f;
        }
        float tmp[3];
        sub_625110(&tmp[0], (int)&dword_8C6DFC);
        float t = tmp[1];
        float r = sub_5ABED0(dword_7C24D8, dz, dy);
        float sn = (float)sin(r);
        float cs = (float)cos(r);
        float nx = dx * cs;
        float nz = dz * sn;
        int rr = sub_50A500();
        sub_5095D0(a4, rr);
    }
    if ((dword_8BD138 & ebx) == 0) {
        dword_8BD138 |= ebx;
        dword_8BD12C = 0.0f;
        dword_8BD130 = 0.0f;
        dword_8BD134 = 0.0f;
    }
    float m0 = local24 * dword_7C24D8;
    float m1 = local28 * dword_7C24D8;
    float m2 = local2c * dword_7C24D8;
    float out[9];
    out[0] = m0;
    out[1] = m1;
    out[2] = m2;
    out[3] = dword_8BD12C;
    out[4] = dword_8BD130;
    out[5] = dword_8BD134;
    sub_52FB80(a4, (int)&out[0], (int)&out[3]);
}
