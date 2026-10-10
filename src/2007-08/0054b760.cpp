// from server: 77% by colin
struct allocator {
    char* allocate(unsigned int, const void*);
    void deallocate(char*, unsigned int);
};

struct UString_sink {
    char pad0[0x3c];
    char field_3c;
    char pad3d[0x3];
    int field_40;
    char field_44;
    char pad45[0x7];
    char* field_4c;
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    void stream_buffer(int, int, int);
};

void UString_sink::stream_buffer(int a, int b, int c)
{
    int n = a;
    if (n == -1)
        n = 0x1000;

    int m = b;
    if (m == -1)
        m = 4;

    int local = 2;
    int* p;
    if (m > 2)
        p = &m;
    else
        p = &local;

    field_54 = *p;

    if (n == 0)
        n = 1;

    unsigned int total = field_54 + n;
    if (field_50 != total)
    {
        allocator* alloc = (allocator*)this;
        char* newbuf = alloc->allocate(total, 0);
        unsigned int oldsize = field_50;
        field_50 = total;
        char* oldbuf = field_4c;
        field_4c = newbuf;
        if (oldbuf)
            alloc->deallocate(oldbuf, oldsize);
    }

    void** vtbl = *(void***)this;
    void (*fn)(void*) = (void (*)(void*))vtbl[0x54 / 4];
    fn(this);

    if (field_44)
        field_44 = 0;

    field_40 = local;
    field_44 = 1;
    field_58 |= 1;
    field_3c = 0;
}
