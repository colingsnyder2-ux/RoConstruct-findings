// from server: 7% by colin
struct CXTSplitterWnd
{
    void* getRelated();
    void* getOwner();
    void* findChild(void*);
    void* getParent();
    void removeChild(void*, int);
    void destroyChild(void*);
    void doLayout(void*, int, int);
};

void* CXTSplitterWnd::getRelated() { return 0; }
void* CXTSplitterWnd::getOwner() { return 0; }
void* CXTSplitterWnd::findChild(void*) { return 0; }
void* CXTSplitterWnd::getParent() { return 0; }
void CXTSplitterWnd::removeChild(void*, int) {}
void CXTSplitterWnd::destroyChild(void*) {}

void CXTSplitterWnd::doLayout(void* p, int a, int b)
{
    void* child = p;
    if (child == 0)
    {
        child = getRelated();
    }
    void* owner = getOwner();
    if (findChild(owner) != 0)
    {
        void* parent = getParent();
        removeChild(child, 1);
    }
    else
    {
        destroyChild(child);
    }
}
