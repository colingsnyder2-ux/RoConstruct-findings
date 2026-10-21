typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Body {
    char padding[68];
    int stamp;
    int state;
};

struct Tree;

struct TreeProxy {
    Tree* owner;
};

struct Node {
    Node* first;
    char padding[8];
    Body* body;
};

struct Tree {
    TreeProxy* proxy;
    char padding[20];
    Node* head;
};

struct Iterator {
    void* proxy;
    unsigned long word;
    void advance();
    Body*& value();
};

struct Queue;

struct QueueProxy {
    Queue* owner;
    QueueProxy(Queue*);
};

inline QueueProxy::QueueProxy(Queue* p) : owner(p) {}

struct QueueBase {
    QueueProxy* proxy;
    char padding[12];
    QueueBase(Queue*);
    ~QueueBase();
};

inline QueueBase::QueueBase(Queue* p) : proxy(new QueueProxy(p)) {}

inline QueueBase::~QueueBase()
{
    operator delete(proxy);
}

struct Queue : QueueBase {
    Body*** map;
    unsigned int mapSize;
    unsigned int offset;
    unsigned int count;

    Queue();
    ~Queue();
    void append(Body* const&);
    void clear();
};

inline Queue::Queue()
    : QueueBase(this), map(0), mapSize(0), offset(0), count(0) {}

inline Queue::~Queue()
{
    clear();
}

struct Stage {
    char padding[472];
    int stamp;
    unsigned char active;

    void process(Body*, Queue*, void*);
    void f(Tree*, void*, void*);
};

void Stage::f(Tree* tree, void* context, void*)
{
    Queue queue;
    ++stamp;

    Iterator iterator;
    iterator.word = reinterpret_cast<unsigned long>(tree->head->first);
    iterator.proxy = tree->proxy;

    for (;;) {
        Node* end = tree->head;
        TreeProxy* owner = tree->proxy;
        TreeProxy* proxy = reinterpret_cast<TreeProxy*>(iterator.proxy);
        if (!proxy || proxy != owner)
            _invalid_parameter_noinfo();
        if (reinterpret_cast<Node*>(iterator.word) == end)
            break;

        Tree* container;
        if (!proxy) {
            _invalid_parameter_noinfo();
            container = reinterpret_cast<Tree*>(proxy);
        } else {
            container = proxy->owner;
        }
        if (reinterpret_cast<Node*>(iterator.word) == container->head)
            _invalid_parameter_noinfo();

        Body* body = reinterpret_cast<Node*>(iterator.word)->body;
        body->stamp = stamp;
        body->state = 0;
        queue.append(body);
        iterator.advance();
    }

    while (queue.count) {
        unsigned int first = queue.offset;
        if (first > first + queue.count)
            _invalid_parameter_noinfo();

        iterator.proxy = queue.proxy;
        iterator.word = first;
        Body* body = iterator.value();

        if (queue.count) {
            ++queue.offset;
            if (queue.mapSize * 4 <= queue.offset)
                queue.offset = 0;
            if (--queue.count == 0)
                queue.offset = 0;
        }

        process(body, &queue, context);
        body->state = -1;
    }

    active = 0;
}
