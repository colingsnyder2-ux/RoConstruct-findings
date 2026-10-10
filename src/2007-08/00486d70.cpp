// from server: 52% by colin
extern "C" int __stdcall sub_52C940(int, int);

int dword_8BDC00;
int dword_8BDBFC;

void sub_486D70()
{
    __try
    {
        if ((dword_8BDC00 & 1) == 0)
        {
            dword_8BDC00 |= 1;
            dword_8BDBFC = sub_52C940(-1, 0x7B2D10);
        }
    }
    __except (1)
    {
    }
}
