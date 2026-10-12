// from server: 35% by colin
struct SoundService {
    bool findService(int* out);
};

extern "C" int __cdecl sub_5be240(int);

bool SoundService::findService(int* out) {
    int* self = (int*)this;
    int v = self[5];
    if (v == 0) {
        return false;
    }
    *out = sub_5be240((int)this);
    return true;
}
