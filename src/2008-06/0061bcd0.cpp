// from server: 35% by colin
// roc 2008-06 0061bcd0  unit: RBX::Lua::LuaArguments  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061bcd0

struct Instance {
    Instance* getRootAncestor();
    bool isAncestorOf(Instance* other);
    char pad[0x100];
    Instance* parent;
};

struct DataModel : Instance {
};

struct StatsService : Instance {
};

struct LuaArguments {
    void checkStatsService();
};

extern "C" void* __stdcall sub_493760(int);
extern "C" void __stdcall sub_489810(void*);
extern "C" void* __stdcall sub_6a17c6(void*, int, void*, void*, int, int);
extern "C" bool __stdcall sub_5cf070(void*, int);

extern void* g_92907c;
extern void* g_93244c;
extern void* g_92e8a0;
extern void* g_844268;
extern void* g_82fa60;
extern void* g_84425c;

void LuaArguments::checkStatsService()
{
    void* v = sub_493760(0);
    void* p = *(void**)v;
    if (sub_5cf070(p, 1))
        return;

    Instance* self = (Instance*)this;

    if (sub_6a17c6(self, 0, &g_92907c, &g_93244c, 0, 0))
    {
        void* v2 = sub_493760(1);
        sub_489810(v2);
    }

    Instance* root;
    if (self->parent)
        root = self->parent->getRootAncestor();
    else
        root = self;

    Instance* stats = (Instance*)sub_6a17c6(root, 0, &g_92907c, &g_92e8a0, 0, 0);
    if (stats)
    {
        if (stats->parent != self && !stats->parent->isAncestorOf(self))
        {
            void* v3 = sub_493760(1);
            sub_489810(v3);
        }

        if (stats->parent != self && !stats->parent->isAncestorOf(self))
        {
            void* v4 = sub_493760(1);
            sub_489810(v4);
        }
    }
}
