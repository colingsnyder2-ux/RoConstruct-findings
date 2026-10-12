// from server: 69% by king_originala
struct SpawnLocation;

struct Binding {
    void (__thiscall SpawnLocation::*method)();
    SpawnLocation* object;
};

struct Function {
    char storage[40];
    Function(const Binding&);
    ~Function();
};

struct Connection {
    char storage[12];
    ~Connection();
    Connection& operator=(const Connection&);
    void disconnect();
};

struct Registry {
    Connection connect(void*, const Function&, int);
};

struct Node {
    Node* previous;
    Node* next;
};

struct Removal {
    void* context;
    SpawnLocation* object;
};

struct List {
    char storage[20];
    Node* head;
    Node* create(Node*, Node*, SpawnLocation* const*);
    void grow(unsigned int);
    void remove(const Removal&);
};

struct Service {
    char storage[0x130];
    List list;
};

struct Parent {
    Service* oldService();
    Service* newService();
};

struct SpawnLocation {
    char storage[0x3ec];
    Connection connection;
    void callback();
    void changeParent(Parent*, Parent*);
};

void SpawnLocation::changeParent(Parent* oldParent, Parent* newParent)
{
    if (!oldParent) {
        {
            Binding binding;
            binding.method = &SpawnLocation::callback;
            binding.object = this;
            Function function(binding);
            connection = reinterpret_cast<Registry*>(0x976164)->connect(
                this ? reinterpret_cast<char*>(this) + 0x14 : 0,
                function, 10);
        }

        Service* service = newParent ? newParent->newService() : 0;
        List* list = &service->list;
        Node* head = list->head;
        SpawnLocation* object = this;
        Node* node = list->create(head, head->next, &object);
        list->grow(1);
        head->next = node;
        node->next->previous = node;
    }

    if (!newParent) {
        connection.disconnect();
        Service* service = oldParent ? oldParent->oldService() : 0;
        Removal removal;
        removal.context = oldParent;
        removal.object = this;
        service->list.remove(removal);
    }
}
