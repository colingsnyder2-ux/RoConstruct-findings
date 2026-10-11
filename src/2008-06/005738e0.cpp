// from server: 54% by colin
struct UserInputBase {
    float unk0;
    float unk4;
    float unk8;
    float unkC;
    void getSteerThrottle(float* out, const float* in, int steerMode, int throttleMode);
};

struct PercentPanel {
    char pad[0x15c];
    int field15c;
    int field160;
    float field164;
    float field168;
    float field16c;
    float field170;
    void* func(float* out);
};

float* getGlobalVec();
void sub_5736f0(float* a, float* b);

void* PercentPanel::func(float* out)
{
    float local[4];
    local[0] = *(float*)0x974d78;
    local[1] = *(float*)0x974d7c;
    float* g = getGlobalVec();
    local[2] = g[0];
    local[3] = g[1];
    float tmp[4];
    tmp[0] = local[0];
    tmp[1] = local[1];
    tmp[2] = local[2];
    tmp[3] = local[3];
    sub_5736f0(&field164, tmp);
    UserInputBase* uib = (UserInputBase*)this;
    uib->getSteerThrottle(out, &field164, field15c, field160);

    return this;
}
