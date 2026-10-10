// from server: 15% by atomic.potato
struct CXTPRibbonBar
{
    int *GetSelectedTab();
    int IsSelectedTabVisible();
    operator int();
};

int *CXTPRibbonBar::GetSelectedTab()
{
    return 0;
}

int CXTPRibbonBar::IsSelectedTabVisible()
{
    if (this->GetSelectedTab() != 0 && this->operator int() == 0)
        return 1;
    return 0;
}
