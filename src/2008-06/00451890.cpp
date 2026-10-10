// from server: 11% by tester
struct AggChunk {
    char pad[0x54];
    int m_field54;
    void destroy();
};

struct VerbBinder {
    char pad0[0x54];
    AggChunk m_chunk;
    void f();
};

void VerbBinder::f()
{
    m_chunk.destroy();
}
