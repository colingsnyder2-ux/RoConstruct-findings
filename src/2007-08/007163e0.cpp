// from server: 87% by colin
struct CXTPRibbonTab {
    char pad[4];
    int* items;
    int count;
    int hitTest(int, int);
    int getCount();
};

extern "C" int __stdcall PtInRect(const void*, int, int);

int CXTPRibbonTab::hitTest(int x, int y)
{
    int i = 0;
    if (this->getCount() > 0) {
        do {
            if (i < 0 || i >= this->count)
                break;
            int* p = &this->items[i];
            if (PtInRect((void*)((char*)p + 0x10), x, y) != 0) {
                if (i >= this->count)
                    break;
                return this->items[i];
            }
            i++;
        } while (i < this->getCount());
    }
    return 0;
}
