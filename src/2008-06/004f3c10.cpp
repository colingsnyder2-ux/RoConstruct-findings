// from server: 28% by colin
struct V2 {
    float x, y;
};

extern "C" double __stdcall ceil(double);

extern float g_819bac;
extern float g_83a3e4;
extern float g_826e6c;

float helper_4f1ff0(int n);
void helper_4f35d0(void* self, int idx, float* a, float* b, float* c, unsigned short* t);
void helper_4f2810(void* self, float a, float b, unsigned short t);

struct S {
    int f(float a, float b, float c, int d, int e);
    char pad[0x10];
    unsigned int flags;
};

int S::f(float a, float b, float c, int d, int e)
{
    int mode = (flags >> 9) & 7;

    V2 v;
    v.x = 0;
    v.y = 0;

    float fa = a < 0 ? -a : a;
    float fb = b < 0 ? -b : b;
    float fc = c < 0 ? -c : c;

    float arr[2];
    arr[0] = fa;
    arr[1] = fb;

    int idx;
    if (e == 0) {
        idx = (fa == fb) ? 1 : 0;
    } else {
        idx = 0;
    }

    int count;
    if (e == 0 && mode != 0) {
        count = (int)ceil((double)(arr[idx] * g_819bac));
    } else {
        count = 1;
    }

    unsigned short tmp[2];
    tmp[0] = 0;
    tmp[1] = 0;

    short val = (short)((unsigned short*)&v)[idx];
    int q = (int)val / count;
    unsigned short qq = (unsigned short)q;

    unsigned short one = 1;
    unsigned short chosen;
    if (one < qq) {
        chosen = qq;
    } else {
        chosen = one;
    }
    tmp[idx] = chosen;

    float farr[2];
    farr[0] = fc;
    farr[1] = 0;

    float p0 = 0, p1 = 0, p2 = 0, p3 = 0;

    if (d == 0) {
        if (mode == 0) {
            p0 = g_83a3e4;
            p1 = g_819bac;
            p3 = g_819bac;
        } else {
            p1 = helper_4f1ff0(mode);
            p0 = farr[idx] * 2.0f;
            p3 = g_819bac;
            if (idx == 1) {
                p3 = -p3;
            }
        }
    } else if (d == 1) {
        p0 = 0;
        p1 = ((V2*)((char*)this + 0x18))->y;
        p2 = ((V2*)((char*)this + 0x18))->x;
        p3 = -((V2*)((char*)this + 0x18))->y;
    } else if (d == 2) {
        p0 = 0;
        p1 = 0;
        p2 = 0;
        p3 = 0;
    }

    int i = 0;
    while (i < count) {
        float cur;
        if (i == count - 1) {
            cur = arr[idx];
            farr[idx] = cur;
            if (d == 0 && e != 0) {
                farr[idx] = (cur - farr[idx]) * p3 * g_83a3e4;
            }
        } else {
            cur = farr[idx] + g_826e6c;
            farr[idx] = cur;
        }

        float args[2];
        args[0] = p2;
        args[1] = p3;

        float args2[2];
        args2[0] = p0;
        args2[1] = p1;

        float args3[2];
        args3[0] = p2;
        args3[1] = p3;

        helper_4f35d0(this, idx, args, args2, args3, tmp);

        helper_4f2810(this, p0, p1, tmp[idx]);

        i++;
    }

    return 0;
}
