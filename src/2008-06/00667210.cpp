// from server: 79% by king_originala
struct Object
{
    unsigned char padding[20];
    unsigned long part;
};

extern unsigned char table_84cdb0[];
extern unsigned char table_84cda8[];
extern unsigned char table_84cd98[];

struct Base
{
    void* table0;
    void* table4;
    unsigned char padding[152];
    void* table160;

    Base(Object*);
    ~Base();
};

struct Signal
{
    void invoke(Object**, int);
};

struct Node
{
    unsigned char padding[16];
    Signal signal;
};

struct Registry
{
    Node* lookup(void*);
};

extern Registry registry_97a348;

struct S : Base
{
    S(Object*);
};

S::S(Object* object) : Base(object)
{
    table0 = table_84cdb0;
    table4 = table_84cda8;
    table160 = table_84cd98;

    Node* node = registry_97a348.lookup(object ? &object->part : 0);
    if (node)
        node->signal.invoke(&object, 0);
}
