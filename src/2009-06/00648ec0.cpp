// from server: 42% by atomic.potato
struct Node {
    Node* next;
    Node* prev;
    Node* self;
};

struct List {
    char pad0[0x18];
    Node* head;
    char pad1[4];
    int count;
};

struct Inner {
    char pad0[0x18];
    Node* head;
    char pad1[4];
    int count;
};

struct Outer {
    char pad0[0x8c];
    void* ptr8c;
    char pad90[4];
    Inner inner94;
    char pad_b0[0x28];
    Inner inner_d8;
    char pad_f4[4];
    Inner inner_f8;
};

extern "C" void __stdcall sub_4e7730(void*);
extern "C" void __stdcall sub_5d2250(void*);
extern "C" void __stdcall sub_643fd0(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_645140(void*, void*);
extern "C" void __stdcall sub_6474b0(void*);
extern "C" void __stdcall sub_717e80(void*);

void sub_648ec0(Outer* self) {
    void* p = *(void**)((char*)self + 0xac);
    void* q = *(void**)((char*)p + 4);
    Inner* esi = &self->inner94;
    sub_4e7730(q);
    Node* n = esi->head;
    n->prev = n;
    n = esi->head;
    esi->count = 0;
    n->next = n;
    Node* m = esi->head;
    sub_5d2250(self);
    m->self = m;

    Inner* edi = &self->inner_d8;
    void* a = *(void**)((char*)self + 0xf0);
    void* b = *(void**)((char*)self + 0xd8);
    void* c = *(void**)a;
    sub_643fd0(b, c, a, (void*)0x648e90, b);

    Inner* ebp = &self->inner_f8;
    void* d = *(void**)((char*)self + 0x110);
    void* e = *(void**)((char*)self + 0xf8);
    void* f = *(void**)d;
    sub_643fd0(e, f, d, (void*)0x648e90, e);

    Node* g = edi->head;
    void* h = *(void**)((char*)g + 4);
    sub_645140(edi, h);
    Node* i = edi->head;
    i->prev = i;
    i = edi->head;
    edi->count = 0;
    i->next = i;
    Node* j = edi->head;
    j->self = j;

    Node* k = ebp->head;
    void* l = *(void**)((char*)k + 4);
    sub_645140(ebp, l);
    Node* n2 = ebp->head;
    n2->prev = n2;
    n2 = ebp->head;
    ebp->count = 0;
    n2->next = n2;
    Node* o = ebp->head;
    o->self = o;

    void* r = *(void**)((char*)self + 0x8c);
    if (r != 0) {
        sub_717e80(r);
        sub_6474b0(r);
        *(void**)((char*)self + 0x8c) = 0;
    }
}
