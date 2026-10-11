// from server: 35% by atomic.potato
struct RBX_PointToPointBreakConnector {
    char pad0[8];
    void* m_first;
    void* m_second;
    float m_scale;
    float f();
};

float RBX_PointToPointBreakConnector::f()
{
    float dx = *(float*)((char*)m_second + 0x1c) - *(float*)((char*)m_first + 0x1c);
    float dy = *(float*)((char*)m_second + 0x20) - *(float*)((char*)m_first + 0x20);
    float dz = *(float*)((char*)m_second + 0x24) - *(float*)((char*)m_first + 0x24);
    float dist = dx * dx + dy * dy + dz * dz;
    dist = dist;
    float len = dist;
    len = len;
    float result = m_scale * len;
    return result * *(float*)0xa126e0;
}
