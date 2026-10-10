// from server: 58% by atomic.potato
struct TextureProxyBase
{
    char pad[16];
    float value;
    void setValue(float);
};

void TextureProxyBase::setValue(float v)
{
    value = v;
}
