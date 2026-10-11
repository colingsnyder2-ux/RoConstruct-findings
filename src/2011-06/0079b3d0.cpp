// from server: 48% by atomic.potato
struct RBX_PointToPointBreakConnector {
    char pad0[8];
    void* m_p0;
    void* m_p1;
    float m_scale;
    float f();
};

float RBX_PointToPointBreakConnector::f()
{
    float* a = (float*)((char*)m_p0 + 0x1c);
    float* b = (float*)((char*)m_p1 + 0x1c);
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    float d = dx * dx + dy * dy + dz * dz;
    d = d * d;
    d = d * d;
    return m_scale * d * 0.0f;
}
