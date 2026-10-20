// from server: 85% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast

extern const char renderSettingsChanged;

struct CRenderSettings {
    char pad[0x148];
    float field_144;
    float field_148;
    void sub_448FD0(float);
    void sub_40DB00(const void*);
    void setAASamples(float);
};

inline const float& minimum(const float& a, const float& b) { return a < b ? a : b; }
inline const float& maximum(const float& a, const float& b) { return a < b ? b : a; }

void CRenderSettings::setAASamples(float value) {
    if (value > field_148)
        sub_448FD0(value);
    value = minimum(value, field_148);
    float zero = 0.0f;
    float result = maximum(zero, value);
    if (result != field_144) {
        field_144 = result;
        sub_40DB00(&renderSettingsChanged);
    }
}
