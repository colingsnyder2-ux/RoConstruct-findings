// from server: 88% by atomic.potato
struct TexturePtr
{
    TexturePtr(const TexturePtr&);
};

struct VertexStreamer
{
    float x;
    float y;
    TexturePtr texture;
    VertexStreamer& f(const float*);
};

VertexStreamer& VertexStreamer::f(const float* p)
{
    x = p[0];
    y = p[1];
    texture = TexturePtr(*(const TexturePtr*)(p + 2));
    return *this;
}
