// from server: 98% by king_originala
struct Change {
    void *added;
    unsigned long addedControl;
    void *removed;
    unsigned long removedControl;
    ~Change();
};

struct Temporary {
    void *object;
    void *control;
    ~Temporary();
};

struct Iterator {
    void *owner;
    void *node;
    void **value();
};

struct Map {
    void *owner;
    char padding[20];
    void *endNode;
    Iterator *find(Iterator *, void *const *);
};

struct Mutex {
    void lock();
    void unlock();
};

struct Guard {
    Mutex *mutex;
    bool locked;
    Guard(Mutex *p) : mutex(p) {
        mutex->lock();
        locked = true;
    }
    ~Guard() {
        if (locked)
            mutex->unlock();
    }
};

struct Selection {
    void insert(void **, const Temporary &);
    void remove(void **);
};

typedef void (__thiscall *TreeAction)(void *, void *);

struct TreeVTable {
    TreeAction entries[88];
};

struct Tree {
    TreeVTable *vtable;
};

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern Temporary __cdecl convert(void *);

struct S {
    char padding[14];
    bool disabled;
    void update(unsigned long, Change);
};

void S::update(unsigned long, Change change)
{
    if (disabled)
        return;

    if (change.added) {
        Guard guard(reinterpret_cast<Mutex *>(
            reinterpret_cast<char *>(this) - 16));

        void *key = change.added;
        Map *map = reinterpret_cast<Map *>(
            reinterpret_cast<char *>(this) - 60);
        Iterator found;
        map->find(&found, &key);

        void *endNode = map->endNode;
        void *owner = map->owner;
        if (!found.owner || found.owner != owner)
            _invalid_parameter_noinfo();

        if (found.node != endNode) {
            Tree *tree = reinterpret_cast<Tree *>(
                reinterpret_cast<char *>(this) - 212);
            TreeVTable *vtable = tree->vtable;
            vtable->entries[87](tree, found.value()[1]);
        } else {
            reinterpret_cast<Selection *>(
                reinterpret_cast<char *>(this) + 16)->insert(
                    &key, convert(change.added));
        }
    }

    if (change.removed) {
        Guard guard(reinterpret_cast<Mutex *>(
            reinterpret_cast<char *>(this) - 16));

        reinterpret_cast<Selection *>(
            reinterpret_cast<char *>(this) + 16)->remove(&change.removed);

        void *key = change.removed;
        Map *map = reinterpret_cast<Map *>(
            reinterpret_cast<char *>(this) - 60);
        Iterator found;
        map->find(&found, &key);

        void *endNode = map->endNode;
        void *owner = map->owner;
        if (!found.owner || found.owner != owner)
            _invalid_parameter_noinfo();

        if (found.node != endNode) {
            Tree *tree = reinterpret_cast<Tree *>(
                reinterpret_cast<char *>(this) - 212);
            TreeVTable *vtable = tree->vtable;
            vtable->entries[87](tree, found.value()[1]);
        }
    }
}
