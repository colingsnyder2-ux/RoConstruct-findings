// from server: 70% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct String {
    unsigned char data[28];
};

extern bool __cdecl operator<(const String &, const String &);

namespace Ogre {
    struct MeshPtr {
        unsigned char data[12];
        MeshPtr();
        ~MeshPtr();
    };
}

struct Value {
    String key;
    Ogre::MeshPtr mesh;

    Value(const String &, const Ogre::MeshPtr &);
    ~Value();
};

struct Node {
    unsigned char links[12];
    String key;
    Ogre::MeshPtr mesh;
};

struct Map;

struct Proxy {
    Map *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;
};

struct Map {
    Proxy *proxy;
    unsigned char padding[20];
    Node *head;

    Node *lower_bound(const String &);
    Iterator *insert(Iterator *, Proxy *, Node *, const Value &);
    Ogre::MeshPtr &get(const String &);
};

Ogre::MeshPtr &Map::get(const String &key)
{
    Node *position = lower_bound(key);

    if (!this)
        _invalid_parameter_noinfo();

    Iterator last;
    last.owner = proxy;
    last.node = head;

    Iterator current;
    current.owner = proxy;
    current.node = position;

    if (!current.owner || current.owner != last.owner)
        _invalid_parameter_noinfo();

    if (current.node == last.node || key < current.node->key) {
        Iterator result;
        insert(&result, current.owner, current.node,
               Value(key, Ogre::MeshPtr()));
        current = result;
    }

    Map *container;
    if (!current.owner) {
        _invalid_parameter_noinfo();
        container = reinterpret_cast<Map *>(current.owner);
    } else {
        container = current.owner->container;
    }

    if (current.node == container->head)
        _invalid_parameter_noinfo();

    return current.node->mesh;
}
