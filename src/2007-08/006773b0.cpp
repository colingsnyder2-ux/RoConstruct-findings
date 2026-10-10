// from server: 86% by colin
struct CXTPPopupBar {
    char pad[0x1dc];
    void* field_1dc;
    void destructor_helper();
    void destroy();
};

extern "C" void __stdcall sub_77ddbc(void*);

void CXTPPopupBar::destructor_helper()
{
    *(void**)this = (void*)0x7cd2c4;
    *(void**)((char*)this + 0x54) = (void*)0x7cd2b4;
    *(void**)((char*)this + 0x5c) = (void*)0x7cd254;
    sub_77ddbc(&field_1dc);
    destroy();
}
