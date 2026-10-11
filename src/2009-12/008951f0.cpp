// from server: 77% by atomic.potato
struct CXTPRibbonBar {
    char pad_0000[0x268];
    void* field_0268;

    void func_008951F0();
};

extern "C" void __fastcall sub_009266AC(CXTPRibbonBar* self);
extern "C" void* __fastcall sub_00894C70(CXTPRibbonBar* self);

void CXTPRibbonBar::func_008951F0()
{
    sub_009266AC(this);
    void* p = sub_00894C70(this);
    void** vtbl = *(void***)p;
    void (*fn)(void*) = (void (*)(void*))vtbl[0xac / 4];
    fn(p);
    char* s = (char*)this->field_0268;
    void** vtbl2 = *(void***)(s + 0x184);
    void (*fn2)(void*) = (void (*)(void*))vtbl2[1];
    fn2(s + 0x184);
}
