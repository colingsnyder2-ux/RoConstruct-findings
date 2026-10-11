// from server: 75% by colin




struct type_info;

extern "C" {
    int __stdcall MSVCR90_type_info_compare(const type_info* self, const type_info* other);
}

struct Descriptor {
    void* vtable;
    const type_info* getTypeInfo();
};

extern const type_info type_info_Color3;
extern const type_info type_info_placeholder;

void* Descriptor_getTypeInfoOrNull(Descriptor* d)
{
    if (!d)
        return 0;
    const type_info* ti;
    if (d->vtable) {
        ti = d->getTypeInfo();
    } else {
        ti = &type_info_placeholder;
    }
    if (MSVCR90_type_info_compare(ti, &type_info_Color3)) {
        return (char*)d + 4;
    }
    return 0;
}
