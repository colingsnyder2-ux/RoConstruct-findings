// from server: 72% by king_originala
struct Peer {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual int average(unsigned int, unsigned int);
    virtual int current(unsigned int, unsigned int);
    virtual int best(unsigned int, unsigned int);
};

struct Connection {
    char padding0[0x2b70];
    unsigned int value;
    char padding1[0x1dc];
    Peer *peer;
    unsigned int argument1;
    unsigned int argument2;
};

struct Counters {
    char padding0[0x5c];
    unsigned int numerator;
    char padding1[0x18];
    unsigned int denominator;
};

struct Value {
    void setValue(const unsigned int *);
    void setValue(unsigned int);
};

extern void __cdecl report(Value *, double, const char *, ...);

struct StatsItem {
    char padding0[0x158];
    Value *first;
    Value *percentage;
    Value *latency;
    Value *rate;
    Connection *connection;
    char padding1[4];
    Counters *counters;
    unsigned int divisor;
    unsigned int total;

    void update();
};

void StatsItem::update()
{
    if (connection->peer) {
        Connection *c = connection;
        Peer *p = c->peer;

        report(latency,
               (double)p->current(c->argument1, c->argument2),
               "%d avg:%d best:%d",
               p->current(c->argument1, c->argument2),
               p->average(c->argument1, c->argument2),
               p->best(c->argument1, c->argument2));

        unsigned int value = connection->value;
        first->setValue(&value);

        double numerator = (double)counters->numerator;
        value = counters->denominator;
        double ratio = numerator / (double)value;
        report(percentage, ratio, "%.1g%%", ratio * 100.0);

        rate->setValue(divisor ? total / (divisor * 8) : 0u);
    }
}
