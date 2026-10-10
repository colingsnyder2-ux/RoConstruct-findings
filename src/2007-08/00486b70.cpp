// from server: 35% by colin
// roc 2007-08 00486b70  unit: G3D::GWindow  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486b70

extern "C" void* __cdecl sub_52c940();

void* g_8bdbdc;
unsigned int g_8bdbe0;

void __cdecl sub_486b70()
{
    if ((g_8bdbe0 & 1) == 0) {
        g_8bdbe0 |= 1;
        g_8bdbdc = sub_52c940();
    }
}
