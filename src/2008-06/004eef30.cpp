// from server: 38% by colin
#pragma float_control(precise, off)

extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl aligned_free(void*);
extern "C" void __stdcall destroy_value(void*);
extern "C" void __stdcall destroy_array(void*, unsigned int, int, void (__stdcall *)(void*));

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
    unsigned int count;
};

struct Texture {
    unsigned char padding[8];
    Block* block;
    unsigned int counter;
    unsigned int field_5c;

    void* __cdecl insert(unsigned int, unsigned int);
};

struct HashEntry {
    unsigned int a;
    unsigned int b;
    unsigned char padding[16];
    HashEntry* next;
};

struct HashTable {
    unsigned char padding[8];
    HashEntry** buckets;
    unsigned int capacity;
    unsigned int count;
};

struct Guard {
    void* ptr;
    unsigned int flags;
    unsigned int size;
    void* vtable;
    Guard();
    ~Guard();
};

struct RefCounted {
    void* vtable;
    unsigned int refcount;
    void* data;
    void release();
};

struct Holder {
    RefCounted* ptr;
    void set(RefCounted*);
};

struct MapNode {
    unsigned int a;
    unsigned int b;
    unsigned char padding[16];
    MapNode* next;
};

struct Map {
    unsigned char padding[8];
    MapNode** buckets;
    unsigned int capacity;
    unsigned int count;
    void insert(unsigned int, unsigned int, void*);
};

struct Pair {
    unsigned int a;
    unsigned int b;
};

struct Slot {
    void* ptr;
    void* get();
    void set(void*);
    unsigned int hashCode();
};

struct Container {
    unsigned char padding[8];
    Slot* slot;
    unsigned int count;
    unsigned int field_5c;
    void* lookup(unsigned int, unsigned int);
    void* insert(unsigned int, unsigned int);
};

struct ViewNew {
    struct Texture* texture;
};

void* Texture::insert(unsigned int a, unsigned int b)
{
    HashTable* table = (HashTable*)this->block;
    HashEntry* entry = table->buckets[a % table->capacity];
    while (entry) {
        if (entry->a == a && entry->b == b)
            break;
        entry = entry->next;
    }

    if (!entry) {
        Guard guard;
        guard.ptr = 0;
        guard.flags = 0;
        guard.size = 0;
        guard.vtable = (void*)0x826c04;

        void* mem = operator new(0x28);
        guard.ptr = mem;
        guard.flags = 1;

        Map* map = (Map*)this->block;
        map->insert(a, b, &guard);

        guard.flags = 0;
        guard.vtable = (void*)0x826c04;
        guard.~Guard();
    }

    HashEntry* found = table->buckets[a % table->capacity];
    while (found) {
        if (found->a == a && found->b == b)
            break;
        found = found->next;
    }

    Slot* slot = (Slot*)((char*)found + 8);
    if (!slot->hashCode()) {
        void* mem = operator new(4);
        slot->set(mem);
    }

    void* result = slot->get();
    if (!*(void**)result) {
        RefCounted* obj = (RefCounted*)operator new(0x8c);
        if (obj) {
            obj->vtable = (void*)0x4fd6b0;
            obj->refcount = 1;
            obj->data = 0;
        }
        *(void**)result = obj;
        InterlockedIncrement((long*)&this->field_5c);
        if (this->field_5c % 100 == 0) {
            void* p = *(void**)result;
            if (p) {
                InterlockedIncrement((long*)((char*)p + 4));
                if (InterlockedDecrement((long*)((char*)p + 4)) == 0) {
                    ((RefCounted*)p)->release();
                }
            }
        }
    }

    return *(void**)result;
}
