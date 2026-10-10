// from server: 17% by colin
struct CXTPDockingPaneVisioTheme {
    int DrawPane(int, int, int, int, int, int);
    int GetColor(int);
    int GetTextColor(int);
    int DrawText(int, int, int, int, int, int);
    int DrawLine(int, int, int, int, int, int);
    int m_nBorder;
    char pad[0x78 - 4];
    int m_nTextHeight;
    char pad2[0x80 - 0x7c];
    int m_nFont;
};

struct CXTPDockingPaneBase {
    virtual int GetType();
    virtual void Draw(int, int, int, int, int, int);
    virtual void DrawText(int, int, int, int, int, int);
    char pad[0x190];
    int m_bActive;
    char pad2[0x1a0 - 0x194];
    void* m_pFont;
};

extern "C" {
    int __stdcall GetDeviceCaps(void*, int);
    int __stdcall GetTextExtentPoint32A(void*, const char*, int, void*);
}

int CXTPDockingPaneVisioTheme::DrawPane(int x, int y, int cx, int cy, int a5, int a6)
{
    int type = ((CXTPDockingPaneBase*)a6)->GetType();
    int active = 0;
    if (m_nBorder != 0 && ((CXTPDockingPaneBase*)a6)->m_bActive != 0)
        active = 1;

    int textHeight = m_nTextHeight;
    void* font = ((CXTPDockingPaneBase*)a6)->m_pFont;
    int fontHeight;
    ((void (__stdcall*)(void*, int*))((*(void***)font)[0x5c/4]))(font, &fontHeight);

    int left = x;
    int top = y;
    int right = x + cx;
    int bottom = y + cy;

    if (type != 0) {
        left += 2;
        right -= 1;
    } else {
        top += 2;
        bottom -= 1;
    }

    int h = bottom - top - textHeight - 3;

    if (type != 0) {
        left += 2;
        right -= h;
    } else {
        top += 2;
        bottom -= h;
    }

    ((void (__stdcall*)(int, int, int, int, int, int, int, int, int))((*(void***)this)[0x60/4]))(
        a6, x, y, cx, cy, 0, 0x10, 0, type);

    int color = GetColor(0x12);

    if (type != 0) {
        left += 1;
        right += 4;
        bottom -= 2;
    } else {
        top += 4;
        bottom += 1;
        right -= 2;
    }

    if (GetTextExtentPoint32A(0, 0, 0, 0)) {
        // skip
    } else {
        int c;
        if (GetColor(0x11))
            c = color;
        else
            c = GetColor(0x11);
        ((void (__stdcall*)(int))((*(void***)a6)[0x38/4]))(c);
    }

    int textW = DrawText(a6, x, y, cx, cy, 0);
    int textX = (left + right) / 2;
    int textY = (top + bottom) / 2;

    if (type != 0) {
        int dy = bottom - textY;
        if (dy > 0) {
            int c = active ? 0x26 : 0x3a;
            DrawLine(a6, textX - 3, textY, textX - 3, textY + textW, c);
            DrawLine(a6, textX - 1, textY, textX - 1, textY + textW, c);
            DrawLine(a6, textX + 1, textY, textX + 1, textY + textW, c);
            DrawLine(a6, textX + 3, textY, textX + 3, textY + textW, c);
        }
    } else {
        int dx = right - textX;
        if (dx > 0) {
            int c = active ? 0x26 : 0x3a;
            DrawLine(a6, textX, textY - 3, textX + textW, textY - 3, c);
            DrawLine(a6, textX, textY - 1, textX + textW, textY - 1, c);
            DrawLine(a6, textX, textY + 1, textX + textW, textY + 1, c);
            DrawLine(a6, textX, textY + 3, textX + textW, textY + 3, c);
        }
    }

    return 0;
}
