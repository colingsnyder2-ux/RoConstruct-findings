// from server: 93% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct PropertyDescriptor {};
extern const PropertyDescriptor property;
extern const float upperBound;

struct CRenderSettings
{
    char padding[0x14c];
    float lowerBound;
    float value;

    void raisePropertyChanged(const PropertyDescriptor&);
    void setValue(float);
};

void CRenderSettings::setValue(float incoming)
{
    const float upper = upperBound;
    const float& lowerClamped = lowerBound < incoming ? incoming : lowerBound;
    const float& clamped = lowerClamped < upper ? lowerClamped : upper;

    if (clamped != value) {
        value = clamped;
        raisePropertyChanged(property);
    }
}
