// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBX_RefCounted {
    void* vptr;
    long refcount;
};

struct RBX_ListItem {
    void* pad0;
    void* pad4;
    void* pad8;
    void* padC;
    void* pad10;
    void* pad14;
    unsigned char flag15;
};

struct RBX_ListHead {
    RBX_ListItem* next;
    RBX_ListItem* prev;
};

struct RBX_List {
    RBX_ListHead* head;
    int count;
};

struct RBX_UItem {
    void* vptr;
    RBX_RefCounted* ref;
    RBX_RefCounted* ref2;
    RBX_List list;
};

extern "C" RBX_ListItem* __cdecl sub_5835B0(RBX_List* self);

extern RBX_RefCounted* dword_8BE738;
extern RBX_RefCounted* dword_8BE73C;

RBX_UItem* RBX_UItem_ctor(RBX_UItem* self)
{
    self->vptr = (void*)0x79CCA8;
    self->ref = dword_8BE738;
    RBX_RefCounted* r = dword_8BE73C;
    self->ref2 = r;
    if (r == 0) {
        _InterlockedExchangeAdd(&r->refcount, 1);
    }
    RBX_ListItem* node = sub_5835B0(&self->list);
    self->list.head = (RBX_ListHead*)node;
    node->flag15 = 1;
    RBX_ListItem* n2 = (RBX_ListItem*)self->list.head;
    n2->pad4 = n2;
    RBX_ListItem* n3 = (RBX_ListItem*)self->list.head;
    n3->pad0 = n3;
    RBX_ListItem* n4 = (RBX_ListItem*)self->list.head;
    n4->pad8 = n4;
    self->list.count = 0;
    return self;
}
