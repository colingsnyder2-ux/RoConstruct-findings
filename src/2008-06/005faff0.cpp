// from server: 86% by king_originala
struct Node {
    int tag;
    int index;
    int references;
    int reserved;
    Node* parent;
};

struct Source;

struct SourceTable {
    void* reserved[4];
    Node* (__thiscall* get)(Source*, int);
};

struct Source {
    SourceTable* table;
};

struct NodeList {
    Node** data;
    int size;
    int capacity;

    void append(Node* const& node);
};

struct Sink {
    unsigned char reserved[12];
    NodeList nodes;

    void collect(Source* source);
};

void Sink::collect(Source* source)
{
    Source* input = source;
    for (int i = 0; i < 2; ++i) {
        Node* node = input->table->get(input, i);
        if (node) {
            Node* parent = node->parent;
            ++node->references;
            if (parent->tag != -1 &&
                node != parent &&
                node->index < 0) {
                source = reinterpret_cast<Source*>(node);
                node->index = nodes.size;
                nodes.append(reinterpret_cast<Node* const&>(source));
            }
        }
    }
}
