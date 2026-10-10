// from server: 74% by atomic.potato
extern "C" void __stdcall UpdateRenderSetting(void *, int);

struct CRenderSettingsItem
{
    char padding[0xb4];
    int value;
    void SetValue(int);
};

void CRenderSettingsItem::SetValue(int value)
{
    if (value != this->value)
    {
        this->value = value;
        UpdateRenderSetting((char *)this + 0x144, 0x00e19d70);
    }
}
