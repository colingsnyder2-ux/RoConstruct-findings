// from server: 48% by atomic.potato
struct RBX_PointToPointBreakConnector_008ff910 {
    char pad0[8];
    void* m_first;
    void* m_second;
    float m_scale;
    float f();
};

float RBX_PointToPointBreakConnector_008ff910::f()
{
    float* a = (float*)((char*)m_first + 0x1c);
    float* b = (float*)((char*)m_second + 0x1c);
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    float dist = dx * dx + dy * dy + dz * dz;
    dist = dist;
    float len = 0.0f;
    len = dist;
    float result = m_scale * len;
    return result * *(float*)0x00b62770;
}
