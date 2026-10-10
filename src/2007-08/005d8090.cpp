// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GuiDrawImage {
    char pad[0x20];
};

struct UnifiedWidget {
    char pad[0x100];
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    char imageName[0x20];
    unsigned imageState;
    UnifiedImageWidget(const char* imageName, int imageState);
};

struct RefCounted {
    long refCount;
    long weakRefCount;
    virtual void destroy();
    virtual void weakDestroy();
};

struct SharedPtr {
    void* ptr;
    RefCounted* ref;
};

struct GuiItem {
    char pad[0x100];
};

struct ChatWidget : UnifiedWidget {
    char pad0[0x100];
    SharedPtr code;
    ChatWidget(const char* text, SharedPtr code);
};

extern "C" void* __cdecl getImageDraw();
extern "C" void __cdecl drawImage(void*, int, int, int, int, float, float, float, float);
extern "C" void __cdecl stringCtor(void*, const char*);
extern "C" void __cdecl stringDtor(void*);
extern "C" void __cdecl sharedPtrAssign(SharedPtr*, SharedPtr*);
extern "C" void __cdecl sharedPtrRelease(SharedPtr*);
extern "C" void __cdecl sharedPtrCopy(SharedPtr*, SharedPtr*);

UnifiedImageWidget::UnifiedImageWidget(const char* imageName, int imageState) {
    float* img = (float*)getImageDraw();
    float a = img[0];
    float b = img[1];
    float c = img[2];
    float d = img[3];
    
    int params[8];
    params[0] = 3;
    params[1] = 0;
    *(short*)&params[2] = 10;
    *(short*)&params[3] = 10;
    params[4] = 1;
    *(float*)&params[5] = a;
    *(float*)&params[6] = b;
    *(float*)&params[7] = c;
    
    drawImage(params, 0, 0, 0, 0, a, b, c, d);
    
    stringCtor((char*)this + 0x100, imageName);
    this->imageState = imageState;
}
