// from server: 76% by colin
struct CXTPReportPaintManager
{
    void DrawVerticalLine(int, int, int, int, unsigned int);
    void DrawHorizontalLine(int, int, int, int, unsigned int);
    void DrawLines(int, int, int, int, int);
};

void CXTPReportPaintManager::DrawLines(int a1, int a2, int a3, int a4, int a5)
{
    DrawVerticalLine(a1, a2, a5, a3 - a1, 0);
    DrawHorizontalLine(a1, a2, a3, a4 - a2, 0);
}
