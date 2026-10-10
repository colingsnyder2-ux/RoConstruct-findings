// from server: 58% by atomic.potato
struct RbxMeshPartAdapter {
    char pad0[28];
    float m_value;
    void f(float value);
};

void RbxMeshPartAdapter::f(float value)
{
    m_value = value;
}
