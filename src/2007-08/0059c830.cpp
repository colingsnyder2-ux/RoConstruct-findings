// from server: 51% by colin
struct UserInputBase {
    float unk0;
    float unk4;
    float unk8;
    float unkC;
    void getSteerThrottle(float* out, const float* in, int steerMode, int throttleMode);
};

void UserInputBase::getSteerThrottle(float* out, const float* in, int steerMode, int throttleMode)
{
    float steer = 0.0f;
    float throttle = 0.0f;
    float dx = in[2] - in[0];
    float dy = in[3] - in[1];
    float scale = *(float*)0x797e9c;

    switch (steerMode) {
    case 2:
        steer = this->unk0;
        break;
    case 3:
        steer = this->unk8 - dx;
        break;
    case 4:
        steer = (this->unk8 - dx) * scale;
        break;
    }

    switch (throttleMode) {
    case 0:
        throttle = this->unk4;
        break;
    case 1:
        throttle = this->unkC - dy;
        break;
    case 4:
        throttle = (this->unkC - dy) * scale;
        break;
    }

    out[0] = in[0] + steer;
    out[1] = in[1] + throttle;
    out[2] = dx;
    out[3] = dy;
}
