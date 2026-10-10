// from server: 44% by colin
struct CXTTreeCtrl {
    void sub_41FC50();
};

extern "C" void __stdcall sub_630490(void*);
extern "C" void __stdcall sub_63048A(void*);
extern "C" void __stdcall sub_630A1E();

void CXTTreeCtrl::sub_41FC50()
{
    char buf[0x58];
    sub_630490(buf);
    (*(void (__stdcall**)(int, void*))(*(int*)(*(int*)((char*)this + 0x54) + 0x68)))(1, buf);
    sub_63048A(buf);
    sub_630A1E();
}
