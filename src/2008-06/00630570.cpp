// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Physics {
    char padding0[8];
    unsigned char dirty;
    char padding1[0x7B];
    float x, y, z;
    void update();
};

struct Node {
    char padding[0x2C];
    Physics* physics;
};

struct Link {
    char padding[0x10];
    Node* node;
};

struct Owner {
    char padding[0x10];
    Link* link;
};

struct Product {
    char padding[0x2C8];
    Owner* owner;
};

struct Pair {
    Product* object;
    RefCount* count;
};

struct Handle {
    char padding[8];
    Pair* get(Pair*);
};

struct S {
    char padding[0x10];
    Handle handle;
    float x, y, z;
    void f(int, int);
};

void S::f(int, int)
{
    Pair temporary;
    Pair* result = handle.get(&temporary);
    Link* link = result->object->owner->link;
    RefCount* count = temporary.count;

    if (count) {
        if (_InterlockedDecrement(&count->strong) == 0) {
            count->dispose();
            if (_InterlockedDecrement(&count->weak) == 0)
                count->destroy();
        }
    }

    Physics* physics = link->node->physics;
    if (physics) {
        if (physics->dirty)
            physics->update();
        physics->x = x + physics->x;
        physics->y = y + physics->y;
        physics->z = z + physics->z;
    }
}
