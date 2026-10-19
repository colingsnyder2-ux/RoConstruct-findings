// from server: 34% by colin
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
};

struct Table {
    unsigned char padding[8];
    Block** buckets;
    unsigned int bucketCount;
    unsigned char padding2[0x4c];
    int count;
};

struct RefCounted {
    int refCount;
};

struct Texture : RefCounted {
    unsigned int f(unsigned int);
};

extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl aligned_free(void*);
extern "C" void __stdcall destroy_value(void*);
extern "C" void __stdcall destroy_array(void*, unsigned int, int, void (__stdcall *)(void*));

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern "C" void __cdecl sub_557330(void*, void*);
extern "C" void __cdecl sub_563090(void*);
extern "C" void __cdecl sub_5630e0(void*);
extern "C" void* __cdecl sub_508580(unsigned int, unsigned int);
extern "C" void __cdecl sub_508a30(void*, int, unsigned int);
extern "C" void __cdecl sub_4e93b0(void*, void*, void*);
extern "C" void __cdecl sub_4d7e30(void*);
extern "C" unsigned int __cdecl sub_4e5cd0(void*, void*);
extern "C" void* __cdecl sub_4e5d30(void*, void*);
extern "C" void __cdecl sub_4e7630(void*, void*, void*);
extern "C" void __cdecl sub_6a1598(void*, int, int, void*, void*);
extern "C" void __cdecl sub_6a165b(void*, int, int, void*, void*);
extern "C" void* __cdecl sub_6a0920(unsigned int);
extern "C" void* __cdecl sub_4fa590(void*, void*, unsigned int);
extern "C" void __cdecl sub_598fa0(void*, void*);
extern "C" void __cdecl sub_4eca60();
extern "C" void __cdecl sub_45ad90(void*);

extern "C" void* __stdcall InterlockedIncrement(int*);
extern "C" void* __stdcall InterlockedDecrement(int*);

unsigned int Texture::f(unsigned int key)
{
    Table* t = *(Table**)0x972730;
    sub_557330((void*)0x4d9870, (void*)0x972748);
    sub_563090((char*)t + 0x10);

    unsigned int bucket = key % t->bucketCount;
    Node* node = (Node*)t->buckets[bucket];

    while (node) {
        if (node->hash == key && *(unsigned int*)&node->key == key)
            break;
        node = node->next;
    }

    if (!node) {
        void* mem = sub_508580(0x28, 0x10);
        sub_508a30(mem, 0, 0x28);
        sub_4e93b0(t, &key, mem);
        sub_4d7e30(mem);
    }

    bucket = key % t->bucketCount;
    node = (Node*)t->buckets[bucket];
    while (node) {
        if (node->hash == key && *(unsigned int*)&node->key == key)
            break;
        node = node->next;
    }

    void* val = &node->value;
    if (!sub_4e5cd0(val, &key)) {
        void* tmp = 0;
        sub_6a1598(&tmp, 4, 1, (void*)0x4f0810, (void*)0x502a70);
        sub_4e7630(val, &key, &tmp);
        sub_6a165b(&tmp, 4, 1, (void*)0x502a70, 0);
    }

    void* slot = sub_4e5d30(val, &key);
    void* result = *(void**)slot;
    if (!result) {
        void* obj = sub_6a0920(0x8c);
        if (obj)
            result = sub_4fa590(obj, &key, key);
        else
            result = 0;
        sub_598fa0(slot, result);

        if (++t->count % 100 == 0) {
            void* n = *(void**)slot;
            RefCounted* r = 0;
            if (n) {
                r = (RefCounted*)n;
                InterlockedIncrement(&r->refCount);
            }
            sub_4eca60();
            if (r) {
                if (InterlockedDecrement(&r->refCount) == 0) {
                    sub_45ad90(r);
                    (*(void(__thiscall**)(void*, int))*(void**)r)(r, 1);
                }
            }
        }
    }

    sub_5630e0((char*)t + 0x10);
    return (unsigned int)result;
}
