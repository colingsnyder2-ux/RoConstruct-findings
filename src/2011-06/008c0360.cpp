// from server: 69% by atomic.potato
struct RECT
{
    int left;
    int top;
    int right;
    int bottom;
};

struct CXTPDockingPanePaintManager
{
    int data[0x1f];
};

struct CXTPDockingPane
{
    CXTPDockingPanePaintManager* GetPaintManager();
};

struct CXTPDockingPaneMiniWnd
{
    int IsThemed();
    CXTPDockingPane* GetPane();
    void AdjustWindowRect(RECT*);
};

extern int XTPDockingPaneMiniWnd_IsThemed(CXTPDockingPaneMiniWnd*);
extern CXTPDockingPane* XTPDockingPaneMiniWnd_GetPane(CXTPDockingPaneMiniWnd*);
extern CXTPDockingPanePaintManager* XTPDockingPane_GetPaintManager(CXTPDockingPane*);

int CXTPDockingPaneMiniWnd::IsThemed()
{
    return XTPDockingPaneMiniWnd_IsThemed(this);
}

CXTPDockingPane* CXTPDockingPaneMiniWnd::GetPane()
{
    return XTPDockingPaneMiniWnd_GetPane(this);
}

CXTPDockingPanePaintManager* CXTPDockingPane::GetPaintManager()
{
    return XTPDockingPane_GetPaintManager(this);
}

void CXTPDockingPaneMiniWnd::AdjustWindowRect(RECT* r)
{
    if (IsThemed())
    {
        r->left += 3;
        r->top += 3;
        r->right -= 3;
        r->bottom -= 3;
        r->top += GetPane()->GetPaintManager()->data[0x1e] + 2;
    }
    else
        GetPane();
}
