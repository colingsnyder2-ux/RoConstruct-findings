// from server: 78% by king_originala
struct Node {
    Node* next;
    void* previous;
    char value[1];
};

struct Iterator {
    void* owner;
    Node* node;
};

typedef void (__thiscall *Callback)(void*, void*);

struct Function {
    Callback callback;
    void* context;
    Function(const Function& other);
};

Function::Function(const Function& other)
    : callback(other.callback), context(other.context) {}

Function __cdecl traverse(Iterator first, Iterator last, Function function)
{
    Node* current = first.node;
    Node* end = last.node;
    for (;;) {
        if (current == end)
            break;
        function.callback(function.context, current->value);
        current = current->next;
    }
    return function;
}
