// from server: 65% by colin
struct Link {
    unsigned int parent;
    Link* left;
    Link* right;
};

struct Node {
    unsigned int reserved[2];
    unsigned int key;
    char padding[0x280 - 12];
    Link link;
};

struct Flag {
    bool value;
};

struct Receiver {
    bool find(unsigned int* key, Node** position, Flag flag);
    Node* insert(unsigned int* key, Node* node);
    Node* receive(unsigned int* key, Node* node);
};

extern "C" void __cdecl sub_4C6980(Node* a, Node* b, Node* c, Node* d);

Node* Receiver::receive(unsigned int* key, Node* node)
{
    char* base = this ? reinterpret_cast<char*>(this) - 12 : 0;
    unsigned int* savedKey = key;

    Flag flag;
    flag.value = false;
    key = reinterpret_cast<unsigned int*>(base + 8);
    if (!find(savedKey, reinterpret_cast<Node**>(&key), flag))
    {
        Node* result = reinterpret_cast<Node*>(key);
        if (result)
            return reinterpret_cast<Node*>(reinterpret_cast<char*>(result) - 0x280);
        return 0;
    }

    Node* result = insert(savedKey, node);
    if (result == node)
    {
        Node* a = this ? reinterpret_cast<Node*>(reinterpret_cast<char*>(this) - 12) : 0;
        Node* b = a ? *reinterpret_cast<Node**>(reinterpret_cast<char*>(a) + 4) : 0;
        Node* c = b ? reinterpret_cast<Node*>(reinterpret_cast<char*>(b) + 0x280) : 0;
        Node* d = node ? reinterpret_cast<Node*>(reinterpret_cast<char*>(node) + 0x280) : 0;
        sub_4C6980(d, reinterpret_cast<Node*>(key), c, 0);
    }
    return result;
}
