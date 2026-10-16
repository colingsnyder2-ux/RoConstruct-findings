// Manually recovered PartInstance float setter (member at 0x1e8); was 95% via rbxgs-dll PartInstance.cpp.`n// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
struct PropertyDescriptor;

struct PartInstance
{
    char padding[0x1e8];
    float renderImportance;
    void setRenderImportance(float value);
    void raisePropertyChanged(const PropertyDescriptor&);
};

extern const PropertyDescriptor prop_RenderImportance;

void PartInstance::setRenderImportance(float value)
{
    if (value != renderImportance)
    {
        renderImportance = value;
        raisePropertyChanged(prop_RenderImportance);
    }
}
