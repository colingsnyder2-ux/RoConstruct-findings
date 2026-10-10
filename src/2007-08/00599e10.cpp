// from server: 52% by colin
struct VCamera {
    char pad[0x12c];
    int field_12c;
    void sub_599CC0(float);
    float* sub_509640(int, float*);

    void sub_599E10(int a1);
};

extern float g_7a32e8;
extern float g_7b153c;
extern float g_797eb0;
extern float g_7b1610;

float __stdcall sub_5AB2E0(float*);

void VCamera::sub_599E10(int a1)
{
    float v1 = g_7a32e8;
    float tmp[3];
    float* p = sub_509640(2, tmp);
    float x = p[0] * v1;
    float y = p[1] * v1;
    float z = p[2] * v1;
    float v2 = sub_5AB2E0(&x);
    float v3 = v2 * g_7b153c * g_797eb0;
    int iv = (int)v3;
    int total = iv + a1;
    float f = (float)total * g_7b1610 - v3;
    sub_599CC0(f);
}
