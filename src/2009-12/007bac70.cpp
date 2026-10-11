// from server: 94% by atomic.potato
struct Node {
    Node* next;
    char pad[0x28];
    virtual void vfunc(double);
};

struct MovingAssemblyStage {
    char pad[0x14];
    Node* head;
    void func(double);
};

void MovingAssemblyStage::func(double d) {
    Node* sentinel = (Node*)((char*)this + 0x14);
    Node* p = head;
    if (p != sentinel) {
        do {
            Node* n;
            if (p != 0) {
                n = (Node*)((char*)p - 0x2c);
            } else {
                n = 0;
            }
            n->vfunc(d);
            p = p->next;
        } while (p != sentinel);
    }
}
