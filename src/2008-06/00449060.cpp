// from server: 53% by colin
namespace RBX {

class CRenderSettings
{
public:
    char gap0[0x14c];
    float antialiasingMode;
    float aaSamples;
    void setAASamples(float value);
};

void CRenderSettings::setAASamples(float value)
{
    float zero = 0.0f;
    float* chosen = &value;
    if (!(zero == value)) {
        chosen = &zero;
    }
    if (aaSamples == *chosen) {
        return;
    }
    antialiasingMode = *chosen;
    extern void (__stdcall *raisePropertyChanged)(const void*);
    raisePropertyChanged((const void*)0x96d480);
}

}
