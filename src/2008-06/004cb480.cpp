// from server: 73% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* previous;
    int value;
};

struct Container {
    char padding[20];
    Node* head;
};

struct Proxy {
    Container* container;
};

struct Argument {
    char padding[28];
    Proxy* proxy;
    Node* node;
};

struct Service {
    char padding0[16];
    Proxy* proxy;
    char padding1[16];
    Node* node;

    int get(const Argument* argument);
};

int Service::get(const Argument* argument)
{
    Node* current = argument->node;
    Proxy* owner = argument->proxy;
    Container* container;

    if (owner)
        container = owner->container;
    else {
        _invalid_parameter_noinfo();
        container = 0;
    }

    if (current == container->head)
        _invalid_parameter_noinfo();

    current = current->next;

    Proxy* otherOwner = proxy;
    Node* otherNode = node;

    if (!owner || owner != otherOwner)
        _invalid_parameter_noinfo();

    if (current == otherNode) {
        Node* first = node->next;
        Proxy* firstOwner = proxy;
        Container* firstContainer;

        if (firstOwner)
            firstContainer = firstOwner->container;
        else {
            _invalid_parameter_noinfo();
            firstContainer = 0;
        }

        if (first == firstContainer->head)
            _invalid_parameter_noinfo();

        return first->value;
    }

    if (owner)
        container = owner->container;
    else {
        _invalid_parameter_noinfo();
        container = 0;
    }

    if (current == container->head)
        _invalid_parameter_noinfo();

    return current->value;
}
