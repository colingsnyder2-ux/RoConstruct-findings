// from server: 31% by colin
struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct CoordinateFrame {
    Vector3 translation;
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
};

struct Camera {
    char pad0[0x174];
    CoordinateFrame frame;      // 0x174
    Vector3 pos;                // 0x198
    Vector3 focus;              // 0x1a4
    Vector3 target;             // 0x1c8
    int mode;                   // 0x1d4
    char pad1[0x1e4 - 0x1d8];
    unsigned char flag;         // 0x1e4

    void update();
    void getTransform(CoordinateFrame* out);
    Vector2 xz(Vector3* v);
    void lookAt(const Vector3& eye, const Vector3& target, const Vector3& up);
    void setFrame(const CoordinateFrame& cf);
    int getSubject();
};

extern "C" double __cdecl sqrt(double);

void Camera::update() {
    int m = mode - 1;
    if ((unsigned)m > 4) {
        // fallthrough to end
    } else {
        switch (m) {
        case 0:
            getTransform(0);
            break;
        case 1: {
            Vector3 d;
            d.x = pos.x - target.x;
            d.y = pos.y - target.y;
            d.z = pos.z - target.z;
            Vector2 v = xz(&d);
            float len = (float)sqrt((double)(v.x * v.x + v.y * v.y));
            getTransform(0);
            CoordinateFrame cf;
            lookAt(pos, target, Vector3());
            Vector2 dir = xz(&d);
            pos.x = target.x + (-dir.x) * len;
            pos.y = target.y + (-dir.y) * len;
            pos.z = target.z + d.z;
            break;
        }
        case 2: {
            Vector3 old = target;
            getTransform(0);
            pos.x += target.x - old.x;
            pos.y += target.y - old.y;
            pos.z += target.z - old.z;
            break;
        }
        case 3: {
            Vector3 diff;
            diff.x = target.x - pos.x;
            diff.y = target.y - pos.y;
            diff.z = target.z - pos.z;
            Vector2 v = xz(&diff);
            float len = (float)sqrt((double)(v.x * v.x + v.y * v.y));
            getTransform(0);
            Vector2 a = xz(&pos);
            Vector2 b = xz(&target);
            Vector3 dir;
            dir.x = b.x - a.x;
            dir.y = b.y - a.y;
            dir.z = 0;
            Vector2 nd = xz(&dir);
            pos.x = target.x - nd.x * len;
            pos.y = target.y - nd.y * len;
            pos.z = target.z - diff.z;
            break;
        }
        case 4: {
            int s = getSubject();
            if (s) {
                unsigned char f = flag;
                void** vt = *(void***)s;
                typedef void (__thiscall *Fn)(void*, void*, void*, unsigned char);
                Fn fn = (Fn)vt[5];
                fn((void*)s, (void*)&frame, (void*)&focus, f);
            }
            flag = 0;
            break;
        }
        }
    }
    setFrame(frame);
}
