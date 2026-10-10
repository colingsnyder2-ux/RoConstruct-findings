// from server: 50% by colin
struct VCMDIFrameWnd_CXTPFrameWndBase
{
    char pad_0000[0x17c];
    void* vtbl_17c;
    char pad_0180[0x50];
    void* vtbl_1d0;
    int field_1d4;
    int field_1d8;
    char sub_1dc[4];
};

extern "C" void __stdcall sub_00442560();
extern "C" void __stdcall sub_004073c0();

VCMDIFrameWnd_CXTPFrameWndBase* VCMDIFrameWnd_CXTPFrameWndBase_ctor(VCMDIFrameWnd_CXTPFrameWndBase* self)
{
    sub_00442560();
    self->vtbl_1d0 = (void*)0x788338;
    self->vtbl_17c = (void*)0x78af60;
    self->vtbl_1d0 = (void*)0x78af54;
    self->field_1d4 = 0;
    self->field_1d8 = 0;
    sub_004073c0();
    self->vtbl_17c = (void*)0x78b310;
    self->vtbl_1d0 = (void*)0x78b304;
    *(void**)self->sub_1dc = (void*)0x78b2fc;
    return self;
}
