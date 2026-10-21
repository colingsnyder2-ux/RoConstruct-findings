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
extern char instanceType;
extern char forceFieldType;
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);

__declspec(noinline) bool __cdecl hasForceField(Instance *object)
{
    unsigned int i = 0;
    if (object->childCount() > 0) {
        void (__cdecl *handler)() = invalidParameter;
        do {
            Children *children = object->children;
            if (i >= static_cast<unsigned int>(children->last - children->first))
                handler();

            if (__RTDynamicCast(children->first[i].object, 0, &instanceType, &forceFieldType, 0))
                return true;

            ++i;
        } while (i < object->childCount());
    }
    return false;
}

