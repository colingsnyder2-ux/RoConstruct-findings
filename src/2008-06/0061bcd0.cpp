// from server: 72% by king_originala
struct Instance {
    unsigned char reserved[0x104];
    Instance* parent;

    Instance* getRootAncestor();
    bool isAncestorOf(Instance* instance);
    void checkModification();
};

struct DataModel {
    unsigned char reserved[0x21c];
    Instance* guiHooks;
    unsigned char gap[4];
    Instance* guiRoot;
};

struct Context {
    unsigned long identity;
    void report(int level, const char* message);
};

extern "C" Context* __cdecl getContext();
extern bool __cdecl hasPermission(unsigned long identity, int permission);
extern "C" void* __cdecl runtimeCast(
    void* object, int displacement, const void* sourceType,
    const void* targetType, int reference);

void Instance::checkModification()
{
    if (hasPermission(getContext()->identity, 1))
        return;

    if (runtimeCast(this, 0, (const void*)0x92907c,
                    (const void*)0x93244c, 0))
        getContext()->report(1, (const char*)0x844268);

    Instance* root = parent ? parent->getRootAncestor() : this;

    DataModel* model = (DataModel*)runtimeCast(
        root, 0, (const void*)0x92907c, (const void*)0x92e8a0, 0);

    if (model) {
        if (model->guiHooks == this ||
            model->guiHooks->isAncestorOf(this))
            getContext()->report(1, (const char*)0x82fa60);

        if (model->guiRoot == this ||
            model->guiRoot->isAncestorOf(this))
            getContext()->report(1, (const char*)0x84425c);
    }
}
