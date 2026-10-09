// from server: 53% by colin
// roc 2007-08 00631812  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631812

extern "C" int __cdecl sub_631620(int, int);
extern "C" int __cdecl sub_6317a0(int);
extern "C" int __cdecl sub_6317d0(int, int);

int __cdecl sub_631812(int a1)
{
    int result;
    int v2;

    sub_631620(8, 0x869b78);
    v2 = 0x400000;
    if (sub_6317a0(v2) != 0)
    {
        result = sub_6317d0(v2, a1 - v2);
        if (result != 0)
        {
            result = ((*(unsigned int *)(result + 0x24) >> 0x1f) ^ 1) & 1;
        }
    }
    return result;
}
