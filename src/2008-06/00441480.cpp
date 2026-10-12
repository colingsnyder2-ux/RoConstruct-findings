// from server: 41% by colin
struct XTPPropertyGridItem
{
    void __stdcall SetValue(const void* value);
};


extern "C" void __stdcall FreeSomething(void* p);

struct HVCXTPPropertyGridItem
{
    void __stdcall SetValue(const void* value);
    void* GetSomething();
};

void __stdcall HVCXTPPropertyGridItem::SetValue(const void* value)
{
    void* local = 0;
    void* saved = GetSomething();
    XTPPropertyGridItem* item = (XTPPropertyGridItem*)this;
    item->SetValue(value);
    int result = ((int (__stdcall*)(void))((*(void***)this)[0x39]))();
    FreeSomething(saved);
}
