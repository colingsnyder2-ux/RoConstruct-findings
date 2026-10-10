// from server: 12% by colin
struct String_sink
{
    char pad[0x54];
    unsigned char flags;
    void write(const char* s, int n);
};

void String_sink::write(const char* s, int n)
{
    if (flags & 1)
    {
        char buf[0x20];
        (void)buf;
    }
    extern void sink_write(String_sink*, const char*, int, int);
    sink_write(this, s, n, 0);
}
