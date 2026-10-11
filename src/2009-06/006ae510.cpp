// from server: 39% by atomic.potato
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
    float dx = a[0] - b[0];
    float dy = a[1] - b[1];
    float dz = a[2] - b[2];
    float d = dx*dx + dy*dy + dz*dz;
    float len = 0.0f;
    len = d;
    len = len * len;
    len = len + len;
    return m_scale * len * *(float*)0x8bad4c;
}
