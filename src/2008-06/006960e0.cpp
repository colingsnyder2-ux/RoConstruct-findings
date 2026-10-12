// from server: 97% by king_originala
struct String;
struct Exception;
struct LogManager;

extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *);
extern void (__thiscall *exceptionConstruct)(Exception *, const char *const &);
extern void (__cdecl *invalidParameter)();
extern LogManager &(__cdecl *getLogManager)();
extern void (__thiscall *logMessage)(LogManager *, const String &, int, bool);

extern unsigned char repeatedCall;
extern char exceptionType[];
extern char nodeType[];
extern char sceneNodeType[];
extern char movableObjectType[];
extern char entityType[];

extern "C" void __stdcall throwException(void *, void *);
extern "C" void *__cdecl dynamicCast(void *, int, const void *, const void *, int);

struct Exception {
    void *table;
    const char *message;
    int ownsMessage;
};

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Iterator {
    void *owner;
    unsigned position;
};

struct IteratorRange {
    Iterator first;
    Iterator last;
};

struct Vector {
    void *owner;
    unsigned unused[2];
    unsigned first;
    unsigned last;
    unsigned capacity;

    Iterator begin();
    Iterator end();
    Iterator erase(Iterator, Iterator);
};

inline Iterator Vector::begin() {
    unsigned position = first;
    if (position > last)
        invalidParameter();
    Iterator result;
    result.owner = owner;
    result.position = position;
    return result;
}

inline Iterator Vector::end() {
    unsigned position = last;
    if (first > position)
        invalidParameter();
    Iterator result;
    result.owner = owner;
    result.position = position;
    return result;
}

struct Object;
struct SceneNode;
struct Entity;

struct ObjectTable {
    void *unused[52];
    Object *(__thiscall *findNode)(Object *, const String &);
};

struct Object {
    ObjectTable *table;
};

struct SceneNodeTable {
    void *unused0[79];
    Object *(__thiscall *attachedObject)(SceneNode *, unsigned);
    void *unused1[10];
    IteratorRange *(__thiscall *children)(SceneNode *, IteratorRange *);
};

struct SceneNode {
    SceneNodeTable *table;
};

struct Entity {
    void collect(void *, void *, Vector *);
};

struct SceneManager {
    unsigned char unused0[0xc0];
    Object *scene;
    unsigned char unused1[0x8ac4 - 0xc4];
    Vector casters;

    Vector *findShadowCastersForLight(void *, void *);
};

Vector *SceneManager::findShadowCastersForLight(void *light, void *camera) {
    if (repeatedCall == 1) {
        light = const_cast<char *>("findShadowCastersForLight call repeated");
        Exception error;
        exceptionConstruct(&error, reinterpret_cast<const char *const &>(light));
        throwException(&error, exceptionType);
    }

    repeatedCall = 1;
    casters.erase(casters.begin(), casters.end());

    SceneNode *root;
    {
        String name("rbxroot");
        root = static_cast<SceneNode *>(
            dynamicCast(scene->table->findNode(scene, name),
                        0, nodeType, sceneNodeType, 0));
    }

    if (!root) {
        String message("RBX Missing or duplicate world node");
        logMessage(&getLogManager(), message, 2, false);
    } else {
        IteratorRange temporary;
        IteratorRange *range = root->table->children(root, &temporary);
        if (!range->first.owner ||
            range->first.owner != range->last.owner)
            invalidParameter();

        if (range->first.position != range->last.position) {
            Entity *entity = static_cast<Entity *>(
                dynamicCast(root->table->attachedObject(root, 0),
                            0, movableObjectType, entityType, 0));
            entity->collect(camera, light, &casters);
        }
    }

    return &casters;
}
