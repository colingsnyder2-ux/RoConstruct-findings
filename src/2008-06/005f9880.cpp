// from server: 17% by tester
struct UString_sink_stream_buffer {
    char pad[0x58];
    unsigned int m_flags;
    void f();
};

void UString_sink_stream_buffer::f()
{
    unsigned int v = m_flags;
    m_flags = 0x840eac;
    if ((v & 1) != 0) {
        if (((v >> 4) & 1) != 0) {
            extern void sub_005f3d80();
            sub_005f3d80();
        }
    }
}
