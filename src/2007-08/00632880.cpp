// from server: 45% by colin
struct CXTPCommandBarKeyboardTip {
    void SetSite(void* pSite);
};

extern "C" void __stdcall sub_630490(void* p);
extern "C" void __stdcall sub_63048a(void* p);
extern "C" void __stdcall sub_630a1e(void* p);
extern "C" void* __stdcall sub_6321d0(void* p);

void CXTPCommandBarKeyboardTip::SetSite(void* pSite)
{
    char buf[0x58];
    sub_630490(buf);
    void* p = sub_6321d0(*(void**)((char*)this + 0x6c));
    void* vtbl = *(void**)p;
    void* fn = *(void**)((char*)vtbl + 0x104);
    ((void (__stdcall*)(void*, void*, void*))fn)(p, this, buf);
    sub_63048a(buf);
}
