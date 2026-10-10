// from server: 38% by colin
// roc 2007-08 00487430  unit: G3D::GWindow  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00487430

extern "C" int __cdecl sub_554B20();

int g_8bdc5c;
int g_8bdc60;

void sub_487430()
{
    if ((g_8bdc60 & 1) == 0)
    {
        g_8bdc60 |= 1;
        g_8bdc5c = sub_554B20();
    }
}
