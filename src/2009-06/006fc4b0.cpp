// from server: 60% by why2
struct Viewport {
    int getActualHeight() const;
};

struct AdornRbxGfx {
    void* field0;
    Viewport* viewport;
    int getHeight() const;
};

int AdornRbxGfx::getHeight() const {
    return viewport->getActualHeight();
}
