// from server: 43% by tester
// roc 2008-06 005cc9a0  unit: RBX::VCamera::?$FactoryProduct  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc9a0

extern "C" float __cdecl _ftol_helper();

struct VCamera {
    int field0;
    int field4;
    int field8;
    void sub_502080(int);
};

extern "C" int __stdcall sub_6a17f0(float);

extern float g_81e380;
extern float g_81e37c;
extern float g_81c434;
extern int g_9798b0;
extern int g_9798b4;

void VCamera::sub_502080(int) {}

void VCamera_set(int a, int b)
{
}

void VCamera_method(VCamera* self, int a, int b)
{
    int old = self->field4;
    self->field4 = a;

    int ebx;
    if (!(g_9798b4 & 1)) {
        g_9798b4 |= 1;
        ebx = 10;
        g_9798b0 = ebx;
    } else {
        ebx = g_9798b0;
    }

    int ecx = self->field8;
    int edi = self->field4;

    if (edi > ecx) {
        if (ecx == 0) {
            self->field8 = a;
            self->sub_502080(old);
            return;
        }
        if (edi < ebx) {
            self->field8 = ebx;
            self->sub_502080(old);
            return;
        }
        float f = g_81e380;
        int eax = ecx * 4;
        if (eax > 0x61a80) {
            f = g_81e37c;
        } else if (eax > 0xfa00) {
            f = g_81c434;
        }
        int tmp = ecx;
        float prod = f * (float)tmp;
        int r = sub_6a17f0(prod);
        r = r - ecx + edi;
        self->field8 = r;
        int m = g_9798b0;
        if (r < m) {
            self->field8 = m;
        }
        self->sub_502080(old);
        return;
    }

    int q = ecx / 3;
    if (edi <= q) {
        if (b != 0 && edi > ebx) {
            if (edi >= old) {
                edi = old;
            }
            self->sub_502080(edi);
        }
    }
}
