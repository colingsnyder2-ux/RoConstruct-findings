// from server: 89% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Tree;

struct Owner {
    Tree *tree;
};

struct Node {
    char padding[16];
    int value;
};

struct Iterator {
    Owner *owner;
    Node *node;
};

struct InsertResult {
    Iterator first;
    bool second;
};

struct Tree {
    Owner *owner;
    char padding[20];
    Node *endNode;
    char tail[16];

    Iterator find(const int &key);
    InsertResult insert(const int &value);
};

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;

    void lock();
    void unlock();
};

struct Guard {
    Mutex *mutex;
    bool locked;

    Guard(Mutex &m);
    ~Guard();
};

inline Guard::Guard(Mutex &m) : mutex(&m)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

struct CSelectionTreeCtrl {
    char padding[152];
    Tree source;
    Mutex mutex;
    char gap[52];
    Tree destination;

    void func_00424600(int key);
};

void CSelectionTreeCtrl::func_00424600(int key)
{
    Guard guard(mutex);
    Tree &tree = source;
    Iterator found = tree.find(key);
    Iterator last;
    last.node = tree.endNode;
    last.owner = tree.owner;
    Owner *owner = found.owner;

    if (owner != last.owner)
        _invalid_parameter_noinfo();

    Node *node = found.node;
    if (node != last.node) {
        if (!owner)
            _invalid_parameter_noinfo();
        else
            owner = reinterpret_cast<Owner *>(owner->tree);

        if (node == reinterpret_cast<Tree *>(owner)->endNode)
            _invalid_parameter_noinfo();

        destination.insert(node->value);
    }
}
