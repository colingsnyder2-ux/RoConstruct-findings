// from server: 57% by colin
// roc 2007-08 004874a0  unit: G3D::GWindow  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004874a0

extern "C" int __cdecl sub_554b20();

int g_8bdc64;
int g_8bdc68;

int sub_4874a0()
{
    __try {
        if (!(g_8bdc68 & 1)) {
            g_8bdc68 |= 1;
            g_8bdc64 = sub_554b20();
        }
    } __except (1) {
    }
    return g_8bdc64;
}
