// from server: 29% by colin
// roc 2007-08 005d6710  unit: RBX::UnifiedImageWidget  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d6710

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __stdcall free(void*);

struct GuiDrawImage {
    char pad[0x13c];
};

struct UnifiedWidget {
    char pad[0x8];
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    void* imageName[7];
    unsigned imageState;

    UnifiedImageWidget(const void* imageName, int imageState);
};

extern "C" void __stdcall string_ctor(void*, const char*);
extern "C" void __stdcall string_dtor(void*);
extern "C" void __stdcall sub_5d5bd0(void*, void*, void*);
extern "C" void __stdcall sub_61bfa0(void*, void*, void*, void*);

UnifiedImageWidget::UnifiedImageWidget(const void* imageName, int imageState)
{
    void* p = malloc(0x13c);
    if (p) {
        string_ctor(p, (const char*)imageName);
        sub_61bfa0(p, (void*)&imageState, (void*)&imageState, (void*)&imageState);
        sub_5d5bd0(this, p, (void*)&imageState);
        string_dtor(p);
        free(p);
    }
}
