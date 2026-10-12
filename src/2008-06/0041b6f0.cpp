// from server: 71% by king_originala
extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    unsigned char reserved[36];
    int references;
    unsigned char remaining[44];
    Object(unsigned long);
};

struct Node {
    unsigned char reserved[16];
    Object* value;
};

struct TreeData {
    unsigned char reserved[24];
    Node* end;
};

struct Owner {
    TreeData* data;
};

struct Iterator {
    Owner* owner;
    Node* node;
    Object*& dereference() const;
};

struct Tree {
    Owner* owner;
    unsigned char reserved[20];
    Node* end;
    unsigned long count;

    Iterator* find(Iterator*, const unsigned long*);
    Object** slot(const unsigned long*);
};

struct Lock {
    int value;
    unsigned char flag;
    int count;
    void acquire();
    void release();
};

extern Tree tree;
extern Lock lock;

struct Guard {
    Lock* lock;
    unsigned char active;
    Guard(Lock*);
    ~Guard();
};

inline Guard::Guard(Lock* p) : lock(p) {
    lock->acquire();
    active = 1;
}

inline Guard::~Guard() {
    if (active)
        lock->release();
}

inline Object*& Iterator::dereference() const {
    if (!owner)
        _invalid_parameter_noinfo();

    TreeData* data = owner ? owner->data : 0;
    if (node == data->end)
        _invalid_parameter_noinfo();

    return node->value;
}

Object* getThreadObject() {
    Guard guard(&lock);
    unsigned long threadId = GetCurrentThreadId();
    unsigned long key = threadId;
    Iterator result;
    tree.find(&result, &key);

    Iterator found = result;
    Node* end = tree.end;
    if (!found.owner || found.owner != tree.owner)
        _invalid_parameter_noinfo();

    if (found.node != end) {
        ++found.dereference()->references;
        return found.dereference();
    }

    Object* object = new Object(threadId);
    *tree.slot(&key) = object;
    ++object->references;
    return object;
}
