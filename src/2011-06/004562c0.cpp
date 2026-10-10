// from server: 94% by atomic.potato
struct CRenderSettingsItem
{
    int member;
    int padding;
};

int __cdecl f(const CRenderSettingsItem* item, int value)
{
    return item->padding == value;
}
