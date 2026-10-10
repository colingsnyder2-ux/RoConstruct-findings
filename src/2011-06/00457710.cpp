// from server: 75% by atomic.potato
extern "C" void __cdecl UpdateRenderSettings(int);

struct CRenderSettingsItem
{
    int padding[51];
    int value;
    void SetValue(int);
};

void CRenderSettingsItem::SetValue(int value)
{
    if (value == this->value)
        return;

    this->value = value;
    value = 0x00CB3320;
    UpdateRenderSettings(value);
}
