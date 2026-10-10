// from server: 52% by colin
struct RbxSubEntityShadowRenderable {
    char pad[0x6c];
    void* field_0x6c;
    void getShadowRenderable();
};

void RbxSubEntityShadowRenderable::getShadowRenderable() {
    void* p = field_0x6c;
    void** vtbl = *(void***)p;
    void (*fn)(void*) = (void (*)(void*))vtbl[4];
    fn(p);
}
