// from server: 41% by colin
extern "C" int __stdcall sub_0054F8A0(int, int, int, int, int);

int __stdcall sub_0054F9F0(int a, int b, int c, int d)
{
    int sum = d + c;
    int q = sum / b;
    int r = sum % b;
    return sub_0054F8A0(b, q + c, r + d, 0, 3);
}
