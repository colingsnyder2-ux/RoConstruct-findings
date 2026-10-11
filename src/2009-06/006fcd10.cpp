// from server: 61% by atomic.potato
struct Viewport {
    int getActualWidth() const;
    int getActualHeight() const;
    int getActualLeft() const;
    int getActualTop() const;
};

struct AdornRbxGfx {
    char pad[4];
    void* vp;
    void* f(void* a);
};

extern "C" void __stdcall sub_45B740(float, float, float, float, void*);

void* AdornRbxGfx::f(void* a) {
    Viewport* vp = *(Viewport**)((char*)this->vp + 0x2c);
    float w = (float)vp->getActualWidth();
    float h = (float)vp->getActualHeight();
    float l = (float)vp->getActualLeft();
    float t = (float)vp->getActualTop();
    sub_45B740(l + w, t + h, l, t, a);
    return a;
}
