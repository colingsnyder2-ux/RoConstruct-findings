// from server: 31% by colin
struct GuiDrawImage {
    char pad[0x100];
};

struct UnifiedWidget {
    char pad[0x104];
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    char imageName[0x20];
    unsigned imageState;
    UnifiedImageWidget(const char* name, int state);
};

extern "C" void __stdcall sub_6007d0();
extern "C" void __stdcall sub_5d58d0();
extern "C" void __stdcall sub_541bf0();

UnifiedImageWidget::UnifiedImageWidget(const char* name, int state)
{
    sub_6007d0();
    *(void**)((char*)this + 0x00) = (void*)0x7c40ec;
    *(void**)((char*)this + 0x04) = (void*)0x7c40e0;
    *(void**)((char*)this + 0x10) = (void*)0x7c40d8;
    *(void**)((char*)this + 0x14) = (void*)0x7c40c8;
    *(void**)((char*)this + 0x2c) = (void*)0x7c40b8;
    *(void**)((char*)this + 0x44) = (void*)0x7c40a8;
    *(void**)((char*)this + 0x5c) = (void*)0x7c4098;
    *(void**)((char*)this + 0x74) = (void*)0x7c4088;
    *(void**)((char*)this + 0x8c) = (void*)0x7c4078;
    *(void**)((char*)this + 0xe8) = (void*)0x7c4070;
    sub_5d58d0();
    sub_541bf0();
}
