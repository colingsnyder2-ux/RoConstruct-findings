// from server: 67% by colin
// roc 2007-08 00603720  unit: RBX::JointStage  size: 256 bytes
// library openrbx-client/App\v8world\AssemblyStage2.cpp

struct IWorldStage {
    int field0;
    int field4;
    int field8;
    void onPrimitiveAdded(int);
};

struct JointStage : IWorldStage {
    void onPrimitiveAdded(int);
};

extern float g_797b38;
extern float g_797b34;
extern float g_797988;
extern int g_8c7fec;
extern unsigned char g_8c7ff0;

extern "C" int __cdecl sub_630d60(float);

void JointStage::onPrimitiveAdded(int a)
{
    int old = field4;
    field4 = a;

    int ebx;
    if (!(g_8c7ff0 & 1)) {
        g_8c7ff0 |= 1;
        ebx = 10;
        g_8c7fec = ebx;
    } else {
        ebx = g_8c7fec;
    }

    int ecx = field8;
    int edi = field4;

    if (edi > ecx) {
        if (ecx == 0) {
            field8 = a;
            IWorldStage::onPrimitiveAdded(old);
            return;
        }
        if (edi < ebx) {
            field8 = ebx;
            IWorldStage::onPrimitiveAdded(old);
            return;
        }
        float f = g_797b38;
        unsigned int eax = (unsigned int)ecx;
        eax += eax;
        eax += eax;
        if (eax > 0x61a80) {
            f = g_797b34;
        } else if (eax > 0xfa00) {
            f = g_797988;
        }
        int tmp = ecx;
        float prod = f * (float)tmp;
        int r = sub_630d60(prod);
        r -= tmp;
        r += edi;
        field8 = r;
        int c = g_8c7fec;
        if (r < c) {
            field8 = c;
        }
        IWorldStage::onPrimitiveAdded(old);
        return;
    }

    int q = ecx / 3;
    if (edi <= q) {
        if (*(unsigned char*)&a != 0) {
            if (edi > ebx) {
                if (edi < old) {
                    edi = old;
                }
                IWorldStage::onPrimitiveAdded(edi);
            }
        }
    }
}
