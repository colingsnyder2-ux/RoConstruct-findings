// from server: 44% by colin
struct CXTPRibbonQuickAccessControls {
    void construct(int);
};

extern "C" void __stdcall sub_670500();
extern "C" void __stdcall sub_63A120(int);
extern "C" void* __stdcall sub_677390(int);

void CXTPRibbonQuickAccessControls::construct(int arg)
{
    sub_670500();
    *(void**)this = (void*)0x7dfa14;
    *(void**)((char*)this + 0x20) = (void*)0x7df9b4;
    *(int*)((char*)this + 0x154) = arg;
    *(int*)((char*)this + 0x178) = arg;
    sub_63A120(8);
    *(int*)((char*)this + 0xf8) = 3;
    *(void**)((char*)this + 0x16c) = sub_677390(0);
}
