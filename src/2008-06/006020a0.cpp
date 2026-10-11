// from server: 25% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct GuiDrawImage {
    char pad[0x198];
};

struct UnifiedImageWidget {
    char pad0[8];
    GuiDrawImage* guiImageDraw;
    void constructImage(GuiDrawImage* img);
    void* init(const void* imageName, int imageState);
};

void* UnifiedImageWidget::init(const void* imageName, int imageState)
{
    GuiDrawImage* img = (GuiDrawImage*)malloc(0x198);
    if (img)
        constructImage(img);
    else
        img = 0;
    this->guiImageDraw = img;
    this->init(imageName, imageState);

    return this;
}
