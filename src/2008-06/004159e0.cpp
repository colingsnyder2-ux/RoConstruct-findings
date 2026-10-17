// from server: 95% by colin
struct SafeArray {
    unsigned short dimensions;
    unsigned short flags;
};

extern "C" {
    long (__stdcall *SafeArrayGetVartype)(SafeArray*, unsigned short*);
}

long __cdecl f(SafeArray* array, unsigned short* type)
{
    long result = SafeArrayGetVartype(array, type);
    if (result >= 0 && array != 0 && array->dimensions == 13 && type != 0) {
        unsigned short flags = array->flags;
        if ((flags & 0x40) != 0 && (flags & 0x400) != 0)
            *type = 9;
    }
    return result;
}
