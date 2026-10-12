// from server: 78% by king_originala
struct Tool;

struct Binder {
    void (Tool::*method)();
    Tool* object;
};

struct Function {
    char storage[40];
    Function(const Binder&);
    ~Function();
};

struct Connection {
    char storage[16];
    ~Connection();
    Connection& operator=(const Connection&);
};

struct Signal {
    Connection connect(void*, const Function&, int);
};

struct Context {
    void* getObject();
};

extern Context* __cdecl getContext(void*);
extern Signal signal1;
extern Signal signal2;

struct Tool {
    char padding0[0x104];
    void* context;
    char padding1[0x138];
    Connection connection1;
    char padding2[4];
    Connection connection2;

    void callback1();
    void callback2();
    void connect();
};

void Tool::connect()
{
    void* object = getContext(context)->getObject();
    Binder binder;

    binder.method = &Tool::callback1;
    binder.object = this;

    {
        Function function(binder);
        connection1 = signal1.connect(
            object ? static_cast<char*>(object) + 0x14 : 0,
            function, 10);
    }

    binder.method = &Tool::callback2;
    binder.object = this;

    {
        Function function(binder);
        connection2 = signal2.connect(
            object ? static_cast<char*>(object) + 0x14 : 0,
            function, 10);
    }
}
