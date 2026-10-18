// from server: 53% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" unsigned int __cdecl rand();

extern const float flt_826e40;
extern const float flt_8288b8;

struct Node;

struct Proxy {
    Node* owner;
};

struct Value {
    void* handle;
    int pad;
    int active;
};

struct Node {
    Node* next;
    char pad[0x28];
    Value* value;
};

struct Container {
    Proxy* proxy;
    char pad[0x14];
    Node* head;
};

struct Iter {
    Proxy* proxy;
    Node* node;
};

void __fastcall sub_409f60(Iter* it);
void __fastcall sub_5b87a0(void* p);
void* __cdecl sub_69fc12(void* p);
Iter* __fastcall sub_5b9a30(Container* c, Iter* out, Node* n1, Node* n2);

void update(Container* container)
{
    Node* node = container->head->next;
    Proxy* proxy = container->proxy;
    Iter position;
    position.proxy = proxy;
    position.node = node;

    for (;;) {
        Node* end = container->head;
        Proxy* owner = container->proxy;

        if (!proxy || proxy != owner)
            _invalid_parameter_noinfo();

        if (node == end)
            break;

        Container* source;
        if (proxy)
            source = (Container*)proxy->owner;
        else {
            _invalid_parameter_noinfo();
            source = 0;
        }

        if (node == source->head)
            _invalid_parameter_noinfo();

        if (node->value->active == 0 &&
            !((float)rand() * flt_826e40 < flt_8288b8)) {
            if (proxy)
                source = (Container*)proxy->owner;
            else {
                _invalid_parameter_noinfo();
                source = 0;
            }

            if (node == source->head)
                _invalid_parameter_noinfo();

            Value* value = node->value;
            if (value->handle) {
                sub_5b87a0(sub_69fc12(value->handle));
                value->handle = 0;
            }

            Iter result;
            Iter* next = sub_5b9a30(container, &result, node, proxy->owner);
            proxy = next->proxy;
            node = next->node;
            position.proxy = proxy;
            position.node = node;
        } else {
            sub_409f60(&position);
            proxy = position.proxy;
            node = position.node;
        }
    }
}
