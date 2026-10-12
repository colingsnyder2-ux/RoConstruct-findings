// from server: 49% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Map;
struct Value;

struct Owner {
    Map *map;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    unsigned int padding;
};

struct String {
    void *data;
    String &assign(const String &);
};

struct Value {
    unsigned int padding;
    unsigned int key;
    unsigned int reserved;
    unsigned int kind;
    unsigned int present;
    String text;
    void *first;
    unsigned char gap[20];
    void **last;
};

struct Iterator {
    Owner *owner;
    Node *node;

    Value *get() const;
    bool equal(const Iterator &) const;
    void advance();
    void finish();
};

struct __declspec(align(8)) Result {
    unsigned char data[8];
};

struct Map {
    Owner *owner;
    unsigned char padding[20];
    Node *head;

    Iterator *find(Iterator *, const unsigned int *);
    Iterator *erase(Iterator *, Iterator);
    Iterator *insert(Iterator *, const Value *);
    void merge(Map *);
};

extern void __cdecl operation();
extern Result *__cdecl copy_values(
    Result *, void *, void *, void *, void **,
    void (__cdecl *)(), Value *);

Value *Iterator::get() const
{
    Map *m;
    if (!owner)
        _invalid_parameter_noinfo();
    m = owner ? owner->map : 0;
    if (node == m->head)
        _invalid_parameter_noinfo();
    return reinterpret_cast<Value *>(
        reinterpret_cast<unsigned char *>(node) + 16);
}

bool Iterator::equal(const Iterator &other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return node == other.node;
}

void Map::merge(Map *source)
{
    Iterator current;
    Iterator stop;
    current.owner = source->owner;
    current.node = source->head->left;
    stop.owner = source->owner;
    stop.node = source->head;

    while (!current.equal(stop)) {
        Value *value = current.get();
        unsigned int key = value->key;
        Iterator found;
        find(&found, &key);

        Iterator end;
        end.owner = owner;
        end.node = head;

        Value *destination = 0;
        if (!found.equal(end))
            destination = found.get();

        if (destination) {
            if (value->kind == 3) {
                unsigned int eraseKey = value->key;
                Iterator position;
                Iterator result;
                find(&position, &eraseKey);
                erase(&result, position);
            } else {
                if (value->present) {
                    destination->present = value->present;
                    destination->text.assign(value->text);
                }
                Result result;
                copy_values(&result, value->first, *value->last,
                            value->first, value->last,
                            operation, destination);
            }
        } else {
            Iterator result;
            insert(&result, value)->finish();
        }
        current.advance();
    }
}
