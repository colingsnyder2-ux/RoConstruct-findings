// from server: 14% by atomic.potato
struct CXTColorWnd
{
    void First(double);
    void Second(double);
    void Function(double, double);
};

void CXTColorWnd::First(double value)
{
}

void CXTColorWnd::Second(double value)
{
}

void CXTColorWnd::Function(double first, double second)
{
    First(first);
    Second(second);
}
