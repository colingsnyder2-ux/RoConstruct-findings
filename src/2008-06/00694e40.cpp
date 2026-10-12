// from server: 81% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Invocation;
struct Scene;
struct QueueGroup;
struct Name;

struct Vector {
    char padding[16];
    Invocation** last;
};

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Invocation** current;
    Proxy* endOwner;
    Invocation** end;
};

struct Sequence {
    Iterator iterator();
};

struct RenderQueue {
    QueueGroup* getQueueGroup(unsigned char);
};

struct InvocationTable {
    void* slot0;
    unsigned char (__thiscall *getId)(Invocation*);
    const Name& (__thiscall *getName)(Invocation*);
    void* slots3to8[6];
    void (__thiscall *invoke)(Invocation*, QueueGroup*, Scene*);
};

struct Invocation {
    InvocationTable* table;
};

struct SceneTable {
    void* slots0to133[134];
    RenderQueue* (__thiscall *getQueue)(Scene*, unsigned char);
    void* slots135to141[7];
    bool (__thiscall *isEnabled)(Scene*, unsigned char);
};

struct Scene {
    SceneTable* table;
    bool started(unsigned char, const Name&);
    bool ended(unsigned char, const Name&);
    void f(Sequence*);
};

void Scene::f(Sequence* sequence)
{
    Iterator it = sequence->iterator();

    for (;;) {
        if (!it.owner || it.owner != it.endOwner)
            _invalid_parameter_noinfo();

        if (it.current == it.end)
            break;

        Proxy* savedOwner = it.owner;
        Invocation** savedCurrent = it.current;

        if (!it.owner)
            _invalid_parameter_noinfo();

        Vector* container = it.owner ? it.owner->container : 0;
        if (it.current >= container->last)
            _invalid_parameter_noinfo();

        ++it.current;

        if (!savedOwner)
            _invalid_parameter_noinfo();

        container = savedOwner ? savedOwner->container : 0;
        if (savedCurrent >= container->last)
            _invalid_parameter_noinfo();

        Invocation* invocation = *savedCurrent;
        unsigned char id = invocation->table->getId(invocation);

        if (table->isEnabled(this, id)) {
            const Name& name = invocation->table->getName(invocation);
            QueueGroup* group = table->getQueue(this, id)->getQueueGroup(id);

            do {
                if (started(id, name))
                    break;

                invocation->table->invoke(invocation, group, this);
            } while (ended(id, name));
        }
    }
}
