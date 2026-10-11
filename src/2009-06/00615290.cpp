// from server: 64% by atomic.potato
struct UString_sink_stream_buffer {
    void* field0;
    UString_sink_stream_buffer* __cdecl init(void* a);
};

extern "C" void __stdcall sub_614A50(void* a);

UString_sink_stream_buffer* UString_sink_stream_buffer::init(void* a) {
    field0 = 0;
    sub_614A50(a);
    return this;
}
