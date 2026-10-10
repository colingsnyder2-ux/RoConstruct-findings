// from server: 52% by colin
extern "C" int __cdecl sub_52C940(int, int);

int dword_8BDC4C;
int dword_8BDC50;

void sub_487270()
{
    __try
    {
        if ((dword_8BDC50 & 1) == 0)
        {
            dword_8BDC50 |= 1;
            dword_8BDC4C = sub_52C940(-1, 0x8A869C);
        }
    }
    __except (1)
    {
    }
}
