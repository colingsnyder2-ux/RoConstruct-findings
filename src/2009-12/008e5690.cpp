// from server: 53% by atomic.potato
struct CXTCaptionButton
{
    int OnSetText(int, int, int, int);
    int GetValue();
};

int CXTCaptionButton::OnSetText(int a, int b, int c, int d)
{
    if (GetValue())
    {
        CXTCaptionButton* p = this;
        p->GetValue();
    }
    return 0;
}
