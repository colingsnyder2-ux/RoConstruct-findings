// from server: 68% by atomic.potato
struct Viewport {
    int getActualWidth();
    int getActualHeight();
    int getActualLeft();
    int getActualTop();
};

struct AdornRbxGfx {
    char pad0[4];
    void* field4;
    void draw(int* out);
};

extern "C" void __stdcall sub_45B950(int, int, int, int, int*);

void AdornRbxGfx::draw(int* out) {
    Viewport* vp = *(Viewport**)((char*)field4 + 0x10);
    float left = (float)vp->getActualLeft();
    float top = (float)vp->getActualTop();
    float width = (float)vp->getActualWidth();
    float height = (float)vp->getActualHeight();
    sub_45B950(0, 0, 0, 0, out);
    out[0] = (int)(left + width);
    out[1] = (int)(top + height);
}
