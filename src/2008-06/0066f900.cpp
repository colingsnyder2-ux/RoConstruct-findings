// from server: 60% by colin
struct OgreViewport {
    int getActualWidth() const;
};

struct AdornRbxGfx {
    int getWidth() const;
};

int AdornRbxGfx::getWidth() const
{
    OgreViewport* vp = *(OgreViewport**)((char*)this + 4);
    return vp->getActualWidth();
}
