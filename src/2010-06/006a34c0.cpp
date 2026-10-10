// from server: 69% by atomic.potato
struct UString_sink_stream_buffer {
    char pad0[16];
    int* m_first;
    char pad1[12];
    int* m_second;
    char pad2[12];
    int* m_count;
    char pad3[8];
    int m_value;
    void f();
};

void UString_sink_stream_buffer::f()
{
    int value = m_value;
    *m_first = value;
    *m_second = value;
    *m_count = value - value;
}
