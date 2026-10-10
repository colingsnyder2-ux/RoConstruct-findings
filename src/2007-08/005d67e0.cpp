// from server: 32% by colin
// roc 2007-08 005d67e0  unit: RBX::UnifiedImageWidget  size: 197 bytes

extern "C" void* __stdcall malloc(unsigned int size);

struct String {
    char pad[0x1c];
};

struct GuiDrawImage {
    char pad[0x40];
};

struct UnifiedImageWidget {
    char pad0[0x8];
    GuiDrawImage guiImageDraw;
    String imageName;
    unsigned imageState;

    UnifiedImageWidget(const String& name, int state);
};

extern "C" void __stdcall string_ctor(void* self, const char* s);
extern "C" void __stdcall string_dtor(void* self);
extern "C" void __stdcall sub_555f40(void* self, const String* name, int state);
extern "C" void __stdcall sub_5d5c80(void* self, void* a, void* b);

UnifiedImageWidget::UnifiedImageWidget(const String& name, int state)
{
    String local;
    void* p = malloc(0x114);
    if (p) {
        string_ctor(&local, (const char*)&name);
        sub_555f40(p, &local, 0);
        sub_5d5c80(this, p, 0);
        string_dtor(&local);
    } else {
        sub_5d5c80(this, 0, 0);
    }
    string_ctor(&imageName, (const char*)&name);
    imageState = state;
}
