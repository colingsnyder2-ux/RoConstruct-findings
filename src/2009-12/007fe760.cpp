// from server: 6% by atomic.potato
struct CXTPPaintManager {
    int GetItem(int index);
    void SetItem(int a, int b);
    void SetItem2(int a, int b);

    void f(int a, int b, int c, int d, int e, int f2, int g);
};

int CXTPPaintManager::GetItem(int index) {
    return 0;
}

void CXTPPaintManager::SetItem(int a, int b) {
}

void CXTPPaintManager::SetItem2(int a, int b) {
}

void CXTPPaintManager::f(int a, int b, int c, int d, int e, int f2, int g) {
    int local;
    if (g != -1) {
        int r = GetItem(g);
        SetItem(r, (int)&local);
    }
    if (d != g && d != -1) {
        int r1 = GetItem(d);
        int r2 = GetItem(d);
        SetItem2(r1, r2);
    }
}
