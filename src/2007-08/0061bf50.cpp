// from server: 63% by colin
struct GuiDrawImage {
    void destroy();
};

struct UnifiedWidget {
    virtual ~UnifiedWidget();
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    char pad[0x100 - sizeof(GuiDrawImage) - sizeof(void*)];
    void* field_100;
    UnifiedImageWidget();
    ~UnifiedImageWidget();
};

UnifiedImageWidget::~UnifiedImageWidget()
{
    field_100 = 0;
    guiImageDraw.destroy();
    UnifiedWidget::~UnifiedWidget();
}
