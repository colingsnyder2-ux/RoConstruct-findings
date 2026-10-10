// from server: 40% by colin
// roc 2007-08 005d6640  unit: RBX::UnifiedImageWidget  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d6640

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

struct std_string {
    void* data;
    unsigned int size;
    unsigned int cap;
    std_string(const char*);
    std_string(const std_string&);
    ~std_string();
};

struct GuiDrawImage {
    char pad[0x120];
};

struct UnifiedWidget {
    char pad[0x8];
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    std_string imageName;
    unsigned int imageState;

    UnifiedImageWidget(const std_string& name, int state);
};

void __stdcall sub_5d5b20(UnifiedImageWidget* self, void* a, void* b);
void __stdcall sub_61b8b0(void* self, void* a, void* b);

UnifiedImageWidget::UnifiedImageWidget(const std_string& name, int state)
    : imageName(name)
{
    void* mem = malloc(0x120);
    if (mem) {
        sub_61b8b0(mem, (void*)&name, (void*)&name);
        sub_5d5b20(this, mem, 0);
    }
    this->imageState = state;
}
