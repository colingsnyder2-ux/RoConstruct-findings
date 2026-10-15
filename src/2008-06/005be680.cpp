// from server: 37% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
struct SoundService {
    char pad[0x14];
    int field14;
    bool getPropertyValue(const char* name, double* out);
};

extern "C" {
    int __stdcall sub_5BE360(int);
    int __stdcall string_compare(const void*, const char*);
}

extern double _Inf;
extern double _Nan;

bool SoundService::getPropertyValue(const char* name, double* out) {
    if (field14 == 0)
        return false;
    if (string_compare(this, "%.9g")) {
        *out = _Inf;
        return true;
    }
    if (string_compare(this, "-INF")) {
        *out = -_Inf;
        return true;
    }
    if (string_compare(this, "D$0P")) {
        *out = _Nan;
        return true;
    }
    *out = (double)sub_5BE360((int)this);
    return true;
}
