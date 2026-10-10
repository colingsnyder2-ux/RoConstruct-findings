// from server: 74% by colin
// roc 2007-08 0054ba60  unit: UString_sink::?$stream_buffer  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ba60

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    void* data;
};

struct S {
    char pad0[4];
    Node* head;
    int count;
    char padC[0x10];
    unsigned int flags;
    void clear();
};

void S::clear() {
    Node* first = head->next;
    while (first != head) {
        if ((flags & 1) && (flags & 4)) {
            goto skip1;
        }
        if (first == head) {
            _invalid_parameter_noinfo();
        }
        {
            void* p = first->data;
            void** vtbl = *(void***)p;
            void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0x44/4];
            fn(p, 0);
        }
    skip1:
        if (first == head) {
            _invalid_parameter_noinfo();
        }
        {
            void* p = first->data;
            first->data = 0;
            if (p) {
                void** vtbl = *(void***)p;
                void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0];
                fn(p, 1);
            }
        }
        if (first == head) {
            _invalid_parameter_noinfo();
        }
        first = first->next;
    }
    {
        Node* h = head;
        Node* n = h->next;
        h->next = h;
        head->prev = head;
        count = 0;
        while (n != head) {
            Node* nx = n->next;
            extern void __cdecl op_delete(void*);
            op_delete(n);
            n = nx;
        }
    }
    flags &= 0xfffffffc;
}
