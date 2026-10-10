// from server: 91% by atomic.potato
extern "C" int __cdecl sub_7F4AAA(int, const void *, const void *, int, int);

int __stdcall f(int value)
{
    return sub_7F4AAA(value, (const void *)0xAFFE40, (const void *)0xB1C3EC, 0, 0) != 0;
}
