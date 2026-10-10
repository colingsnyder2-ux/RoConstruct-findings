// from server: 56% by colin
struct UnifiedImageWidget {
    bool isVisible() const;
    void updateImageState(int state);
};

extern "C" void* __stdcall sub_5555B0(void* out, int state);
extern "C" void __stdcall sub_601260(void* p, int a, void* b, void* c);

void UnifiedImageWidget::updateImageState(int state)
{
    if (!isVisible())
        return;

    int v;
    if (state == 1) {
        v = 1;
    } else {
        unsigned int t = state - 2;
        v = (1 < t) ? 2 : 0;
    }

    char buf[16];
    void* r = sub_5555B0(buf, v);
    sub_601260((char*)this + 0x100, 1, r, buf);
}
