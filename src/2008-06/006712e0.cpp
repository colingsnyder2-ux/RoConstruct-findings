// from server: 99% by colin
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct String;
struct MeshPtr;

extern void (__thiscall *string_destroy)(String*);
extern void (__thiscall *mesh_copy)(MeshPtr*, const MeshPtr&);
extern void (__thiscall *mesh_default)(MeshPtr*);

struct String {
    char storage[28];
    ~String();
};

struct MeshPtr {
    void* object;
    void* count;

    MeshPtr();
    MeshPtr(const MeshPtr&);
    ~MeshPtr();
};

__forceinline String::~String()
{
    string_destroy(this);
}

__forceinline MeshPtr::MeshPtr()
{
    mesh_default(this);
}

__forceinline MeshPtr::MeshPtr(const MeshPtr& other)
{
    mesh_copy(this, other);
}

struct Node {
    char padding[40];
    MeshPtr value;
};

struct Map;

struct Iterator {
    Map** owner;
    Node* node;
};

struct Map {
    Map** owner;
    char padding[20];
    Node* end;

    Iterator* find(Iterator* result, const String* key);
};

struct S {
    char padding[120];
    Map meshes;

    MeshPtr f(String key);
};

MeshPtr S::f(String key)
{
    Map& map = meshes;
    Iterator position;
    Iterator* found = map.find(&position, &key);
    Map** owner = found->owner;
    Node* finish = map.end;
    Node* node = found->node;
    Map** expected = map.owner;
    void (__cdecl *invalid)();

    if (owner && owner != expected) {
        invalid = _invalid_parameter_noinfo;
        invalid();
    } else {
        invalid = _invalid_parameter_noinfo;
    }

    if (node != finish) {
        if (!owner)
            invalid();

        Map* container = owner ? *owner : 0;
        if (node == container->end)
            invalid();

        return MeshPtr(node->value);
    }

    return MeshPtr();
}
