// from server: 66% by atomic.potato
struct TexturePtr
{
    TexturePtr(void *, const void *);
};

struct S
{
    float x;
    float y;
    void *texture;
    S(void *source);
};

S::S(void *source)
{
    x = ((float *)source)[0];
    texture = source;
    y = ((float *)source)[1];
    TexturePtr(&texture, source);
}
