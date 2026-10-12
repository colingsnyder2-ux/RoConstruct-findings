// from server: 55% by colin
namespace RBX {

class CRenderSettings
{
public:
    enum AASamples
    {
        NONE = 1,
        AA4 = 4,
        AA8 = 8,
    };

    static AASamples aaSamples;

    static void setAASamples(int value);
};

void CRenderSettings::setAASamples(int value)
{
    AASamples samples;
    if (value <= 1) {
        samples = NONE;
    } else if (value >= 1000) {
        samples = AA8;
    } else {
        samples = (AASamples)value;
    }

    if (samples != aaSamples) {
        aaSamples = samples;
        extern void raisePropertyChanged(const char*);
        raisePropertyChanged(".?AVAggregatingSceneManager@RenderBase@RBX@@");
    }
}

}
