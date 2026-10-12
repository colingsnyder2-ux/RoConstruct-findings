// from server: 76% by king_originala
struct Human {
    char padding[20];
    char key;
};

struct Sink {
    void update(Human* const*, int);
};

struct Node {
    char padding[16];
    Sink sink;
};

struct Lookup {
    Node* find(void*);
};

extern Lookup lookup;

struct Primary {
    virtual void primary();
};

struct Secondary {
    virtual void secondary();
};

struct Base : Primary, Secondary {
    Base(Human*);
    ~Base();
    void set(int);
};

struct Seated : Base {
    Seated(Human*);
    virtual void primary();
    virtual void secondary();
};

Seated::Seated(Human* const human) : Base(human)
{
    Node* node = lookup.find(human ? &human->key : 0);
    if (node)
        node->sink.update(&human, 1);
    set(1);
}
