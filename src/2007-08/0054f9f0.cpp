// from server: 27% by colin
// roc 2007-08 0054f9f0  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f9f0

extern "C" int __cdecl sub_54f8a0(int, int, int, int, int);

int __cdecl sub_54f9f0(int a, int b, int c, int d)
{
    int lo = a + d;
    int hi = (lo < 0) ? -1 : 0;
    int t = d;
    int thi = (t < 0) ? -1 : 0;
    lo -= t;
    hi -= thi;
    lo += d;
    hi += c;
    return sub_54f8a0(b, lo, hi, 0, 3);
}
