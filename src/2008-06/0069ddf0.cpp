// from server: 91% by king_originala
struct String;
struct Factory;
struct Root;

extern Root& (__cdecl* rootSingleton)();
extern Factory* (__thiscall* rootFactory)(Root*, const String&);
extern void (__thiscall* stringConstruct)(String*, const char*);
extern String (__cdecl* stringPrefix)(const char*, const String&);
extern String (__cdecl* const stringSuffix)(const String&, const char*);
extern String (__cdecl* stringJoin)(const String&, const String&);
extern void (__cdecl* invalidParameter)();

struct String {
    void* proxy;
    union {
        char buffer[16];
        char* text;
    };
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    String(const String&);
    ~String();
};

__forceinline String::String(const char* text)
{
    stringConstruct(this, text);
}

struct ExceptionCode {
    unsigned char value;
};

struct Exception {
    void* table;
    char data[156];

    Exception(const Exception&);
    ~Exception();
};

Exception __cdecl makeException(
    ExceptionCode,
    const String&,
    const String&,
    const char*,
    int);

struct S;

struct FactoryTable {
    void* slots[3];
    void* (__thiscall* create)(void*, const String&, S*, const void*);
};

struct Factory {
    FactoryTable* table;
};

struct Root {};

struct Iterator {
    void* owner;
    void* node;
};

struct ObjectMap {
    void* owner;
    char padding[20];
    void* head;

    Iterator* find(Iterator*, const String&);
    void*& subscript(const String&);
};

struct S {
    ObjectMap* getCollection(const String&);
    void* createMovableObject(const String&, const String&, const void*);
};

void* S::createMovableObject(
    const String& type,
    const String& name,
    const void* parameters)
{
    Factory* factory = rootFactory(&rootSingleton(), type);
    ObjectMap* objects = getCollection(type);

    void* endNode = objects->head;
    void* owner = objects->owner;
    Iterator storage;
    Iterator* found = objects->find(&storage, name);

    if (!found->owner || found->owner != owner)
        invalidParameter();

    if (found->node != endNode) {
        String source("RbxSceneManager::createMovableObject");
        ExceptionCode code;
        code.value = 0;
        throw makeException(
            code,
            stringSuffix(
                stringJoin(
                    stringSuffix(
                        stringPrefix("An object of type '", type),
                        "' with name '"),
                    name),
                "' already exists."),
            source,
            ".\\RbxSceneManager.cpp",
            5338);
    }

    void* result = factory->table->create(factory, name, this, parameters);
    objects->subscript(name) = result;
    return result;
}
