// from server: 37% by colin
// roc 2007-08 006e8600  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e8600

extern "C" {
    int __stdcall sub_77dcd0();
    int __stdcall sub_77dcc8();
    int __stdcall sub_77dd98();
}

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

struct CSIZE {
    int cx;
    int cy;
};

struct CXTPDockingPaneBase;

struct CXTPDockingPaneOffice2003Theme {
    int GetCaptionHeight(CXTPDockingPaneBase* pPane, int nWidth);
};

struct CXTPDockingPaneTabbedContainer {
    int GetCaptionHeight();
};

extern "C" {
    void __stdcall sub_680550(CRect* pRect, CXTPDockingPaneBase* pPane, int* pOffset);
    void __stdcall sub_45da00(CPoint* pPoint, CXTPDockingPaneBase* pPane, int nIndex);
    void __stdcall sub_636470(CXTPDockingPaneBase* pPane, int* pRect, int nFlags);
    void __stdcall sub_67ff60(CRect* pRect);
    void __stdcall sub_6805d0(CRect* pRect);
}

int CXTPDockingPaneOffice2003Theme::GetCaptionHeight(CXTPDockingPaneBase* pPane, int nWidth)
{
    int nResult = 0;
    CRect rect;
    CPoint pt;
    int nHeight;
    int nOffset;
    int nCaptionHeight;
    int nTop;
    int nBottom;
    int nLeft;
    int nRight;
    int nCenter;

    if (sub_77dcd0()) {
        return 0;
    }

    if (nWidth != 0) {
        sub_680550(&rect, pPane, &nOffset);
        sub_45da00(&pt, pPane, 0);

        nTop = rect.top;
        nBottom = rect.bottom;
        nLeft = rect.left;
        nRight = rect.right;

        if (nRight > nLeft) {
            nCenter = (nRight - nLeft - pt.x) / 2;
            nRight = nRight - nCenter;
            nLeft = nRight - nLeft + nTop;
            sub_636470(pPane, &nLeft, 0x8920);
        }

        nResult = rect.bottom - rect.top;
        sub_6805d0(&rect);
    } else {
        sub_680550(&rect, pPane, &nOffset);

        nCaptionHeight = ((CXTPDockingPaneTabbedContainer*)pPane)->GetCaptionHeight();
        sub_77dcc8();
        sub_77dd98();
        nCaptionHeight = ((CXTPDockingPaneTabbedContainer*)pPane)->GetCaptionHeight();

        if (nOffset != 0) {
            sub_67ff60(&rect);
            sub_636470(pPane, &nLeft, 0xc20);
            nResult = rect.bottom - rect.top;
        }

        sub_6805d0(&rect);
    }

    return nResult;
}
