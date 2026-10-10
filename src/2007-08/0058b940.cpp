// from server: 72% by colin
struct SoundService {
    char pad[0xf4];
    void* field_f4;
    char pad2[0x118 - 0xf8];
    float field_118;
    void setListenerValue(float value);
};

extern "C" void __stdcall sub_62FC38(void*, float);
extern "C" void __stdcall sub_444710(SoundService*, const char*);

extern const char sListenerValue[];

void SoundService::setListenerValue(float value)
{
    float v;
    if (value < 0.0f) {
        v = 0.0f;
    } else if (value > 1.0f) {
        v = 1.0f;
    } else {
        v = value;
    }

    if (v != field_118) {
        field_118 = v;
        if (field_f4) {
            sub_62FC38(field_f4, v);
            sub_444710(this, sListenerValue);
        } else {
            sub_444710(this, sListenerValue);
        }
    }
}
