// from server: 78% by atomic.potato
struct type_info;

extern "C" {
    typedef bool (__stdcall *TypeInfoEqualsFn)(const type_info*, const type_info*);
    extern TypeInfoEqualsFn g_typeInfoEquals;
}

struct MeshId;

struct Placeholder {
    virtual const type_info* getTypeInfo();
};

struct Holder {
    Placeholder* ptr;
};

extern const type_info typeInfoMeshId;
extern const type_info typeInfoPlaceholder;

MeshId* func_006ee570(Holder* h)
{
    if (h == 0)
        return 0;

    Placeholder* p = h->ptr;
    const type_info* ti;
    if (p != 0)
        ti = p->getTypeInfo();
    else
        ti = &typeInfoPlaceholder;

    if (!g_typeInfoEquals(&typeInfoMeshId, ti))
        return 0;

    return (MeshId*)((char*)h->ptr + 4);
}
