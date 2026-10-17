// from server: 30% by colin
struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
    Vector2 xy() const;
};

extern "C" double __stdcall ceil(double);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

float sub_4f1ff0(int mode);

struct S {
    char pad[0x10];
    unsigned int flags;
    void method(float a, float b, float c, int d, int e);
};

void sub_4f35d0(S* self, Vector3* v, Vector2* uv, float* extra, int a, int b);
void sub_4f2ef0(S* self, Vector3* v, Vector2* uv, float* extra, int a, int b, short c);

void S::method(float a, float b, float c, int d, int e)
{
    unsigned int mode = (this->flags >> 15) & 7;

    float fa = a < 0.0f ? -a : a;
    float fb = b < 0.0f ? -b : b;
    float fc = c < 0.0f ? -c : c;

    int idx;
    if (e == 0) {
        idx = (fa < fb) ? 1 : 0;
    } else {
        idx = 0;
    }

    int count;
    if (e == 0 && mode != 0) {
        float vals[3];
        vals[0] = fa;
        vals[1] = fb;
        vals[2] = fc;
        count = (int)ceil((double)(vals[idx] * g_819bac));
    } else {
        count = 1;
    }

    float fvals[3];
    fvals[0] = fa;
    fvals[1] = fb;
    fvals[2] = fc;

    float out[3];
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;

    float step[3];
    step[0] = 0.0f;
    step[1] = 0.0f;
    step[2] = 0.0f;

    float cur[3];
    cur[0] = 0.0f;
    cur[1] = 0.0f;
    cur[2] = 0.0f;

    float prev[3];
    prev[0] = 0.0f;
    prev[1] = 0.0f;
    prev[2] = 0.0f;

    if (d == 0) {
        if (mode == 0) {
            out[0] = g_83a3e4;
            out[1] = g_819bac;
            out[2] = g_819bac;
            cur[0] = g_819bac;
            cur[1] = g_819bac;
            cur[2] = g_819bac;
        } else {
            out[idx] = sub_4f1ff0(mode);
            step[idx] = fvals[idx] * 2.0f;
            cur[idx] = g_819bac;
            if (idx == 1) {
                cur[0] = -cur[0];
            }
        }
    } else if (d == 1) {
        out[0] = 0.0f;
        out[1] = 0.0f;
        out[2] = 0.0f;
        cur[0] = 0.0f;
        cur[1] = 0.0f;
        cur[2] = 0.0f;
    } else if (d == 2) {
        out[0] = 0.0f;
        out[1] = 0.0f;
        out[2] = 0.0f;
        cur[0] = 0.0f;
        cur[1] = 0.0f;
        cur[2] = 0.0f;
    }

    for (int i = 0; i < count; i++) {
        if (i == count - 1) {
            step[idx] = fvals[idx];
            if (d == 0 && e != 0) {
                cur[idx] = (fvals[idx] - prev[idx]) * cur[idx] * g_83a3e4;
            }
        } else {
            step[idx] = prev[idx] + g_826e6c;
        }

        Vector3 vv;
        vv.x = cur[0];
        vv.y = cur[1];
        vv.z = cur[2];

        Vector2 uu;
        uu.x = out[0];
        uu.y = out[1];

        float extra[3];
        extra[0] = out[2];
        extra[1] = 0.0f;
        extra[2] = 0.0f;

        sub_4f35d0(this, &vv, &uu, extra, idx, i);

        Vector3 vv2;
        vv2.x = 0.0f;
        vv2.y = 0.0f;
        vv2.z = 0.0f;

        Vector2 uu2;
        uu2.x = 0.0f;
        uu2.y = 0.0f;

        float extra2[3];
        extra2[0] = 0.0f;
        extra2[1] = 0.0f;
        extra2[2] = 0.0f;

        sub_4f2ef0(this, &vv2, &uu2, extra2, idx, i, 0);

        prev[idx] = step[idx];
    }
}
