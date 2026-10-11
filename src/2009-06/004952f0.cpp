// from server: 41% by atomic.potato
struct Root {
    static Root& getSingleton();
    void* getRenderSystem();
};

struct RenderSystem {
    void* vtable;
    void setViewport(int* a, int* b);
};

struct Vec4 { float x, y, z, w; };

struct Adapter {
    char pad0[0x44];
    char pad44[0x14];
    void* field58;
    void insert(void* a, void* b, void* c);
};

extern "C" {
    void* __stdcall getSingletonThunk();
    void* __stdcall getRenderSystemThunk();
}

void Adapter::insert(void* a, void* b, void* c) {
    void* rs = getSingletonThunk();
    RenderSystem* r = (RenderSystem*)getRenderSystemThunk();
    Vec4 v;
    v.x = ((float*)c)[0];
    v.y = ((float*)c)[1];
    v.z = ((float*)c)[2];
    v.w = ((float*)c)[3];
    r->setViewport((int*)&v, (int*)&v);
    void* edi = field58;
    void* esi = (char*)this + 0x44;
    int zero = 0;
    void* ebx = ((void* (*)(void*, void*, void*))0x494f20)(esi, edi, &zero);
    ((void (*)(void*, int))0x494f60)(esi, 1);
    *(void**)((char*)edi + 4) = ebx;
    *(void**)(*(void**)((char*)ebx + 4)) = ebx;
}
