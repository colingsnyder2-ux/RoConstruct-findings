// from server: 3% by atomic.potato
struct VPartInstance {
    char pad[0x1e8];
    unsigned char flags;
    char pad2[0x1f];
    void sub_5dbe70(float);
    void* sub_5d8a10();
    void* sub_5d8b10();
};

struct Node {
    char pad[0xc];
    Node* next;
    Node* prev;
};

struct List {
    void* sub_5e7b90();
    void* sub_5e7ba0(void*);
};

void VPartInstance::sub_5dbe70(float) {}

void* VPartInstance::sub_5d8a10() { return 0; }
void* VPartInstance::sub_5d8b10() { return 0; }

void* List::sub_5e7b90() { return 0; }
void* List::sub_5e7ba0(void*) { return 0; }

void func(VPartInstance* self)
{
    void* a = self->sub_5d8a10();
    if (a == 0) goto fail;
    List* esi = (List*)((char*)a + 0x228);
    if (esi == 0) goto fail;
    void* b = self->sub_5d8b10();
    if (b == 0) goto fail;
    List* edi = (List*)((char*)b + 0x228);
    if (edi == 0) goto fail;
    {
        void* e = esi->sub_5e7b90();
        if (e == 0) goto fail;
        for (;;) {
            Node* n = (Node*)e;
            void* c = n->next;
            if (esi == c) c = n->prev;
            if (c == edi) goto found;
            e = esi->sub_5e7ba0(e);
            if (e == 0) goto fail;
        }
    }
found:
    self->flags |= 4;
    return;
fail:
    if (self->flags & 4) {
        self->sub_5dbe70(0.0f);
    }
}
