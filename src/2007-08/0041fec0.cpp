// from server: 52% by colin
// roc 2007-08 0041fec0  unit: CXTTreeCtrl  size: 116 bytes

extern "C" void* __cdecl sub_52C940(int, int);

int g_8bb4a8;
void* g_8bb4a4;

void __cdecl sub_41FEC0()
{
    __try
    {
        if (!(g_8bb4a8 & 1))
        {
            g_8bb4a8 |= 1;
            g_8bb4a4 = sub_52C940(-1, 0x887f24);
        }
    }
    __except (1)
    {
    }
}
