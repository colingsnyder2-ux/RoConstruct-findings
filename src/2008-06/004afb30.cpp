// from server: 87% by atomic.potato
extern "C" int __stdcall sub_6A17C6(int, int, int, int, int, int);

int __stdcall f(int value)
{
    int result = sub_6A17C6(value, 0, 0x92907C, 0x93B2E4, 0, 0);
    return result != 0;
}
