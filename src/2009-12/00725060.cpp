// from server: 62% by atomic.potato
struct UString_sink_stream_buffer
{
    UString_sink_stream_buffer* __cdecl f(int);
};

UString_sink_stream_buffer* UString_sink_stream_buffer::f(int value)
{
    UString_sink_stream_buffer* result = this;
    result->f(value);
    return result;
}
