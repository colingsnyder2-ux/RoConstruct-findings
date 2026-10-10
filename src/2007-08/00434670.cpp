// from server: 45% by colin
struct QTextBrowser {
    void setOpenLinks(bool);
    void setOpenExternalLinks(bool);
};

struct DeclarationView : QTextBrowser {
    DeclarationView(void* parent);
};

extern "C" void __stdcall sub_664F00();
extern "C" void __stdcall sub_6304C0();

DeclarationView::DeclarationView(void* parent)
{
    sub_664F00();
    *(void**)((char*)this + 0xa0) = 0;
    *(void**)this = (void*)0x78c40c;
    *(void**)((char*)this + 0x60) = (void*)0x78c38c;
    sub_6304C0();
    *(int*)((char*)this + 0xa8) = 0;
}
