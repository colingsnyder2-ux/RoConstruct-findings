// from server: 64% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Service {
    void clear();
    void set(void*);
};

struct Context {
    int owner;
    void* object;
    Control* control;

    Service* get(int);
    ~Context();
};

__forceinline Context::~Context() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Value {
    char data[28];
    ~Value();
};

__forceinline Value::~Value() {
}

struct Receiver {
    void consume(const Value&);
};

struct Worker {
    bool active();
    void stop();
};

struct String {
    int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    const char* c_str() const;
};

__forceinline const char* String::c_str() const {
    return capacity < 16 ? storage.buffer : storage.pointer;
}

struct Name {
    int prefix;
    String text;
};

namespace RBX {
    void handle(int, int);
}

struct S {
    virtual Name* name();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void finish();

    char padding0[20];
    int owner;
    Receiver* receiver;
    Worker* worker;
    void* item;
    char padding1[12];
    bool dragging;

    Value make(int);
    int run(int);
};

int S::run(int argument) {
    if (dragging) {
        if (worker->active())
            receiver->consume(make(argument));

        worker->stop();
        dragging = false;
        RBX::handle(reinterpret_cast<int>(name()->text.c_str()), owner);
    } else if (item) {
        Context context;
        context.owner = owner;
        context.object = 0;
        context.control = 0;
        context.get(1)->clear();
        Service* service = context.get(1);
        service->set(item);
    }

    finish();
    return 0;
}
