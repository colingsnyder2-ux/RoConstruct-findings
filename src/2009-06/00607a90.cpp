// from server: 49% by atomic.potato
struct G3DShader {
    static float* getSomething();
};

struct UserInputBase {
    float unk0;
    float unk4;
    float unk8;
    float unkC;
    void getSteerThrottle(float* out, const float* in, int steerMode, int throttleMode);
};

struct PercentPanel {
    char pad0[0xb8];
    int fieldB8;
    int fieldBC;
    float fieldC0;
    float fieldC4;
    float fieldC8;
    float fieldCC;
    void func(float* out);
};

extern float g_float_a4aefc;
extern float g_float_a4af00;

float* G3DShader_getSomething();

void PercentPanel::func(float* out)
{
    float local0;
    float local4;
    float local8;
    float localC;
    float local10;
    float local14;
    float local18;
    float local1C;

    local0 = g_float_a4aefc;
    local4 = g_float_a4af00;

    float* p = G3DShader_getSomething();
    localC = p[0];
    local10 = p[1];

    local14 = local0;
    local18 = local4;

    float tmp[2];
    tmp[0] = local14;
    tmp[1] = local18;

    float tmp2[2];
    tmp2[0] = localC;
    tmp2[1] = local10;

    this->fieldC0 = tmp2[0];
    this->fieldC4 = tmp2[1];

    UserInputBase* uib = (UserInputBase*)0;
    uib->getSteerThrottle(tmp, tmp2, this->fieldB8, this->fieldBC);

    out[0] = tmp[0];
    out[1] = tmp[1];
}
