// from server: 29% by colin
struct GuiDrawImage {
    char data[0x160];
};

struct UnifiedImageWidget {
    char pad[8];
    GuiDrawImage guiImageDraw;
    void* imageName[4];
    unsigned imageState;

    UnifiedImageWidget(const void* imageName, int imageState);
};

extern "C" void* __cdecl malloc(unsigned size);
extern "C" void __stdcall string_ctor(void* self, const char* s);
extern "C" void __stdcall string_dtor(void* self);
extern "C" void __stdcall sub_5D6200(void* self, void* a, void* b);
extern "C" void __stdcall sub_622F70(void* self, void* a, void* b, void* c);

UnifiedImageWidget::UnifiedImageWidget(const void* imageName, int imageState)
{
    GuiDrawImage* img = (GuiDrawImage*)malloc(0x160);
    if (img) {
        string_ctor(&this->imageName, (const char*)imageName);
        string_ctor((char*)this + 0x18, (const char*)imageName);
        sub_622F70(img, (char*)this + 0x18, (char*)this + 0x18, (void*)imageName);
    }
    sub_5D6200(this, img, (void*)imageName);
    string_dtor((char*)this + 0x18);
    string_dtor(&this->imageName);
    this->imageState = (unsigned)imageState;
}
