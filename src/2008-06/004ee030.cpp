// from server: 31% by colin
#pragma float_control(precise, off)

extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl aligned_free(void*);
extern "C" void __stdcall destroy_value(void*);
extern "C" void __stdcall destroy_array(void*, unsigned int, int, void (__stdcall *)(void*));

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;
    unsigned int hashCode() const;
};

struct Node {
    unsigned int hash;
    Vector3 key;
    void* value;
    Node* next;
};

struct Block {
    unsigned char padding[8];
    Node** buckets;
    unsigned int bucketCount;
    unsigned int count;
    unsigned int pad;
    unsigned int counter;
};

struct Value {
    void* object;
    Value();
    Value(const Value&);
    ~Value();
    Value& operator=(const Value&);
};

struct Map {
    Block* block;
    unsigned int hash(const Vector3&) const;
    Node* find(const Vector3&) const;
    Node* insert(const Vector3&, const Value&);
    void* operator new(unsigned int);
};

struct RefCounted {
    int refCount;
    void incRef();
    void decRef();
};

struct Texture : RefCounted {
    unsigned int __cdecl f(const Vector3&, const Value&);
};

unsigned int Texture::f(const Vector3& key, const Value& value)
{
    Map* map = *(Map**)0x972738;

    unsigned int hash = key.hashCode();
    unsigned int bucket = hash % map->block->bucketCount;
    Node* node = map->block->buckets[bucket];

    while (node) {
        if (node->hash == hash && node->key.x == key.x && node->key.y == key.y && node->key.z == key.z)
            break;
        node = node->next;
    }

    if (!node) {
        Value v;
        map->insert(key, value);
    }

    Node* found = map->find(key);
    if (!found->value) {
        void* p = operator new(0x8c);
        if (p)
            p = (void*)0;
        found->value = p;
        ++map->block->counter;
        if (map->block->counter % 100 == 0) {
            void* obj = found->value;
            if (obj) {
                void** vt = *(void***)obj;
                ((void (__thiscall*)(void*, int))vt[0])(obj, 1);
            }
        }
    }

    return (unsigned int)found->value;
}
