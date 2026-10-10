// from server: 76% by colin
struct Explosion {
    char pad[0x10c];
    float field_10c;
    void setBlastRadius(float value);
};

extern float g_78fef0;
extern char g_8c6f54;

void __stdcall sub_444710(char* p);

void Explosion::setBlastRadius(float value) {
    float v;
    if (value < 0.0f) {
        v = 0.0f;
    } else if (value > g_78fef0) {
        v = g_78fef0;
    } else {
        v = value;
    }
    if (v != field_10c) {
        field_10c = v;
        sub_444710(&g_8c6f54);
    }
}
