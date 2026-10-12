// from server: 71% by king_originala
struct S;

struct VTable
{
    char padding[0x54];
    void (__thiscall *initialize)(S *);
};

extern "C" int __cdecl memmove_s(void *, unsigned int, const void *, unsigned int);

struct S
{
    VTable *vtable;
    char padding04[0x0c];
    char **begin;
    char padding14[0x0c];
    char **current;
    char padding24[0x0c];
    int *remaining;
    char padding34[0x14];
    char *buffer;
    char padding4c[4];
    int capacity;

    int f();
};

int S::f()
{
    if (*current == 0)
        vtable->initialize(this);

    char *p = *current;
    if (p < p + *remaining)
        return static_cast<unsigned char>(*p);

    int available = static_cast<int>(p - *begin);
    const int &selected = capacity < available ? capacity : available;
    int count = selected;

    if (count != 0)
        memmove_s(buffer + capacity - count, count, p - count, count);

    char *end = buffer + capacity;
    *begin = end - count;
    *current = end;
    *remaining = static_cast<int>(end - *current);
    *remaining = static_cast<int>(buffer + capacity - *current);

    return -1;
}
