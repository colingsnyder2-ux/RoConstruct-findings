// from server: 87% by king_originala
struct S;
typedef void (__thiscall *VirtualFunction)(S *);

extern "C" void __stdcall write_buffer(void *, void *, const char *, int);

struct S {
    VirtualFunction *vtable;
    char pad04[0x10];
    char **begin;
    char pad18[0x0c];
    char **current;
    char pad28[0x0c];
    int *remaining;
    char pad38[0x68];
    void *destination;
    char padA4[0x0c];
    unsigned int flags;

    int f(int);
};

int S::f(int value) {
    S *p = this;

    if ((static_cast<unsigned char>(p->flags >> 3) & 1) &&
        *p->current == 0)
        p->vtable[22](p);

    const int result = value;
    if (result == -1)
        return 0;

    if (static_cast<unsigned char>(p->flags >> 3) & 1) {
        int count = *p->remaining;
        char *position = *p->current;
        char *end = position + count;

        if (position == end) {
            char *start = *p->begin;
            int length = static_cast<int>(*p->current - start);

            if (length > 0) {
                void *destination = p->destination;
                p = reinterpret_cast<S *>(reinterpret_cast<char *>(p) + 0x40);
                write_buffer(p, destination, start, length);
            }

            position = *p->current;
            end = position + count;
            if (position == end)
                return -1;
        }

        **p->current = static_cast<char>(result);
        --*p->remaining;
        ++*p->current;
        return result;
    }

    void *destination = p->destination;
    p = reinterpret_cast<S *>(reinterpret_cast<char *>(p) + 0x40);
    write_buffer(p, destination, reinterpret_cast<const char *>(&value), 1);
    return 0;
}
