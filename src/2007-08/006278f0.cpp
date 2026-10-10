// from server: 68% by colin
struct CollisionStage {
    void* field0;
    void* field4;
    void* field8;
    char pad0[8];
    void* field14;
    void* field18;
    void* field1c;

    void process(void*);
};

struct Other {
    virtual int getA();
    virtual void remove(void*);
};

struct Inner {
    virtual int getB();
};

struct Node {
    char pad0[4];
    Inner* inner;
    char pad8[0x14];
    int field1c;
};

extern "C" void* __stdcall sub_5B4D40(void*);
extern "C" void* __stdcall sub_5B4D20(void*, void*);
extern "C" void __stdcall sub_5FF950(void*, void*);
extern "C" bool __stdcall sub_6275C0(CollisionStage*, Node*, void**);

void CollisionStage::process(void* arg) {
    void* list = sub_5B4D40(arg);
    Node* node = (Node*)list;
    while (node) {
        Inner* inner = node->inner;
        int a = inner->getB();
        int b = ((Other*)field0)->getA();
        if (a >= b) {
            int a2 = node->inner->getB();
            int b2 = ((Other*)field0)->getA();
            if (a2 > b2) {
                void* tmp;
                if (!sub_6275C0(this, node, &tmp)) {
                    ((Other*)field8)->remove(node);
                }
            }
            if (node->field1c < 0) {
                void* tmp2;
                tmp2 = node;
                node->field1c = (int)field18;
                sub_5FF950(&field14, &tmp2);
            }
        }
        node = (Node*)sub_5B4D20(arg, node);
    }
}
