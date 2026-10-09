// from server: 36% by colin
// roc 2007-08 0054bcf0  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bcf0

extern "C" void* __stdcall sub_54B1B0(void* self, void* arg);
extern "C" void* __stdcall sub_77E618(void* self, void* arg1, void* arg2);

struct UString_sink_stream_buffer
{
    char pad0[0x14];
    void* field14;
    void* field18;
    char pad1[8];
    void* field24;

    UString_sink_stream_buffer(void* a, void* b);
};

UString_sink_stream_buffer::UString_sink_stream_buffer(void* a, void* b)
{
    sub_54B1B0(this, a);
    this->field24 = 0;
    this->field14 = sub_77E618((char*)this + 0x1c, b, 0);
    this->field18 = b;
}
