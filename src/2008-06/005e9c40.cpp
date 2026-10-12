// from server: 60% by king_originala
#pragma float_control(precise, off)

extern "C" void (__cdecl *invalid_parameter)();
extern float threshold;

struct Primitive;
struct Assembly;

struct Properties {
    char padding[0x28];
    float value;
};

struct Link {
    char padding[0x1c];
    Assembly* assembly;
};

struct __declspec(align(8)) PrimIterator {
    Primitive* current;
    int state;
    void advance();
};

struct Assembly {
    Properties* properties();
};

struct Primitive {
    char padding[0x24];
    Link* link;
    PrimIterator begin();
    PrimIterator end();
    Properties* properties();
};

struct Node {
    Node* next;
    Node* previous;
    int unused;
    Primitive* value;
};

struct Container {
    char padding[0x18];
    Node* head;
};

struct Proxy {
    Container* owner;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
    void advance();
};

struct Instance {
    virtual void slot0();
    virtual int kind();
    int unused;
    Instance* parent;
    char padding0[0x114];
    Proxy* proxy;
    char padding1[0x14];
    Node* head;
};

struct Array {
    Primitive** data;
    int size;
    int capacity;
    void resize(int, bool);
    void append(const Primitive* const&);
};

struct S {
    char padding[0x88];
    Instance* instance;
    void f(Array*);
};

void S::f(Array* output)
{
    Instance* root = instance;
    while (root->kind() != 5)
        root = root->parent;

    const Primitive* temporary;
    Iterator it;
    it.node = root->head->next;
    it.proxy = root->proxy;

    for (;;) {
        Iterator lastNode;
        lastNode.node = root->head;
        lastNode.proxy = root->proxy;

        if (!it.proxy || it.proxy != lastNode.proxy)
            invalid_parameter();
        if (it.node == lastNode.node)
            break;

        Proxy* owner = it.proxy;
        if (!owner)
            invalid_parameter();
        else
            owner = reinterpret_cast<Proxy*>(owner->owner);

        if (it.node == reinterpret_cast<Container*>(owner)->head)
            invalid_parameter();

        Primitive* primitive = it.node->value;
        if (primitive->link->assembly->properties()->value < threshold) {
            PrimIterator last = primitive->end();
            PrimIterator current = primitive->begin();

            while (current.current != last.current) {
                Primitive* value = current.current;
                if (value->properties()->value < threshold) {
                    if (output->size < output->capacity) {
                        Primitive** slot = output->data + output->size;
                        if (slot)
                            *slot = value;
                        ++output->size;
                    } else {
                        if ((unsigned)&temporary >= (unsigned)output->data &&
                            (unsigned)&temporary <
                                (unsigned)(output->data + output->size)) {
                            temporary = value;
                            output->append(temporary);
                        } else {
                            output->resize(output->size + 1, false);
                            output->data[output->size - 1] = value;
                        }
                    }
                }
                current.advance();
            }
        }
        it.advance();
    }
}
