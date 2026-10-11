// from server: 29% by colin
struct SoundService {
    char pad[0x14];
    int field14;
    bool getPropertyValue(const char* name, double* out);
};

extern "C" {
    int __stdcall sub_5BE360(int);
    int __cdecl strcmp(const char*, const char*);
}

extern double _Inf;
extern double _Nan;

bool SoundService::getPropertyValue(const char* name, double* out) {
    if (field14 == 0)
        return false;
    if (strcmp(name, "%.9g") == 0) {
        *out = _Inf;
        return true;
    }
    if (strcmp(name, "-INF") == 0) {
        *out = -_Inf;
        return true;
    }
    if (strcmp(name, "D$0P") == 0) {
        *out = _Nan;
        return true;
    }
    *out = (double)sub_5BE360((int)this);
    return true;
}
