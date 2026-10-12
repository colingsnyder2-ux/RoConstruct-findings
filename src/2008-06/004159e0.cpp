// from server: 85% by king_originala
struct SafeArray {
    unsigned short dimensions;
    unsigned short features;
};

extern "C" long __stdcall SafeArrayGetVartype(SafeArray*, unsigned short*);

long __cdecl f(SafeArray* array, unsigned short* type)
{
    long result = SafeArrayGetVartype(array, type);
    if (result >= 0 && type && *type == 13 && array) {
        unsigned short features = array->features;
        if ((features & 0x40) && (features & 0x400))
            *type = 9;
    }
    return result;
}
