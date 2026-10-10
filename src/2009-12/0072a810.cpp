// from server: 65% by atomic.potato
extern "C" void std_locale_destructor(void *);
extern "C" void std_basic_streambuf_pubimbue(void *, const void *);

struct UString_sink_stream_buffer {
    unsigned char pad00[0x48];
    void *value48;
    unsigned char pad4c[0x0c];
    unsigned char flags58;

    void f(const void *, const void *);
};

void UString_sink_stream_buffer::f(const void *a, const void *b)
{
    if ((flags58 & 1) != 0 && value48 != 0) {
        std_locale_destructor((void *)a);
        std_basic_streambuf_pubimbue((void *)b, (const void *)a);
    }
}
