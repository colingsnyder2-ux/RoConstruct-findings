// from server: 39% by colin
#pragma float_control(precise, off)

extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl aligned_free(void*);
extern "C" void __stdcall destroy_value(void*);
extern "C" void __stdcall destroy_array(
    void*, unsigned int, int, void (__stdcall *)(void*));

extern "C" long __stdcall InterlockedIncrement(long*);
extern "C" long __stdcall InterlockedDecrement(long*);

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
    unsigned int capacity;
    unsigned char padding2[0x48];
    int count;
};

struct Texture {
    unsigned char padding[8];
    Block* block;
    void __cdecl insert(unsigned int, const void*);
};

struct Guard {
    void* vtable;
    void* prev;
    int state;
    Guard();
    ~Guard();
};

struct HashEntry {
    unsigned int a;
    unsigned int b;
    unsigned char padding[0x10];
    HashEntry* next;
};

struct HashTable {
    unsigned char padding[8];
    HashEntry** buckets;
    unsigned int capacity;
    unsigned char padding2[0x4c];
    int count;
    void* find(unsigned int);
    void insert(unsigned int, const void*);
};

struct Value {
    void* ptr;
    Value();
    ~Value();
};

struct Holder {
    void* ptr;
    void* get();
};

struct RefCounted {
    void* vtable;
    void* refptr;
    void release();
};

extern "C" void __cdecl destroy_value_cdecl(void*);

void Texture::insert(unsigned int key, const void* value)
{
    Guard guard;
    HashTable* table = (HashTable*)this->block;

    HashEntry* entry = (HashEntry*)table->find(key);
    if (!entry) {
        Value v;
        table->insert(key, value);
        entry = (HashEntry*)table->find(key);
    }

    if (!((Holder*)&entry->a)->get()) {
        void* p = operator new(4);
        ((Holder*)&entry->a)->ptr = p;
    }

    void* slot = ((Holder*)&entry->a)->get();
    if (!slot) {
        Node* node = (Node*)operator new(0x8c);
        if (node) {
            node->hash = key;
            node->key.x = 0;
            node->key.y = 0;
            node->key.z = 0;
            node->value = 0;
            node->next = 0;
        }
        ((Holder*)&entry->a)->ptr = node;
        InterlockedIncrement((long*)&table->count);
        if (table->count % 100 == 0) {
            RefCounted* r = (RefCounted*)entry->next;
            if (r) {
                InterlockedDecrement((long*)&r->refptr);
                if (!InterlockedDecrement((long*)&r->refptr)) {
                    r->release();
                    (*(void (__thiscall**)(RefCounted*, int))r->vtable)(r, 1);
                }
            }
        }
    }
}
