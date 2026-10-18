// from server: 95% by colin
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
    {
        Human* const* p = (Human* const*)((char*)this + 0x10);
        node->sink.update(p, 1);
    }
    set(1);
}
