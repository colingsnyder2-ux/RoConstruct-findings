// from server: 53% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();
extern float threshold;

struct Primitive;
struct Assembly;
struct Node;
struct Container;

struct Properties {
    char padding[0x28];
    float value;
};

struct Link {
    char padding[0x1c];
    Assembly* assembly;
};

struct PrimIterator {
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

    Iterator it;
    it.proxy = root->proxy;
    it.node = root->head->next;

    for (;;) {
        Node* end = root->head;
        if (!it.proxy || it.proxy != root->proxy)
            _invalid_parameter_noinfo();

        if (it.node == end)
            break;

        Container* owner;
        if (it.proxy)
            owner = it.proxy->owner;
        else {
            _invalid_parameter_noinfo();
            owner = 0;
        }

        if (it.node == owner->head)
            _invalid_parameter_noinfo();

        Primitive* primitive = it.node->value;
        if (threshold > primitive->link->assembly->properties()->value) {
            PrimIterator last = primitive->end();
            PrimIterator current = primitive->begin();

            while (current.current != last.current) {
                Primitive* value = current.current;
                if (threshold > value->properties()->value) {
                    const Primitive* temporary;
                    if (output->size < output->capacity) {
                        Primitive** slot = output->data + output->size;
                        if (slot)
                            *slot = value;
                        ++output->size;
                    } else if ((unsigned)&temporary >= (unsigned)output->data &&
                               (unsigned)&temporary <
                                   (unsigned)(output->data + output->size)) {
                        temporary = value;
                        output->append(temporary);
                    } else {
                        output->resize(output->size + 1, false);
                        output->data[output->size - 1] = value;
                    }
                }
                current.advance();
            }
        }
        it.advance();
    }
}
