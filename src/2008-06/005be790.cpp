// from server: 34% by colin
// roc 2008-06 005be790  unit: RBX::Soundscape::SoundService  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005be790

extern "C" int __stdcall sub_80236C(const char*, const char*);
extern "C" float __stdcall sub_5be480(int);

struct SoundService {
    char pad[0x14];
    int field_14;
    bool getValue(const char* name, float* out);
};

bool SoundService::getValue(const char* name, float* out) {
    if (this->field_14 == 0)
        return false;
    if (sub_80236C(name, "%.9g")) {
        *out = *(float*)0x80250c;
        return true;
    }
    if (sub_80236C(name, "-INF")) {
        *out = -*(float*)0x80250c;
        return true;
    }
    if (sub_80236C(name, "D$(P")) {
        *out = *(float*)0x80251c;
        return true;
    }
    *out = sub_5be480((int)this);
    return true;
}
