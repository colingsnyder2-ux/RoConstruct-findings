// from server: 69% by king_originala
struct Seat;
typedef void (Seat::*SeatMethod)();

struct BoundMethod {
    SeatMethod method;
    Seat* object;
    BoundMethod(SeatMethod, Seat*);
};

inline BoundMethod::BoundMethod(SeatMethod m, Seat* p)
    : method(m), object(p)
{
}

struct Function {
    union {
        double alignment;
        char storage[40];
    };
    Function(const BoundMethod&);
    ~Function();
};

struct Connection {
    char storage[16];
    void disconnect();
    Connection& operator=(const Connection&);
    ~Connection();
};

struct Manager {
    Connection create(void*, const Function&, int);
};

extern Manager manager;

struct Seat {
    char storage[0x3e8];
    Connection connection;
    void callback();
    void update(int, int);
};

void Seat::update(int disconnectFirst, int connectNow)
{
    if (disconnectFirst)
        connection.disconnect();

    if (connectNow) {
        BoundMethod bound(&Seat::callback, this);
        Function function(bound);
        connection = manager.create(
            this ? static_cast<void*>(reinterpret_cast<char*>(this) + 0x14) : 0,
            function, 10);
    }
}
