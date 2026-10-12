// from server: 86% by king_originala
struct String;
struct Map;
struct Node;

struct IteratorOwner {
    Map* container;
};

struct Iterator {
    IteratorOwner* owner;
    Node* node;
};

struct Node {
    char padding[40];
    void* object;
};

struct Map {
    IteratorOwner* owner;
    char padding[20];
    Node* endNode;

    Iterator find(const String& key);
    void erase(Iterator* result, IteratorOwner* owner, Node* node);
};

struct Factory {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void destroy(void* object);
};

struct Root;

extern "C" {
    extern void (__cdecl *invalidParameter)();
    extern Root& (__cdecl *getSingleton)();
    extern Factory* (__thiscall *getMovableObjectFactory)(Root*, const String&);
}

struct SceneManager {
    Map* getObjectMap(const String& type);
    void destroyObject(const String& name, const String& type);
};

void SceneManager::destroyObject(const String& name, const String& type)
{
    Map* objects = getObjectMap(type);
    Factory* factory = getMovableObjectFactory(&getSingleton(), type);
    Iterator position = objects->find(name);
    IteratorOwner* owner = position.owner;
    Node* endNode = objects->endNode;
    IteratorOwner* endOwner = objects->owner;

    if (!owner || owner != endOwner)
        invalidParameter();

    if (position.node != endNode) {
        Map* container = owner
            ? owner->container
            : (invalidParameter(), (Map*)0);

        if (position.node == container->endNode)
            invalidParameter();

        factory->destroy(position.node->object);
        objects->erase(&position, owner, position.node);
    }
}
