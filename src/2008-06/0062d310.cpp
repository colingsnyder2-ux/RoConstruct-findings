// from server: 73% by king_originala
struct Instance;

struct Entry {
    Instance *object;
    void *control;
};

struct Children {
    unsigned char padding[12];
    Entry *first;
    Entry *last;
};

struct Instance {
    virtual ~Instance();
    unsigned char padding[0x100];
    Instance *parent;
    Children *children;

    unsigned int childCount();
};

struct ForceField : Instance {};
struct Workspace : Instance {};

extern void (__cdecl *invalidParameter)();

__declspec(noinline) bool __cdecl hasForceField(Instance *object)
{
    unsigned int i = 0;
    if (object->childCount() > 0) {
        void (__cdecl *handler)() = invalidParameter;
        do {
            Children *children = object->children;
            if (i >= static_cast<unsigned int>(children->last - children->first))
                handler();

            if (dynamic_cast<ForceField *>(children->first[i].object))
                return true;

            ++i;
        } while (i < object->childCount());
    }
    return false;
}

__declspec(dllexport) bool __cdecl protectedByForceField(Instance *object)
{
    if (hasForceField(object))
        return true;

    while ((object = object->parent) != 0) {
        if (dynamic_cast<Workspace *>(object))
            return false;

        if (hasForceField(object))
            return true;
    }
    return false;
}
