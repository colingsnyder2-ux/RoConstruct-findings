// from server: 83% by colin
struct Node {
    Node* next;
    int pad;
    void* data;
};

struct Inner {
    char pad0[0x54];
    int field54;
    char pad1[0x64 - 0x58];
    void* field64;
};

struct Manager {
    char pad0[8];
    Node* head;
    void remove(void* arg);
};

extern "C" void* __cdecl sub_6a3040(void*, void*);
extern "C" void __cdecl sub_6a3510(void*);

void Manager::remove(void* arg) {
    Node* node = head;
    if (node != 0) {
        do {
            Inner* inner = (Inner*)node->data;
            void* v = inner->field64;
            node = node->next;
            if (arg == v) {
                void* p = v;
                if (p != 0) {
                    p = *(void**)((char*)p + 0x20);
                }
                void* r = sub_6a3040(p, (char*)inner + 0x54);
                sub_6a3510(r);
                this->remove(inner);
            }
        } while (node != 0);
    }
}
