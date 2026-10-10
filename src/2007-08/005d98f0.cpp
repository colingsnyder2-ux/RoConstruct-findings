// from server: 2% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct GuiDrawImage {
    void* vptr;
    long refCount;
    long weakCount;
};

struct UnifiedWidget {
    void* vptr;
    int field4;
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    void* imageNamePtr;
    unsigned imageState;

    void construct(const void* name, int state);
};

void UnifiedImageWidget::construct(const void* name, int state)
{
    this->vptr = *(void**)name;
    this->field4 = *(int*)((char*)name + 4);

    GuiDrawImage* img = (GuiDrawImage*)0;
    (void)img;

    void* tmp = 0;
    (void)tmp;

    // placeholder
}
