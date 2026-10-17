// from server: 24% by colin
struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3(float, float, float);
    Vector3 operator*(float) const;
    Vector3 operator+(const Vector3&) const;
    Vector3& operator+=(const Vector3&);
    Vector3& operator*=(float);
    float magnitude() const;
    Vector3 unit() const;
};

struct CoordinateFrame {
    Vector3 translation;
    float pad[4];
    Vector3 lookVector;
    Vector3 rightVector;
    Vector3 upVector;
    CoordinateFrame();
    CoordinateFrame(const Vector3&, const Vector3&, const Vector3&, const Vector3&);
    Vector3 pointToWorldSpace(const Vector3&) const;
    Vector3 vectorToWorldSpace(const Vector3&) const;
    void lookAt(const Vector3&, const Vector3&);
};

struct ArrowButton {
    char pad0[4];
    float dt;
    char pad1[4];
    bool active;
    char pad2[4];
    Vector3 pos30;
    Vector3 pos3c;
    Vector3 pos48;
    Vector3 pos54;
    Vector3 pos64;
    Vector3 pos70;
    float f7c;
    float f80;
    Vector3 v84;
    Vector3 v90;
    Vector3 v9c;
    Vector3 va8;
    void update();
};

extern float g_84c220;
extern float g_84c224;
extern float g_819bac;
extern float g_97d94c;
extern float g_97d950;
extern float g_97d954;
extern unsigned int g_97d958;

Vector3 ArrowButton_update_helper1(const Vector3&, const Vector3&);
Vector3 ArrowButton_update_helper2(const Vector3&, const Vector3&);
void ArrowButton_update_helper3(CoordinateFrame*, const Vector3&);

void ArrowButton::update()
{
    if (!(g_97d958 & 1)) {
        g_97d958 |= 1;
        float v = g_84c224;
        g_97d94c = v;
        g_97d950 = v;
        g_97d954 = v;
    }

    if (active) {
        ((void (__thiscall*)(ArrowButton*))0x658d20)(this);
    }

    float scale = g_84c220;
    pos64.x *= scale;
    pos64.y *= scale;
    pos64.z *= scale;

    Vector3 a = pos70 * dt;
    Vector3 b = v90 * dt;
    Vector3 c = v9c * dt;
    Vector3 d = va8;
    pos64 += a + b + c + d;

    Vector3 r1 = ArrowButton_update_helper1(pos64, pos70);
    pos48.x = r1.x + g_97d94c;
    pos48.y = r1.y + g_97d950;
    pos48.z = r1.z + g_97d954;

    Vector3 r2 = ArrowButton_update_helper2(pos48, pos54);
    float s = g_819bac;
    Vector3 r2s = r2 * s;
    Vector3 r2d = r2s * dt;
    pos54 += r2d;

    float len = pos54.magnitude();
    if (len != 0.0f) {
        pos54 *= 1.0f / len;
    }

    ((void (__thiscall*)(Vector3*, Vector3*))0x5dd6d0)(&pos54, &pos70);

    Vector3 e = v84 * dt;
    Vector3 f = v90;
    Vector3 g = v9c;
    Vector3 h = va8;
    Vector3 i = pos70 * f7c;
    pos3c += e + i + g + h;

    Vector3 j = pos3c * dt;
    pos30 += j;

    f80 = 0.0f;
    v84.x = 0.0f;
    v84.y = 0.0f;
    v84.z = 0.0f;
    v90.x = 0.0f;
    v90.y = 0.0f;
    v90.z = 0.0f;
    v9c.x = 0.0f;
    v9c.y = 0.0f;
    v9c.z = 0.0f;
    va8.x = 0.0f;
    va8.y = 0.0f;
    va8.z = 0.0f;

    pos64.x += g_97d94c;
    pos64.y += g_97d950;
    pos64.z += g_97d954;

    pos3c.x += g_97d94c;
    pos3c.y += g_97d950;
    pos3c.z += g_97d954;
}
