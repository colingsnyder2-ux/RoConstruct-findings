// from server: 95% by colin
struct SoundChannel {
    void setMaxDistance(int value);
    char pad[0x120];
    int maxDistance;
};

extern "C" void __stdcall sub_58BA70();
extern "C" void __stdcall sub_58BA30();
extern "C" void __stdcall sub_58C1B0(SoundChannel* self);
extern "C" void __stdcall sub_444710(SoundChannel* self, const char* name);

void SoundChannel::setMaxDistance(int value)
{
    if (value == -1) {
        sub_58BA70();
        return;
    }
    if (value == 0) {
        sub_58BA30();
        return;
    }
    if (value > this->maxDistance) {
        sub_58C1B0(this);
        this->maxDistance = value;
        sub_444710(this, "hiXu");
    }
}
