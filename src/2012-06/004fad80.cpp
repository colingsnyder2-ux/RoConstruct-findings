// from server: 52% by atomic.potato
struct E { int v[3]; };

extern "C" E* __stdcall sub_4fabe0(E* first, E* last, E* dest, int a, int b, int c, int d);

E* __stdcall sub_4fad80(E* first, E* last, E* dest, int a, int b, int c)
{
    char tmp = 0;
    sub_4fabe0(first, last, dest, a, b, c, *(int*)&tmp);
    return dest + (last - first) * 9;
}
