// from server: 39% by colin
// roc 2007-08 004d4160  unit: RBX::View::Texture  size: 406 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d4160

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct Inner {
    void destroy();
    void assign(const Inner&);
};

struct Node {
    int key;
    int key2;
    Inner inner;
    Node* next;
};

struct S {
    int field0;
    int field4;
    Node** field8;
    int fieldC;

    void rehash(int newSize);
    void func(int key, const Inner& value);
};

void S::func(int key, const Inner& value)
{
    unsigned int idx = (unsigned int)key % (unsigned int)this->fieldC;
    Node* node = this->field8[idx];
    if (node == 0) {
        Node* e = (Node*)operator_new(0x1c);
        if (e != 0) {
            e->key = key;
            e->key2 = key;
            e->inner = value;
            this->field8[idx] = e;
        } else {
            this->field8[idx] = 0;
        }
        this->field4++;
        return;
    }

    int depth = 1;
    bool found = false;
    while (node != 0) {
        if (node->key == key) {
            found = true;
            break;
        }
        node = node->next;
        depth++;
    }

    if (!found && depth > 5) {
        int cap = this->field4 * 10;
        if (this->fieldC < cap) {
            this->rehash(this->fieldC * 2 + 1);
        }
    }

    idx = (unsigned int)key % (unsigned int)this->fieldC;
    Node* e = (Node*)operator_new(0x1c);
    if (e != 0) {
        e->key = key;
        e->key2 = key;
        e->inner = value;
        this->field8[idx] = e;
    } else {
        this->field8[idx] = 0;
    }
    this->field4++;
}
