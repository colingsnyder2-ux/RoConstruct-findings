// from server: 52% by colin
// roc 2007-08 0041ffc0  unit: CXTTreeCtrl  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041ffc0

extern "C" int __stdcall sub_52c940(int, int);

int g_8bb4b8;
int g_8bb4b4;

void sub_41ffc0()
{
    __try
    {
        if ((g_8bb4b8 & 1) == 0)
        {
            g_8bb4b8 |= 1;
            g_8bb4b4 = sub_52c940(-1, 0x887f60);
        }
    }
    __except (1)
    {
    }
}
