// from server: 52% by colin
// roc 2007-08 00486cf0  unit: G3D::GWindow  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486cf0

extern "C" void* __cdecl sub_52C940(int, int);

int g_8bdbf8;
int g_8bdbf4;

void __cdecl sub_486CF0()
{
    __try
    {
        if ((g_8bdbf8 & 1) == 0)
        {
            g_8bdbf8 |= 1;
            g_8bdbf4 = (int)sub_52C940(-1, 0x7b19e8);
        }
    }
    __except (1)
    {
    }
}
