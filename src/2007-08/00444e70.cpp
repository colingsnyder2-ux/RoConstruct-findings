// from server: 47% by colin
// roc 2007-08 00444e70  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444e70

extern "C" int __cdecl sub_52C940(int, int);

int g_8bbad8;
int g_8bbadc;

int f_444e70()
{
    if ((g_8bbadc & 1) == 0)
    {
        g_8bbadc |= 1;
        g_8bbad8 = sub_52C940(-1, 0);
    }
    return g_8bbad8;
}
