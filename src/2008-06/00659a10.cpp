// from server: 45% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" int __cdecl compareObjects(void*, void*);

struct Key {
    int a, b, c;
};

struct Node {
    unsigned short children[8];
    unsigned short level;
    unsigned char mask;
    char padding[9];
    Key key;
    Node* next;
};

struct Link {
    void* object;
    Link* next;
    char padding[12];
    Key key;
};

struct Entry {
    Link* node;
    unsigned int value;
};

struct Level {
    char padding[12];
    Entry* begin;
    Entry* end;
    Entry* capacity;
};

struct Receiver {
    void accept(void*, void*);
};

struct S {
    char padding[8];
    Receiver* receiver;
    Level levels[1];

    Node* find(unsigned int, unsigned int, Key*);
    void f(Node*, void*);
};

void S::f(Node* node, void* object)
{
    int x = node->key.a * 2;
    int y = node->key.b * 2;
    int z = node->key.c * 2;

    for (int i = 0; i < 8; ++i) {
        unsigned char bit = 1;
        bit <<= i;
        if (node->mask & bit) {
            unsigned int index = node->children[i];
            Key key;
            key.a = x + (i & 1);
            key.b = y + ((i >> 1) & 1);
            key.c = z + ((i >> 2) & 1);

            Level* level = &levels[node->level - 1];
            if (index >= (unsigned int)(level->end - level->begin))
                invalid_parameter_noinfo();

            Link* link = level->begin[index].node;
            while (link) {
                void* other = link->object;
                if (other != object &&
                    link->key.a == key.a &&
                    link->key.b == key.b &&
                    link->key.c == key.c &&
                    compareObjects(object, other) == 0)
                    receiver->accept(object, other);
                link = link->next;
            }

            if (node->level > 1)
                f(find(node->level - 1, node->children[i], &key), object);
        }
    }
}
