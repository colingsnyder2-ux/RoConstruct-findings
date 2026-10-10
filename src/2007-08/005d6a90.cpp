// from server: 37% by colin
struct GuiDrawImage {
    char pad[0x138];
};

struct UnifiedWidget {
    char pad[8];
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    void* imageName[4];
    unsigned imageState;
    UnifiedImageWidget(const void* imageName, int imageState);
};

extern "C" void* __cdecl malloc(unsigned size);
extern "C" void __stdcall std_string_ctor(void* self, const char* s);
extern "C" void __stdcall std_string_dtor(void* self);
extern "C" void __stdcall sub_005d6530(void* self, const void* a, const void* b);
extern "C" void __stdcall sub_005d5f40(void* self, void* a, void* b);

UnifiedImageWidget::UnifiedImageWidget(const void* imageName, int imageState)
{
    char local[0x28];
    void* mem = malloc(0x138);
    if (mem) {
        std_string_ctor(local, (const char*)imageName);
        sub_005d6530(mem, local, &imageState);
        std_string_dtor(local);
    } else {
        mem = 0;
    }
    sub_005d5f40(this, mem, 0);
}
