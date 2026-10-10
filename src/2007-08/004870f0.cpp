// from server: 52% by colin
extern "C" int __cdecl sub_52C940(int, int);

int dword_8BDC34;
int dword_8BDC38;

void sub_4870F0()
{
    __try
    {
        if ((dword_8BDC38 & 1) == 0)
        {
            dword_8BDC38 |= 1;
            dword_8BDC34 = sub_52C940(-1, 0x7B3DE0);
        }
    }
    __except (1)
    {
    }
}
