// from server: 22% by colin
// roc 2007-08 0048caf0  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048caf0

struct Name {
    void* p;
};

struct Creator {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
};

struct MapNode {
    MapNode* left;
    MapNode* parent;
    MapNode* right;
    char color;
    char pad[3];
    void* key;
    void* value;
};

struct Map {
    MapNode* head;
    int size;
};

struct FactoryProduct {
    static Map* creators;
    static int isConstructed;
    static const char* sClassName;

    static Name* declareName(const char* s);
    static Map* getCreators();
    static void mapInsert(Map* m, void* key, void* value);
    static void mapErase(Map* m, void* key);
    static void mapDestroyNode(void* node);
    static void mapDestroyRange(void* first, void* last);
    static void mapClear(Map* m);

    Creator* createCreator();
};

Map* FactoryProduct::creators = 0;
int FactoryProduct::isConstructed = 0;
const char* FactoryProduct::sClassName = 0;

extern "C" void __cdecl free(void* p);

Creator* FactoryProduct::createCreator()
{
    Creator* result;
    Name* name;
    Map* creators;
    MapNode* node;
    void* key;
    void* val;
    void* tmp;

    result = (Creator*)0;
    name = declareName(sClassName);
    creators = getCreators();
    mapInsert(creators, name, result);
    result->fieldC = *(int*)((char*)name + 0xC);
    key = name;
    val = result;
    mapInsert(creators, key, val);
    free(key);
    mapErase(creators, name);
    free(name);
    return result;
}
