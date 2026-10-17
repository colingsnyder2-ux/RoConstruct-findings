// from server: 75% by colin
// roc 2008-06 00449060  unit: CRenderSettings  size: 96 bytes

extern "C" void __stdcall sub_40db00(void*);

struct CRenderSettings {
    char pad[0x14c];
    float field_14c;
    float field_150;
    void setColor(float color);
};

void CRenderSettings::setColor(float color) {
    float zero = 0.0f;
    float* src;
    if (zero < color) {
        src = &color;
    } else {
        src = &zero;
    }
    float* p150 = &field_150;
    if (!(field_150 < *src)) {
        p150 = src;
    }
    float v = *p150;
    if (field_14c != v) {
        field_14c = v;
        sub_40db00((void*)0x96d480);
    }
}
