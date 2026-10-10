// from server: 37% by atomic.potato
struct TextureProxyBase
{
    void SetTexture(void *value);
};

void TextureProxyBase::SetTexture(void *value)
{
    *(void **)((char *)this + 0x28) = value;
}
