// from server: 73% by colin
struct CXTPTabClientWnd_CSingleWorkspace
{
    int GetCount();
    int GetItemData(int, int);
    int IsItemEnabled(int);
    int FindItem(int);
};

int CXTPTabClientWnd_CSingleWorkspace::FindItem(int nData)
{
    int i = 0;
    if (GetCount() > 0)
    {
        do
        {
            if (IsItemEnabled(GetItemData(i, nData)) != 0)
                return i;
            ++i;
        } while (i < GetCount());
    }
    return 0;
}
