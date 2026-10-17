// from server: 36% by colin
extern "C" void* __cdecl sub_6A0920(unsigned int size);

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Vec3Helper {
    int f();
};

struct Node {
    Node* next;
    Node* prev;
    Node* parent;
    int pad0C;
    void* type;
    int pad14;
    int pad18;
    int pad1C;
    int pad20;
    int pad24;
};

struct List {
    int pad0;
    Node* head;
    Node* tail;
};

struct VTable {
    void* pad0;
    void* pad4;
    void* slot8;
};

struct Obj {
    int pad0;
    int pad4;
    int pad8;
    int padC;
    int pad10;
    int pad14;
    VTable* vtbl;
};

struct S {
    int f(Obj* a, Obj* b);
};

extern void* g_975334;
extern void* g_975380;
extern void* g_975318;

int Vec3Helper::f()
{
    return 0;
}

int S::f(Obj* a, Obj* b)
{
    List* list = (List*)a;
    Node* n1 = (Node*)sub_6A0920(0x28);
    if (n1) {
        n1->next = 0;
        n1->prev = 0;
        n1->parent = 0;
        n1->type = g_975334;
        n1->pad14 = 0;
        n1->pad20 = 0;
        n1->pad24 = 0;
    }
    if (list->tail)
        list->tail->next = n1;
    else
        list->head = n1;
    list->tail = n1;

    Node* n2 = (Node*)sub_6A0920(0x28);
    if (n2) {
        n2->next = 0;
        n2->prev = 0;
        n2->parent = 0;
        n2->type = g_975380;
        n2->pad14 = 0;
        n2->pad20 = 0;
        n2->pad24 = 0;
    }
    if (list->tail)
        list->tail->next = n2;
    else
        list->head = n2;
    list->tail = n2;

    Node* n3 = (Node*)sub_6A0920(0x28);
    if (n3) {
        n3->next = 0;
        n3->prev = 0;
        n3->parent = 0;
        n3->type = g_975318;
        n3->pad14 = 0;
        n3->pad20 = 0;
        n3->pad24 = 0;
    }
    if (list->tail)
        list->tail->next = n3;
    else
        list->head = n3;
    list->tail = n3;

    VTable* vt = a->vtbl;
    void* fn = vt->slot8;
    Vec3 vals;
    ((void (__thiscall*)(void*, Vec3*, Obj*))fn)(a, &vals, b);

    float v0 = vals.x;
    Vec3Helper* p1 = (Vec3Helper*)((char*)n1 + 0x10);
    p1->f();
    *((float*)((char*)n1 + 0x18)) = v0;
    *((int*)((char*)n1 + 0x14)) = 7;

    float v1 = vals.y;
    Vec3Helper* p2 = (Vec3Helper*)((char*)n2 + 0x10);
    p2->f();
    *((float*)((char*)n2 + 0x18)) = v1;
    *((int*)((char*)n2 + 0x14)) = 7;

    float v2 = vals.z;
    Vec3Helper* p3 = (Vec3Helper*)((char*)n3 + 0x10);
    p3->f();
    *((float*)((char*)n3 + 0x18)) = v2;
    *((int*)((char*)n3 + 0x14)) = 7;

    return 0;
}
