// from server: 28% by colin
struct GuiDrawImage {
    char pad[0x100];
};

struct UnifiedWidget {
    char pad[0x100];
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    char imageName[0x10];
    unsigned imageState;
    UnifiedImageWidget(const char* imageName, int imageState);
};

extern "C" void* __cdecl malloc(unsigned size);
extern "C" void __fastcall sub_623C60(void* mem, int, const char* name, int state, int flag);
extern "C" void __fastcall sub_5D62E0(UnifiedImageWidget* self, int, void* mem, int flag);

UnifiedImageWidget::UnifiedImageWidget(const char* imageName, int imageState) {
    void* mem = malloc(0x11c);
    if (mem) {
        sub_623C60(mem, 0, imageName, imageState, 0);
    } else {
        mem = 0;
    }
    sub_5D62E0(this, 0, mem, 0);
}
