// from server: 52% by atomic.potato
typedef unsigned long DWORD;

struct type_info;

extern "C" {
    int __cdecl sub_00A40A50(const type_info*, const type_info*);
}

struct VTextureId {
    void* vtable;
};

struct TypedPropertyDescriptor {
    static const type_info* getTypeInfo();
    static bool isType(const type_info*);
    static VTextureId* cast(void*);
};

const type_info* TypedPropertyDescriptor::getTypeInfo()
{
    return (const type_info*)0x00C07A44;
}

bool TypedPropertyDescriptor::isType(const type_info* p)
{
    return sub_00A40A50(p, (const type_info*)0x00C5A6BC) != 0;
}

VTextureId* TypedPropertyDescriptor::cast(void* p)
{
    if (p == 0)
        return 0;
    const type_info* ti;
    void** vt = *(void***)p;
    if (vt != 0)
        ti = (const type_info*)((const type_info* (*)(void*))vt[1])(p);
    else
        ti = getTypeInfo();
    if (!isType(ti))
        return 0;
    return (VTextureId*)((char*)p + 4);
}
