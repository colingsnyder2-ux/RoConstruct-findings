// from server: 85% by colin
// roc 2007-08 004d23b0  unit: AdornRender  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d23b0

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct TextureRef {
    void* p0;
    void* p4;
    void* p8;
};

struct TextureProxy {
    TextureRef texture;
    TextureProxy(const TextureRef&);
};

extern type_info type_info_TextureProxy;

TextureProxy::TextureProxy(const TextureRef& t)
{
    texture = t;
}

void* __cdecl createTextureProxy(const TextureRef* ref, int type)
{
    if (type == 2) {
        if (type_info_TextureProxy == *(const type_info*)0x8970f0) {
            return (void*)ref;
        }
        return 0;
    }
    if (type == 0) {
        TextureProxy* p = (TextureProxy*)operator_new(0xc);
        if (p) {
            p->texture = *ref;
        }
        return p;
    }
    operator_delete((void*)ref);
    return 0;
}
