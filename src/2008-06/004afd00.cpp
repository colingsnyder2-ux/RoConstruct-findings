// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object;
struct Shared {
    Object* object;
    Control* control;
    __forceinline ~Shared() {
        if (control) {
            Control* p = control;
            if (_InterlockedDecrement(&p->strong) == 0) {
                p->dispose();
                if (_InterlockedDecrement(&p->weak) == 0)
                    p->destroy();
            }
        }
    }
};

struct Connection {
    char data[16];
    void disconnect();
};

struct Signal {
    void set(int);
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    Signal* signal;
    unsigned int padding;
    Connection first;
    Connection second;
    unsigned char active;
    unsigned char tail[4];
    unsigned char nil;
};

struct Tree;
struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;
};

struct Tree {
    Owner* owner;
    char padding[20];
    Node* head;
    Iterator* find(Iterator*, unsigned int*);
    Iterator* erase(Iterator*, Iterator);
};

#pragma pointers_to_members(full_generality, multiple_inheritance)
struct S;
struct Placeholder {};

struct Callback {
    bool (S::*function)(Shared);
    S* instance;
    Placeholder argument;
};

struct Object {
    void connect(Callback);
};

struct S {
    char padding[0x2c38];
    Tree tree;
    bool remove(Shared);
};

bool S::remove(Shared value) {
    if (!value.object)
        return false;

    unsigned int key = reinterpret_cast<unsigned int>(value.object);
    Iterator position;
    Tree* t = &tree;
    t->find(&position, &key);

    Owner* owner = position.owner;
    Node* end = t->head;
    Owner* expected = t->owner;
    if (!owner || owner != expected)
        invalid_parameter_noinfo();

    Node* node = position.node;
    if (node == end)
        return false;

    Callback callback;
    callback.function = &S::remove;
    callback.instance = this;
    value.object->connect(callback);

    Tree* ownerTree = owner
        ? owner->tree
        : (invalid_parameter_noinfo(), static_cast<Tree*>(0));
    if (node == ownerTree->head)
        invalid_parameter_noinfo();

    node->first.disconnect();
    node->second.disconnect();
    if (node->active)
        node->signal->set(0);

    Iterator current;
    current.owner = owner;
    current.node = node;
    t->erase(&position, current);
    return true;
}
