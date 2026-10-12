// from server: 90% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Input {
    unsigned int data[6];
};

struct Holder {
    char data[40];
    Holder();
};

struct Owner {
    void* object;
    void* control;

    Owner() : object(0), control(0) {}
    ~Owner();
    void set(Holder*);
};

struct Callback {
    void* object;

    Callback(Input value) : object(0) { assign(value); }
    ~Callback();
    void assign(const Input&);
};

struct Tool : Owner {
    Callback callback;

    Tool(const Input&);
    void finish();
};

Tool::Tool(const Input& value) : callback(value) {
    set(new Holder);
    finish();
}
