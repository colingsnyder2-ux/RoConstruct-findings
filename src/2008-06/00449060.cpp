// from server: 56% by colin
namespace RBX {

struct Vector2int16
{
    short x;
    short y;
};

class CRenderSettings
{
public:
    char gap0[0x14c];
    float antialiasingMode;
    float aaSamples;
    void setAASamples(const Vector2int16& value);
};

void CRenderSettings::setAASamples(const Vector2int16& value)
{
    float zero = 0.0f;
    const float* chosen = (const float*)&value;
    if (!(zero == *(const float*)&value)) {
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
