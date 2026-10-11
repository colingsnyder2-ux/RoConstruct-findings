// from server: 72% by atomic.potato
struct CPropertyGridItemBrickColor
{
    char padding[36];
    int* items;
    int count;
    int GetItem(int index);
};

struct CXTPPropertyGridItem
{
    char padding[32];
    void* m_pItems;
    void AddItem(void* item);
    void InsertItem(int index, void* item);
};

void CXTPPropertyGridItem::AddItem(void* item)
{
    CPropertyGridItemBrickColor* p = (CPropertyGridItemBrickColor*)item;
    int i = 0;
    if (p->count > 0)
    {
        do
        {
            void* existing = (void*)p->GetItem(i);
            InsertItem(i, existing);
            i++;
        } while (i < p->count);
    }
}
