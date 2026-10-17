// from server: 60% by colin
struct CRenderSettings {
    float field_144;
    float field_148;
    void sub_448FD0(float);
    void sub_40DB00(const void*);
    void setAASamples(float);
};

void CRenderSettings::setAASamples(float value) {
    float* esi = &field_148;
    if (!(value < *esi) && !(value == *esi)) {
        sub_448FD0(value);
        value = *esi;
    }
    if (!(value == *esi)) {
        esi = &value;
    }
    float v = *esi;
    float zero = 0.0f;
    float* p;
    if (v == zero) {
        p = &v;
    } else {
        p = &zero;
    }
    float result = *p;
    if (!(result == field_144)) {
        field_144 = result;
        sub_40DB00((const void*)0x96d448);
    }
}
