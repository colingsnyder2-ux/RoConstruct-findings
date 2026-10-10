// from server: 32% by colin
// roc 2007-08 005d65c0  unit: RBX::UnifiedImageWidget  size: 125 bytes
// library rbxgs v8datamodel/ChatWidget.cpp

extern "C" void* __cdecl malloc(unsigned int size);

struct GuiDrawImage {
    char pad[0x120];
};

struct UnifiedImageWidget {
    char pad0[0x58];
    GuiDrawImage guiImageDraw;
    char pad1[0x120];
    void* imageName;
    unsigned imageState;

    UnifiedImageWidget(const void* name, int state);
};

void __stdcall sub_5d5770(void* self, void* out);
void __stdcall sub_5d5a70(void* self, void* a, void* b);

UnifiedImageWidget::UnifiedImageWidget(const void* name, int state)
{
    void* mem = malloc(0x120);
    void* tmp = 0;
    if (mem) {
        sub_5d5770(mem, &tmp);
    } else {
        mem = 0;
    }
    sub_5d5a70(this, mem, tmp);
    this->imageState = state;
}
