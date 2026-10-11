// from server: 54% by colin
namespace ns_006f6e70 {

int __fastcall get_value(int a, int b)
{
    int v = b;
    if (v < 0)
        v += 0xff;
    if (v > 0xff)
        v -= 0xff;

    int t = v * 6;
    int result;

    if (t < 0xff)
    {
        int d = b - a;
        int q = (int)((long long)d * 0x80808081 >> 39);
        q = (q >> 31) + q;
        result = q + a * v * 6;
    }
    else if (v * 2 < 0xff)
    {
        result = b;
    }
    else if (v * 3 < 0x1fe)
    {
        int d = b - a;
        int q = (int)((long long)d * 0x80808081 >> 39);
        q = (q >> 31) + q;
        result = a + q * (0xaa - v) * 6;
    }
    else
    {
        result = a;
    }

    int r = (int)((long long)result * 0x80808081 >> 39);
    r = (r >> 31) + r;
    return r;
}

}
