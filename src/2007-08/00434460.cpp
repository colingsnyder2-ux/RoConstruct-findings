// from server: 22% by colin
struct CMemberTreeView
{
    char pad0[0x60];
    char pad1[0x40];
    char pad2[0x40];
    void sub_6304ba();
    void sub_664f30();
    ~CMemberTreeView();
};

CMemberTreeView::~CMemberTreeView()
{
    *(void**)this = (void*)0x78c7bc;
    *(void**)((char*)this + 0x60) = (void*)0x78c73c;
    sub_6304ba();
    sub_664f30();
}
