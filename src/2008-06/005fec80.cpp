// from server: 69% by king_originala
#pragma pointers_to_members(full_generality, virtual_inheritance)

struct Tool;

struct Callback {
    void (Tool::*target)();
    Tool *object;
};

struct Function {
    unsigned storage[10];
    Function(const Callback &);
    ~Function();
};

struct Connection {
    unsigned storage[3];
    ~Connection();
    void operator=(const Connection &);
    void disconnect();
};

struct Source {
    char padding[20];
    unsigned signal;
};

struct Dispatcher {
    Connection connect(void *, const Function &, int);
};

extern Dispatcher dispatcher;

struct Tool {
    char padding[516];
    Connection connection;
    Source *getSource();
    void callback();
    void updateConnection();
};

void Tool::updateConnection()
{
    Source *source = getSource();
    if (source) {
        Callback bound;
        bound.target = &Tool::callback;
        bound.object = this;
        Function function(bound);
        connection = dispatcher.connect(&source->signal, function, 10);
    } else {
        connection.disconnect();
    }
}
