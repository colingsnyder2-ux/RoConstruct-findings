// from server: 44% by atomic.potato
struct UString_sink_stream_buffer
{
    UString_sink_stream_buffer();
};

extern "C" void __cdecl f7224f0(void *);
extern "C" void __cdecl f7f4878(void *, const void *);

UString_sink_stream_buffer::UString_sink_stream_buffer()
{
    char buffer[40];
    f7224f0(buffer);
    f7f4878(buffer, (const void *)0x00ac7ce8);
}
