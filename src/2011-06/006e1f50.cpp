// from server: 41% by atomic.potato




extern "C" void __stdcall sub_a40528(char*, unsigned int);
extern "C" void __stdcall sub_a40608();

struct UString_sink_stream_buffer {
    char pad0[0x40];
    char f40;
    char f41;
    char pad42[6];
    char* f48;
    unsigned int f4c;
    void dtor();
};

void UString_sink_stream_buffer::dtor()
{
    if (f48) {
        sub_a40528(f48, f4c);
    }
    if (f41) {
        f41 = 0;
    }
    sub_a40608();
}
