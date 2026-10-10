// from server: 25% by colin
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

extern "C" void* __cdecl malloc(unsigned int size);

extern "C" void __stdcall sub_61ede0(void* self, const char* name);

extern "C" void __stdcall sub_5d5ff0(void* self, void* a, void* b);

UnifiedImageWidget::UnifiedImageWidget(const char* imageName, int imageState) {
    void* mem = malloc(0x10c);
    if (mem) {
        sub_61ede0(mem, imageName);
    } else {
        mem = 0;
    }
    sub_5d5ff0(this, mem, 0);
    *(unsigned*)((char*)this + 0x110) = imageState;
}
