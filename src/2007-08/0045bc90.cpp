// from server: 36% by colin
struct CPublishAsPlaceDialog {
    char pad[0x74];
    void* vtable_74;
    void construct(unsigned int a, unsigned int b, unsigned int c);
};

extern "C" void __stdcall sub_44CC10();
extern "C" void __stdcall sub_6308EC();

void CPublishAsPlaceDialog::construct(unsigned int a, unsigned int b, unsigned int c) {
    sub_44CC10();
    *(void**)this = (void*)0x793e44;
    *(void**)((char*)this + 0x74) = (void*)0x793e18;
    sub_6308EC();
}
