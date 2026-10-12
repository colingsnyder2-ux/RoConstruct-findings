// from server: 76% by king_originala
struct Tool;
typedef void (Tool::*Callback)();

struct Bound
{
    Callback callback;
    Tool* object;

    Bound(Callback, Tool*);
};

struct Function
{
    union
    {
        double alignment;
        char storage[40];
    };

    Function(const Bound&);
    ~Function();
};

struct Connection
{
    char storage[16];
    ~Connection();
};

struct ConnectionSlot
{
    char storage[20];
    ConnectionSlot& operator=(const Connection&);
};

struct Source
{
    char padding[20];
};

struct Signal
{
    Connection connect(void*, const Function&, int);
};

extern Signal signalFirst;
extern Signal signalSecond;

struct Tool
{
    char padding0[0x104];
    Source* source;
    char padding1[0x110];
    ConnectionSlot firstConnection;
    ConnectionSlot secondConnection;

    void firstCallback();
    void secondCallback();
    void connectSignals();
};

inline Bound::Bound(Callback f, Tool* p) : callback(f), object(p)
{
}

void Tool::connectSignals()
{
    {
        Function function(Bound(&Tool::firstCallback, this));
        firstConnection = signalFirst.connect(
            source ? reinterpret_cast<char*>(source) + 20 : 0,
            function, 10);
    }

    {
        Function function(Bound(&Tool::secondCallback, this));
        secondConnection = signalSecond.connect(
            source ? reinterpret_cast<char*>(source) + 20 : 0,
            function, 10);
    }
}
