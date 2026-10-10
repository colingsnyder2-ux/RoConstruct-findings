// from server: 85% by atomic.potato
extern "C" void __stdcall SetStandardValue(void *, unsigned long, unsigned long, float);

float g_value;

struct CXTPPaintManagerColor
{
    void SetValue(unsigned long value);
};

void CXTPPaintManagerColor::SetValue(unsigned long value)
{
    SetStandardValue(this, value, value, g_value);
}
