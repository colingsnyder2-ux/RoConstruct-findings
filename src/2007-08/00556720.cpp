// from server: 42% by colin
struct GuiItem {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual void v034();
    virtual void v038();
    virtual void v03c();
    virtual void v040();
    virtual void v044();
    virtual void v048();
    virtual void v04c();
    virtual void v050();
    virtual void v054();
    virtual void v058();
    virtual void v05c();
    virtual void v060();
    virtual void v064();
    virtual void v068();
    virtual void v06c();
    virtual void v070();
    virtual void v074(void*);
};

struct UnifiedWidget : GuiItem {
    void init();
    void func_00556720(const void*);
};

extern "C" {
    void __stdcall sub_00555c70();
    void __stdcall sub_00555880();
    void __stdcall sub_00541bf0();
    void __stdcall sub_0077e6a4();
    void __stdcall sub_0077e690();
}

void UnifiedWidget::func_00556720(const void* arg)
{
    sub_00555c70();
    *(void**)((char*)this + 0xfc) = 0;
    *(void**)this = (void*)0x7a87cc;
    *(void**)((char*)this + 4) = (void*)0x7a87c0;
    *(void**)((char*)this + 0x10) = (void*)0x7a87b8;
    *(void**)((char*)this + 0x14) = (void*)0x7a87a8;
    *(void**)((char*)this + 0x2c) = (void*)0x7a8798;
    *(void**)((char*)this + 0x44) = (void*)0x7a8788;
    *(void**)((char*)this + 0x5c) = (void*)0x7a8778;
    *(void**)((char*)this + 0x74) = (void*)0x7a8768;
    *(void**)((char*)this + 0x8c) = (void*)0x7a8758;
    *(void**)((char*)this + 0xe8) = (void*)0x7a8750;
    sub_0077e6a4();
    sub_00555880();
    sub_00541bf0();
    sub_0077e690();
}
