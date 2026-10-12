// from server: 59% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* previous;
    void* value;
};

struct Container {
    char padding[20];
    Node* end;
};

struct Owner {
    Container* container;
};

struct Argument {
    char padding[28];
    Owner* owner;
    Node* node;
};

struct Service {
    char padding0[16];
    Owner* owner;
    char padding1[12];
    Node* node;

    void* get(Argument* argument);
};

void* Service::get(Argument* argument)
{
    Node* current = argument->node;
    Owner* currentOwner = argument->owner;
    Container* container = 0;

    if (currentOwner)
        container = currentOwner->container;
    else
        _invalid_parameter_noinfo();

    if (current == container->end)
        _invalid_parameter_noinfo();

    current = current->next;

    Node* finish = node;
    if (!currentOwner || currentOwner != owner)
        _invalid_parameter_noinfo();

    if (current == finish) {
        Node* first = node->next;
        Owner* firstOwner = owner;
        Container* firstContainer = 0;

        if (firstOwner)
            firstContainer = firstOwner->container;
        else
            _invalid_parameter_noinfo();

        if (first == firstContainer->end)
            _invalid_parameter_noinfo();

        return first->value;
    }

    Container* currentContainer = 0;
    if (currentOwner)
        currentContainer = currentOwner->container;
    else
        _invalid_parameter_noinfo();

    if (current == currentContainer->end)
        _invalid_parameter_noinfo();

    return current->value;
}
