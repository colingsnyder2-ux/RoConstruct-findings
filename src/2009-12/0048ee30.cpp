// from server: 58% by atomic.potato
struct TextureProxyBase {
    char pad0[16];
    float m_value;
    void setValue(float value);
};

void TextureProxyBase::setValue(float value)
{
    m_value = value;
}
