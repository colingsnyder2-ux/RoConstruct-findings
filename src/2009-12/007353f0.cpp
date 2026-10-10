// from server: 87% by atomic.potato
struct VObjectValue_EventDesc {
    char pad0[376];
    float m_x;
    float m_y;
    float m_z;
    void f(float* out);
};

void VObjectValue_EventDesc::f(float* out)
{
    out[0] = m_x;
    out[1] = m_y;
    out[2] = m_z;
}
