// from server: 88% by atomic.potato
struct VCRenderSettingsItem
{
    void f();
};

extern VCRenderSettingsItem* g_value;

void VCRenderSettingsItem::f()
{
    if (g_value == 0)
        g_value = *(VCRenderSettingsItem**)this;
}
