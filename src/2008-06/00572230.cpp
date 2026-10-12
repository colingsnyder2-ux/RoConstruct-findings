// from server: 53% by king_originala
extern "C" void (__cdecl * const invalid_parameter_noinfo)();

struct Outer;
struct Inner;
struct OuterNode;
struct InnerNode;

struct OuterProxy { Outer* container; };
struct InnerProxy { Inner* container; };

struct OuterIterator {
    OuterProxy* owner;
    OuterNode* node;
    void advance();
    OuterNode* checked() const;
};

struct InnerIterator {
    InnerProxy* owner;
    InnerNode* node;
    InnerNode* checked() const;
    void advance();
};

struct Value {
    unsigned char padding[8];
    int active;
};

struct InnerNode {
    InnerNode* next;
    unsigned char padding[8];
    Value* value;
};

struct Inner {
    InnerProxy* proxy;
    unsigned char padding[16];
    InnerNode* head;
    InnerIterator* erase(InnerIterator*, InnerIterator);
};

struct OuterNode {
    OuterNode* next;
    unsigned char padding[20];
    Inner inner;
};

struct Outer {
    OuterProxy* proxy;
    unsigned char padding[60];
    OuterNode* head;
    bool removable(OuterIterator);
    OuterIterator* erase(OuterIterator*, OuterIterator);
    void cleanup();
};

__forceinline OuterNode* OuterIterator::checked() const
{
    OuterNode* p = node;
    OuterProxy* o = owner;
    Outer* container;
    if (!o) {
        invalid_parameter_noinfo();
        container = 0;
    } else {
        container = o->container;
    }
    if (p == container->head)
        invalid_parameter_noinfo();
    return p;
}

__forceinline InnerNode* InnerIterator::checked() const
{
    InnerNode* p = node;
    InnerProxy* o = owner;
    Inner* container;
    if (!o) {
        invalid_parameter_noinfo();
        container = 0;
    } else {
        container = o->container;
    }
    if (p == container->head)
        invalid_parameter_noinfo();
    return p;
}

__forceinline void InnerIterator::advance()
{
    node = checked()->next;
}

void Outer::cleanup()
{
    union InnerResult {
        double alignment;
        InnerIterator iterator;
    };
    union OuterResult {
        double alignment;
        OuterIterator iterator;
    };

    OuterIterator current;
    current.node = head->next;
    current.owner = proxy;

    for (;;) {
        OuterNode* end = head;
        OuterProxy* owner = proxy;
        if (!current.owner || current.owner != owner)
            invalid_parameter_noinfo();
        if (current.node == end)
            break;

        InnerIterator item;
        Inner* inner = &current.checked()->inner;
        item.node = inner->head->next;
        item.owner = inner->proxy;

        for (;;) {
            inner = &current.checked()->inner;
            InnerNode* innerEnd = inner->head;
            InnerProxy* innerOwner = inner->proxy;
            if (!item.owner || item.owner != innerOwner)
                invalid_parameter_noinfo();
            if (item.node == innerEnd)
                break;

            Value* value = item.checked()->value;
            if (value && value->active) {
                item.advance();
            } else {
                InnerIterator old = item;
                item.advance();
                InnerResult result;
                current.checked()->inner.erase(&result.iterator, old);
            }
        }

        if (removable(current)) {
            OuterIterator old = current;
            current.advance();
            OuterResult result;
            erase(&result.iterator, old);
        } else {
            current.advance();
        }
    }
}
