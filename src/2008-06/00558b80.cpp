// from server: 68% by king_originala
extern "C" void (__cdecl * const invalid_parameter_noinfo)();

struct Bounds {
    unsigned char padding[16];
    void* end;
};

struct Proxy {
    Bounds* container;
};

struct Node {
    Node* next;
};

struct Result {
    unsigned char padding[4];
    Node* first;
    Node* last;
};

struct Context {
    unsigned char padding[8];
};

struct Item {
    Node* process(Context* context, int flag);
};

struct CheckedRange {
    Proxy* proxy;
    unsigned char padding[8];
    Item** first;
    Item** last;
};

struct IteratorState {
    unsigned char padding[8];
    CheckedRange range;
};

struct Iterator {
    Proxy* owner;
    Item** current;

    __forceinline Iterator(CheckedRange* range, bool finish);
    __forceinline bool equal(const Iterator& other) const;
    __forceinline Bounds* bounds() const;
    __forceinline Item* get() const;
    __forceinline void advance();
};

__forceinline Iterator::Iterator(CheckedRange* range, bool finish)
{
    if (finish) {
        current = range->last;
        if (range->first > current)
            invalid_parameter_noinfo();
    } else {
        current = range->first;
        if (current > range->last)
            invalid_parameter_noinfo();
    }
    owner = range->proxy;
}

__forceinline bool Iterator::equal(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return current == other.current;
}

__forceinline Bounds* Iterator::bounds() const
{
    if (owner)
        return owner->container;
    invalid_parameter_noinfo();
    return 0;
}

__forceinline Item* Iterator::get() const
{
    if (current >= bounds()->end)
        invalid_parameter_noinfo();
    return *current;
}

__forceinline void Iterator::advance()
{
    if (current >= bounds()->end)
        invalid_parameter_noinfo();
    ++current;
}

struct Prefix {
    unsigned char padding[20];
};

struct S : Prefix, Context {
    IteratorState* state;

    void collect(Result* result);
};

void S::collect(Result* result)
{
    Iterator current(&state->range, false);
    for (;;) {
        Iterator last(&state->range, true);
        if (current.equal(last))
            break;

        Item* item = current.get();
        Node* node = item->process(static_cast<Context*>(this), 0);
        if (node) {
            if (!result->last)
                result->first = node;
            else
                result->last->next = node;
            result->last = node;
        }
        current.advance();
    }
}
