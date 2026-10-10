// from server: 44% by colin
// roc 2007-08 00682340  unit: CXTPCompatibleDC  size: 540 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682340

extern "C" {
__declspec(dllimport) int __stdcall CopyRect(void* lprcDst, const void* lprcSrc);
}

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CXTPCompatibleDC {
    int m_nWidth;
    int m_nHeight;
    int m_nWidth2;
    int m_nHeight2;
    void DrawImage(int x, int y, int w, int h, int a, int b, int c, int d);
    int ScaleX(int x);
    int ScaleY(int y);
    void DrawImage2(int x, int y, int w, int h, int a, int b, int c, int d);
};

int CXTPCompatibleDC::ScaleX(int x) {
    return x;
}

int CXTPCompatibleDC::ScaleY(int y) {
    return y;
}

void CXTPCompatibleDC::DrawImage(int x, int y, int w, int h, int a, int b, int c, int d) {
    CRect rc;
    CopyRect(&rc, &rc);
    if (a == 0) {
        DrawImage2(x, y, w, h, b, c, d, 0);
        return;
    }
    if (c != 0) {
        if (rc.top < b) rc.top = b;
        if (rc.bottom > d) rc.bottom = d;
        if (rc.left > w) return;
        if (rc.right < x) return;
        if (rc.left < x) {
            int t = (rc.right - x);
            int u = (rc.bottom - rc.top);
            int v = (this->m_nWidth2 - this->m_nWidth);
            float f = (float)t / (float)v;
            int r = ScaleX(x);
            rc.left = x;
            DrawImage2(x, y, w, h, r, b, c, d);
        }
        if (rc.right > w) {
            int t = (rc.right - w);
            int u = (rc.bottom - rc.top);
            int v = (this->m_nWidth2 - this->m_nWidth);
            float f = (float)t / (float)v;
            int r = ScaleX(w);
            rc.right = w;
            DrawImage2(x, y, w, h, r, b, c, d);
        }
        DrawImage2(x, y, w, h, rc.left, rc.top, rc.right, rc.bottom);
    } else {
        if (rc.left < x) rc.left = x;
        if (rc.right > w) rc.right = w;
        if (rc.top > d) return;
        if (rc.bottom < b) return;
        if (rc.top < b) {
            int t = (rc.bottom - b);
            int u = (rc.right - rc.left);
            int v = (this->m_nHeight2 - this->m_nHeight);
            float f = (float)t / (float)v;
            int r = ScaleY(b);
            rc.top = b;
            DrawImage2(x, y, w, h, rc.left, r, rc.right, rc.bottom);
        }
        if (rc.bottom > d) {
            int t = (rc.bottom - d);
            int u = (rc.right - rc.left);
            int v = (this->m_nHeight2 - this->m_nHeight);
            float f = (float)t / (float)v;
            int r = ScaleY(d);
            rc.bottom = d;
            DrawImage2(x, y, w, h, rc.left, r, rc.right, rc.bottom);
        }
        DrawImage2(x, y, w, h, rc.left, rc.top, rc.right, rc.bottom);
    }
}
