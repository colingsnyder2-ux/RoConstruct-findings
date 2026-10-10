// from server: 18% by colin
struct GuiDrawImage {
    char pad[0x30];
};

struct UnifiedWidget {
    char pad[0x8];
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    void* imageName[4];
    unsigned imageState;

    UnifiedImageWidget(const void* imageName, int imageState);
};

extern "C" void* __stdcall malloc(unsigned size);
extern "C" void __stdcall std_string_ctor(void* self, const char* s);
extern "C" void __stdcall std_string_dtor(void* self);
extern "C" void __stdcall sub_556720(void* self, void* a, void* b);
extern "C" void __stdcall sub_5d6150(void* self, void* a, unsigned b);

UnifiedImageWidget::UnifiedImageWidget(const void* imageName, int imageState)
{
    void* p = malloc(0x140);
    if (p) {
        std_string_ctor((char*)this + 0x34, (const char*)imageName);
        std_string_ctor((char*)this + 0x18, (const char*)imageName);
        sub_556720(p, (char*)this + 0x18, (char*)this + 0x34);
        std_string_dtor((char*)this + 0x18);
        std_string_dtor((char*)this + 0x34);
    }
    sub_5d6150(this, p, (unsigned)imageState);
}
