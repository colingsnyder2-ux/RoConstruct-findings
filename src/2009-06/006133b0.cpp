// from server: 89% by why2
struct basic_streambuf_DU
{
    int pubsync();
};

struct stream_buffer
{
    char pad[0xc];
    basic_streambuf_DU buf;
};

int sub_006133b0(stream_buffer* p)
{
    return (*(stream_buffer**)p)->buf.pubsync();
}
