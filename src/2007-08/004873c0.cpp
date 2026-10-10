// from server: 57% by colin
// roc 2007-08 004873c0  unit: G3D::GWindow  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004873c0

extern "C" int __cdecl sub_554b20();

int g_8bdc54;
int g_8bdc58;

int __cdecl sub_4873c0()
{
    __try
    {
        if (!(g_8bdc58 & 1))
        {
            g_8bdc58 |= 1;
            g_8bdc54 = sub_554b20();
        }
    }
    __except (1)
    {
    }
    return g_8bdc54;
}
