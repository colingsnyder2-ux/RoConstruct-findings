// from server: 94% by colin
// roc 2007-08 004d2530  unit: AdornRender  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2530

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct TextureProxy {
    void* field0;
    void* field4;
    void* field8;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" type_info typeinfo_8973b0;

void* __cdecl createTextureProxy(const TextureProxy* src, int type);

void* __cdecl createTextureProxy(const TextureProxy* src, int type)
{
    if (type == 2) {
        if (typeinfo_8973b0 == *(const type_info*)src) {
            return (void*)src;
        }
        return 0;
    }
    if (type == 0) {
        TextureProxy* p = (TextureProxy*)operator_new(0xc);
        if (p) {
            p->field0 = src->field0;
            p->field4 = src->field4;
            p->field8 = src->field8;
        }
        return p;
    }
    operator_delete((void*)src);
    return 0;
}
