// from server: 88% by colin
struct ArrowPanel {
    bool canRender();
    void* renderAdorn(void* adorn);
};

extern float* getCoordinateFrame();
extern void renderAdornHelper(ArrowPanel* self, void* adorn);

bool ArrowPanel::canRender()
{
    return false;
}

void* ArrowPanel::renderAdorn(void* adorn)
{
    if (((bool (__thiscall*)(ArrowPanel*))((*(void***)this)[0x58 / 4]))(this)) {
        renderAdornHelper(this, adorn);
        return adorn;
    }
    float* cf = getCoordinateFrame();
    *(float*)adorn = cf[0];
    *(float*)((char*)adorn + 4) = cf[1];
    return adorn;
}
