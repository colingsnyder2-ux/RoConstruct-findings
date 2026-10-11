// from server: 26% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct GuiDrawImage {
    char data[0x168];
};

struct UnifiedImageWidget {
    char pad[0x1c];
    GuiDrawImage* guiImageDraw;
    void __cdecl construct(const char* imageName, int imageState);
};

void UnifiedImageWidget::construct(const char* imageName, int imageState)
{
    GuiDrawImage* p = (GuiDrawImage*)malloc(0x168);
    if (p) {
        p->data[0] = 0;
    }
    guiImageDraw = p;
}
