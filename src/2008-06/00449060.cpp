// from server: 79% by colin
struct CRenderSettings {
    char padding[0x14c];
    float value14c;
    float value150;
    void setValue(float);
};

extern "C" void __stdcall notifyChange(void*);

void CRenderSettings::setValue(float v)
{
    float zero = 0.0f;
    float* src;
    if (v == zero)
        src = &v;
    else
        src = &zero;

    float* chosen;
    if (value150 < *src)
        chosen = &value150;
    else
        chosen = src;

    float result = *chosen;
    if (value14c != result) {
        value14c = result;
        notifyChange(reinterpret_cast<void*>(0x96d480));
    }
}
