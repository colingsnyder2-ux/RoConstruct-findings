// from server: 61% by king_originala
typedef unsigned long Word;

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
};

struct Iterator
{
    void* proxy;
    Node* node;
};

struct Tree
{
    void* proxy;
    char padding[20];
    Node* head;
    Word size;
    void destroy(Node*);
};

struct Sequence
{
    void* proxy;
    Word reserved[2];
    Word first;
    Word last;
    Word capacity;
    void erase(Iterator*, void*, Word, void*, Word);
};

struct Event
{
    char storage[0xdc];
    void clear();
};

struct Object
{
    void* primary();
    void* first();
    void* second();
    void* third();
    void* fourth();
    void* fifth();
    void* sixth();
};

struct Listener;
struct ListenerTable
{
    void (__thiscall* slots[60])(Listener*, void*);
};

struct Listener
{
    ListenerTable* table;
};

extern "C" void __cdecl release_value(void*);
extern "C" void __cdecl clear_nodes(
    Iterator*, Iterator, Iterator, void (__cdecl*)(void*), Word);
extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct ClientProxy
{
    char prefix[0x2c38];
    Tree tree;
    Sequence sequence;
    void* cached;
    Event event;
    Listener* listener;

    void reset(Word, Object*);
    void set_primary(void*);
    void attach(void*, bool);
};

void ClientProxy::reset(Word, Object* object)
{
    Iterator result;
    Word cookie = reinterpret_cast<Word>(result.node);
    Tree* t = &tree;
    Iterator begin;
    Iterator end;
    begin.proxy = t->proxy;
    begin.node = t->head->left;
    end.proxy = t->proxy;
    end.node = t->head;

    clear_nodes(&result, begin, end, release_value, cookie);

    t->destroy(t->head->parent);
    t->head->parent = t->head;
    t->size = 0;
    t->head->left = t->head;
    t->head->right = t->head;

    event.clear();

    Sequence* s = &sequence;
    Word last = s->last;
    if (s->first > last)
        invalid_parameter_noinfo();

    Word first = s->first;
    void* proxy = s->proxy;
    if (first > s->last)
        invalid_parameter_noinfo();

    s->erase(&result, s->proxy, first, proxy, last);

    set_primary(object ? object->primary() : 0);

    if (object)
    {
        void* value = object->first();
        attach(value, true);
        value = object->second();
        attach(value, false);
        value = object->third();
        attach(value, false);
        value = object->fourth();
        attach(value, false);
        value = object->fifth();
        cached = value;
        attach(value, false);
        value = object->sixth();
        attach(value, false);
    }
    else if (listener)
    {
        listener->table->slots[59](listener, prefix + 0x2b74);
        listener = 0;
    }
}
