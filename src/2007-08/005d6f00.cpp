// from server: 33% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct GuiDrawImage {
    void setImageSize(float w, float h);
};

struct UnifiedWidget {
    void construct(float a, float b);
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    void* imageName[4];
    unsigned imageState;

    UnifiedImageWidget(float a, float b);
};

UnifiedImageWidget::UnifiedImageWidget(float a, float b)
{
    GuiDrawImage* img = (GuiDrawImage*)malloc(0xfc);
    if (img) {
        img->setImageSize(a, b);
    }
    construct(a, b);
}
