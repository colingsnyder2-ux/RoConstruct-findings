// from server: 92% by colin
//

struct Source
{
    char padding[20];
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

typedef void (Tool::*MemberFunction)();

struct Callback
{
    MemberFunction function;
    int adjustment;
    int virtualAdjustment;
    int reserved;

    Callback(MemberFunction);
};

struct Bound
{
    Callback callback;
    Tool* object;
    int reserved;

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

struct Signal
{
    Connection connect(void*, const Function&, int);
};

extern Signal signalFirst;
extern Signal signalSecond;

inline Callback::Callback(MemberFunction f)
    : function(f), adjustment(0), virtualAdjustment(0)
{
}

inline Bound::Bound(Callback f, Tool* p)
    : callback(f), object(p)
{
}

void Tool::connectSignals()
{
    void* endpoint = 0;

    {
        Function function(Bound(Callback(&Tool::firstCallback), this));
        firstConnection = signalFirst.connect(
            source ? reinterpret_cast<char*>(source) + 20 : endpoint,
            function, 10);
    }

    {
        Function function(Bound(Callback(&Tool::secondCallback), this));
        if (source)
            endpoint = reinterpret_cast<char*>(source) + 20;
        secondConnection = signalSecond.connect(endpoint, function, 10);
    }
}
