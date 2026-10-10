// from server: 78% by colin
// roc 2007-08 0054c4b0  unit: UString_sink::?$stream_buffer  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c4b0

extern "C" int __stdcall GetLastError();

struct stream_buffer {
    char pad0[0x10];
    int* p10;
    int* p14;
    char pad18[0x8];
    int* p20;
    int* p24;
    char pad28[0x8];
    int* p30;
    int* p34;
    char pad38[0x8];
    char buf40[0x8];
    int* p48;
    int sync(int, int, int, int, int, int);
};

int stream_buffer::sync(int a, int b, int c, int d, int e, int f)
{
    if (*p24 != 0)
        GetLastError();
    if (a == 1 && *p20 != 0)
    {
        int v = *p30;
        b -= v;
        c -= (v >> 31);
    }
    *p10 = 0;
    *p20 = 0;
    *p30 = 0;
    *p14 = 0;
    *p24 = 0;
    *p34 = 0;
    return ((int (__thiscall*)(char*, int, int, int, int, int, int))0x54be70)(buf40, a, b, c, d, e, f);
}
