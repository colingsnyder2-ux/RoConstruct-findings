// from server: 52% by colin
// roc 2007-08 00486e70  unit: G3D::GWindow  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486e70

extern "C" void* __cdecl sub_52c940(int, int);

int g_8bdc0c;
int g_8bdc10;

void sub_486e70()
{
    __try
    {
        if ((g_8bdc10 & 1) == 0)
        {
            g_8bdc10 |= 1;
            g_8bdc0c = (int)sub_52c940(-1, 0x8a7500);
        }
    }
    __except (1)
    {
    }
}
