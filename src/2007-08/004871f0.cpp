// from server: 54% by colin
// roc 2007-08 004871f0  unit: G3D::GWindow  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004871f0

extern "C" int __stdcall sub_52c940(int, int);

int g_8bdc44;
int g_8bdc48;

int GWindow_init()
{
    __try
    {
        if ((g_8bdc48 & 1) == 0)
        {
            g_8bdc48 |= 1;
            g_8bdc44 = sub_52c940(-1, 0x8a8504);
        }
    }
    __except (1)
    {
    }
    return g_8bdc44;
}
