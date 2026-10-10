// from server: 80% by atomic.potato
struct CXTPPaintManagerColor
{
    void SetStandardValue(unsigned int);
};

extern float g_value;
extern "C" void SetStandardValue(CXTPPaintManagerColor*, unsigned int, unsigned int, float);

void CXTPPaintManagerColor::SetStandardValue(unsigned int value)
{
    ::SetStandardValue(this, value, value, g_value);
}
