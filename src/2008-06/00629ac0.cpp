// from server: 81% by king_originala
struct Signal {
    void emit(float*);
};

struct Connection {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Connection* find(void*);
};

struct S {
    char padding[0x144];
    float threshold;
    bool flag;

    void notify(void*);
    void f(int, float);
};

extern "C" bool __cdecl check(S*, int);

void S::f(int, float value)
{
    if (threshold > value) {
        flag = !flag;
        notify(reinterpret_cast<void*>(0x97bf64));
        if (check(this, 1)) {
            Connection* connection =
                reinterpret_cast<Registry*>(0x97bf80)->find(padding + 0x14);
            if (connection)
                connection->signal.emit(&value);
        }
    }
}
