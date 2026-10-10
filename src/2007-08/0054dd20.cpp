// from server: 87% by colin
struct locale {
    void destroy();
};

struct streambuf {
    locale* pubimbue(locale* result, const locale* loc);
};

struct zlib_decompressor_stream_buffer {
    char pad[0x4c];
    streambuf* buf;
    char pad2[0x0c];
    unsigned char flags;
    void imbue(const locale* loc);
};

void zlib_decompressor_stream_buffer::imbue(const locale* loc)
{
    if ((flags & 1) != 0 && buf != 0) {
        locale tmp;
        buf->pubimbue(&tmp, loc);
        tmp.destroy();
    }
}
