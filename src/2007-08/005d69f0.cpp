// from server: 22% by colin
struct UnifiedImageWidget {
    void construct(const void* imageName, int imageState);
};

extern "C" void* __stdcall malloc(unsigned int size);

void UnifiedImageWidget::construct(const void* imageName, int imageState) {
    void* mem = malloc(0x124);
    if (mem) {
        extern void __stdcall sub_5d5820(void* self, const void* name, int state, float a, float b);
        sub_5d5820(mem, imageName, imageState, 0.0f, 0.0f);
    } else {
        mem = 0;
    }
    extern void __stdcall sub_5d5e90(void* self, void* mem, void* name);
    sub_5d5e90(this, mem, (void*)imageName);
}
