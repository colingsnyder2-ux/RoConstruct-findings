// from server: 91% by atomic.potato
struct CXTPPaintManagerColor
{
    void f(unsigned int);
};

struct CXTPPaintManagerColorGradient
{
    void SetStandardValue(unsigned int, unsigned int, float);
};

extern float g_value;

void CXTPPaintManagerColor::f(unsigned int value)
{
    CXTPPaintManagerColorGradient* p =
        (CXTPPaintManagerColorGradient*)this;
    p->SetStandardValue(value, value, g_value);
}
