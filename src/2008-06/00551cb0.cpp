// from server: 37% by atomic.potato
struct TextureProxyBase
{
    void SetValue(float value);
};

void TextureProxyBase::SetValue(float value)
{
    *(float*)((char*)this + 0x2c) = value;
}
