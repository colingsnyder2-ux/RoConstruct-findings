// from server: 54% by king_originala
struct Result {
    void process();
};

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual Result* get();
};

struct Node {
    Node* next;
    Node* previous;
    Object* object;
};

struct S {
    unsigned char padding[36];
    Node* head;

    void run();
};

void S::run()
{
    Node* const sentinel = head;
    for (Node* node = sentinel->next; node != sentinel; node = node->next) {
        Object* const object = node->object;
        if (object->get())
            object->get()->process();
    }
}
