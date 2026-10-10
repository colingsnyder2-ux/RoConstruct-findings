// from server: 62% by atomic.potato
struct CXTPRibbonBar
{
    int IsFrameThemeEnabled() const;
    int IsEnabled() const;
};

int CXTPRibbonBar::IsEnabled() const
{
    if (!IsFrameThemeEnabled())
        return *(const int*)((const char*)this + 0x290) != 0;
    return 1;
}
