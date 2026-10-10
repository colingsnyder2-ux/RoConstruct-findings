// from server: 35% by colin
struct CXTTreeViewBase {
    void construct();
};

extern "C" void __cdecl sub_6305DA();
extern "C" void __cdecl sub_666DB0();

void CXTTreeViewBase::construct()
{
    sub_6305DA();
    *(void**)this = (void*)0x7c9b3c;
    *(void**)((char*)this + 0x54) = (void*)0x7ca03c;
    sub_666DB0();
    *(void**)this = (void*)0x7ca0bc;
    *(void**)((char*)this + 0x54) = (void*)0x7ca03c;
    *((unsigned char*)this + 0x90) = 1;
}
