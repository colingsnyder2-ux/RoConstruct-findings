// from server: 64% by Viper
struct UString_sink_stream_buffer
{
    void* field0;
    UString_sink_stream_buffer* __cdecl construct(void* arg);
};

void __stdcall sub_54c3e0(void* arg);

UString_sink_stream_buffer* UString_sink_stream_buffer::construct(void* arg)
{
    field0 = 0;
    sub_54c3e0(arg);
    return this;
}
