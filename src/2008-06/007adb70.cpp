// from server: 63% by tester
struct TextureProxyBase {
    virtual int getWidth();
    virtual int getHeight();
};

struct TextureProxy {
    TextureProxyBase* texture;
    float getOriginalSize(float* out);
};

float TextureProxy::getOriginalSize(float* out) {
    out[0] = 0.0f;
    out[1] = 0.0f;
    if (texture) {
        int w = texture->getWidth();
        out[0] = (float)w;
        if (w < 0) out[0] += 4294967296.0f;
        int h = texture->getHeight();
        out[1] = (float)h;
        if (h < 0) out[1] += 4294967296.0f;
    }
    return out[0];
}
