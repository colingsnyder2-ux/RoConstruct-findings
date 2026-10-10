// from server: 86% by why2
struct Viewport {
    int getActualWidth();
};

struct AdornRbxGfx {
    char pad[4];
    Viewport* field4;
    int getWidth();
};

int AdornRbxGfx::getWidth() {
    Viewport* p = *(Viewport**)((char*)field4 + 0x2c);
    return p->getActualWidth();
}
