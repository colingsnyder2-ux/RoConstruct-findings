// from server: 81% by atomic.potato
// roc 2009-12 0083b850  unit: CXTPToolBar::CControlButtonExpand  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b850

extern "C" int __stdcall FreeLibrary(void*);
extern "C" void __stdcall sub_98d690();

struct CXTPToolBar__CControlButtonExpand {
    int f();
};

int CXTPToolBar__CControlButtonExpand::f()
{
    int result = 1;
    if (*(int*)((char*)this + 8) != 0 && *(int*)((char*)this + 0xc) == 2)
        result = FreeLibrary(*(void**)((char*)this + 8));
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    sub_98d690();
    return result;
}
