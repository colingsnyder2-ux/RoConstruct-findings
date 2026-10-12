// from server: 92% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String;
struct SceneManager;
struct Node;

extern void (__thiscall* stringConstruct)(String*, const char*);
extern String (__cdecl* concatenateLeft)(const char*, const String&);
extern String (__cdecl* concatenateRight)(const String&, const char*);
extern void (__cdecl* invalidParameter)();
extern void (__thiscall* nodeConstruct)(Node*, SceneManager*, const String&);
extern const String& (__thiscall* nodeName)(const Node*);
extern void* sceneNodeVtable[];

struct String {
    void* proxy;
    union {
        char buffer[16];
        char* pointer;
    };
    size_t length;
    size_t capacity;

    String(const char*);
    String(const String&);
    ~String();
};

__forceinline String::String(const char* text)
{
    stringConstruct(this, text);
}

struct Iterator {
    void* owner;
    void* node;
};

struct SceneNode;

struct NodeMap {
    void* owner;
    char padding[20];
    void* sentinel;

    Iterator* find(Iterator*, const String&);
    SceneNode** subscript(const String&);
};

struct ExceptionCode {
    char value;
};

struct Exception {
    char storage[160];
    Exception(const Exception&);
    ~Exception();
};

Exception __cdecl makeException(
    ExceptionCode,
    const String&,
    const String&,
    const char*,
    long
);

struct Node {
    void** vtable;
    char storage[548];

    Node(SceneManager*, const String&);
    const String& getName() const;
};

__forceinline Node::Node(SceneManager* manager, const String& name)
{
    nodeConstruct(this, manager, name);
}

__forceinline const String& Node::getName() const
{
    return nodeName(this);
}

struct SceneNode : Node {
    SceneNode(SceneManager*, const String&);
};

__forceinline SceneNode::SceneNode(SceneManager* manager, const String& name)
    : Node(manager, name)
{
    vtable = sceneNodeVtable;
}

struct SceneManager {
    char padding[152];
    NodeMap nodes;

    SceneNode* createSceneNode(const String&);
};

SceneNode* SceneManager::createSceneNode(const String& name)
{
    Iterator end = { nodes.owner, nodes.sentinel };
    Iterator result;
    Iterator* found = nodes.find(&result, name);

    if (!found->owner || found->owner != end.owner)
        invalidParameter();

    if (found->node != end.node) {
        String source("RbxSceneManager::createSceneNode");
        ExceptionCode code;
        code.value = 0;
        throw makeException(
            code,
            concatenateRight(
                concatenateLeft("A scene node with the name ", name),
                " already exists"),
            source,
            ".\\RbxSceneManager.cpp",
            0x2b6
        );
    }

    SceneNode* node = new SceneNode(this, name);
    *nodes.subscript(node->getName()) = node;
    return node;
}
