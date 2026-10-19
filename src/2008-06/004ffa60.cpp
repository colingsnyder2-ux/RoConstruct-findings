// from server: 41% by colin
//

struct Vector2 { float x, y; };
struct Vector3 { float x, y, z; };

extern "C" double __stdcall ceil(double);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

float sub_4f1ff0(int);
void sub_5185d0(Vector2* out, Vector2* in);
void sub_4f35d0(Vector3* a, Vector2* b, Vector2* c, Vector3* d, Vector3* e, int f, int g);
void sub_4f54d0(void* self, int a, int b);

struct PBBBuilder {
    int field0;
    Vector2 field4;
    int fieldC;
    unsigned int field10;
    void build(Vector3* a, Vector3* b, int c, int d, int e, int f);
};

void PBBBuilder::build(Vector3* a, Vector3* b, int c, int d, int e, int f)
{
    float arr[4];
    float arr2[4];
    float arr3[4];
    float arr4[4];
    int idx;
    int i;
    int count;

    unsigned int bits = this->field10 >> 9;
    int sel = bits & 7;

    Vector2 tmp;
    sub_5185d0(&tmp, &this->field4);

    float f0 = a->x; if (f0 < 0) f0 = -f0;
    float f1 = a->y; if (f1 < 0) f1 = -f1;
    float f2 = a->z; if (f2 < 0) f2 = -f2;

    arr[0] = f0;
    arr[1] = f1;
    arr[2] = f2;

    bool flag;
    if (f != 0) {
        flag = (f0 == f1);
    } else {
        flag = false;
    }
    idx = flag ? 0 : 1;

    if (f == 0 && sel != 0) {
        double dv = (double)arr[idx] * (double)g_819bac;
        float cf = (float)ceil(dv);
        count = (int)cf;
    } else {
        count = 1;
    }

    short sval = *(short*)((char*)&tmp + (idx * 2));
    int q = (int)sval / count;
    unsigned short qq = (unsigned short)q;
    unsigned short one = 1;
    unsigned short chosen = (one < qq) ? qq : one;

    *(unsigned short*)((char*)&idx + 0) = chosen;
    *(unsigned short*)((char*)&tmp + idx * 2) = (unsigned short)sval;

    Vector2 p0, p1;
    sub_5185d0(&p0, (Vector2*)a);
    p0.x = -p0.x;
    p0.y = -p0.y;
    sub_5185d0(&p1, (Vector2*)b);
    p1.x = -p1.x;
    p1.y = -p1.y;

    if (f == 0) {
        if (sel == 0) {
            arr2[0] = g_83a3e4;
            arr2[1] = g_819bac;
            arr2[2] = g_819bac;
            arr2[3] = g_819bac;
        } else {
            arr2[idx] = 0.0f;
            arr2[idx] = sub_4f1ff0(sel);
            arr3[idx] = arr[idx] * 2.0f;
            arr4[idx] = g_819bac;
            if (idx == 1) {
                arr4[1] = -arr4[1];
            }
        }
    } else if (f == 1) {
        arr2[0] = 0.0f;
        arr2[1] = b->y;
        arr2[2] = b->x;
        arr2[3] = -b->y;
    } else if (f == 2) {
        arr2[0] = 0.0f;
        arr2[1] = 0.0f;
        arr2[2] = 0.0f;
        arr2[3] = 0.0f;
    }

    for (i = 0; i < count; i++) {
        if (i == count - 1) {
            arr3[idx] = arr[idx];
            if (f == 0 && c != 0) {
                arr4[idx] = (arr[idx] - arr3[idx]) * arr4[idx] * g_83a3e4;
            }
        } else {
            arr3[idx] = arr[idx] + g_826e6c;
        }

        Vector3 vv;
        vv.x = arr4[0];
        vv.y = arr4[1];
        vv.z = arr4[2];

        sub_4f35d0(&vv, &p0, &p1, (Vector3*)&arr3, (Vector3*)&arr2, sel, (int)this);
        sub_4f54d0(this, d, e);
        arr2[idx] = arr3[idx];
    }
}
