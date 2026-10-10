// from server: 25% by colin
struct UnifiedImageWidget {
    void construct(const void* imageName, int imageState);
};

extern "C" void* __stdcall malloc(unsigned int size);
extern "C" void __stdcall sub_61b590();
extern "C" void __stdcall sub_5d5de0();
extern "C" void __stdcall sub_77e69c();
extern "C" void __stdcall sub_77e6ac();

void UnifiedImageWidget::construct(const void* imageName, int imageState) {
    void* mem = malloc(0x11c);
    if (mem) {
        sub_77e69c();
        sub_61b590();
    }
    sub_5d5de0();
    sub_77e6ac();
    sub_77e6ac();
}
