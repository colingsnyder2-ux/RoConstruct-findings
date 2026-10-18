// from server: 23% by colin
struct Result {
    unsigned char data[28];
    ~Result();
};

struct Item {
    unsigned char padding[20];
    Result value;
};

struct LockData {
    void* first;
    void* second;
    int third;
};

struct String {
    char* data;
    int size;
    int capacity;
    String();
    String(const String&);
    String& operator=(const String&);
    ~String();
};

extern "C" void __stdcall invalid_parameter_noinfo();

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    int color;
    int pad;
    Item* value;
};

struct Tree {
    Node* header;
    int size;
    Node* begin_node;
    Node* end_node;
};

struct Base {
    char pad[0x10c];
    int SetHidden(int);
};

struct S : Base {
    Tree tree;
    void Process(Item* item);
};

void S::Process(Item* item)
{
    String str;
    Node* first = tree.begin_node;
    Node* last = tree.end_node;
    bool flag = false;

    if (first != last) {
        do {
            Item* v = first->value;
            if (flag) {
                String tmp;
                tmp = *(String*)((char*)v + 0x10);
                if (!((Base*)((char*)this - 0x10c))->SetHidden(0)) {
                }
            } else {
                String tmp;
                tmp = *(String*)((char*)v + 0x10);
                ((Base*)((char*)this - 0x10c))->SetHidden(1);
            }
            flag = true;
            first = first->parent;
        } while (first != last);
    }
    ((Base*)((char*)this - 0x10c))->SetHidden(flag ? 0 : 1);
}
