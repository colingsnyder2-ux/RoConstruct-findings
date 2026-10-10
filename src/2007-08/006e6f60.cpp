// from server: 51% by colin
extern "C" unsigned long __stdcall GetSysColor(int);

struct CXTPDockingPaneOfficeTheme {
    void RefreshMetrics();
    int GetColor(int);
    void SetColor(int, unsigned long);
    void SetColor2(int, unsigned long);
};

struct CXTPPaintManagerColor {
    void SetColor(unsigned long);
    void SetColor2(unsigned long);
};

void CXTPDockingPaneOfficeTheme::RefreshMetrics()
{
    int c;
    CXTPPaintManagerColor* p1;
    CXTPPaintManagerColor* p2;

    this->RefreshMetrics();

    p1 = (CXTPPaintManagerColor*)((char*)this + 0x204);
    p2 = (CXTPPaintManagerColor*)((char*)this + 0x1e4);

    p1->SetColor(this->GetColor(0x1b));
    p1->SetColor2(this->GetColor(2));

    p2->SetColor(GetSysColor(0x1c));
    p2->SetColor2(this->GetColor(3));

    *(int*)((char*)this + 0x228) = this->GetColor(0x12);
    *(int*)((char*)this + 0x234) = this->GetColor(9);

    if (this->GetColor(3) != 0)
    {
        p2->SetColor(this->GetColor(3));
        p1->SetColor(this->GetColor(2));
    }
}
