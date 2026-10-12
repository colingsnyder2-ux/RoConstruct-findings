// from server: 42% by king_originala
struct Node {
    Node* next;
};

struct Iterator {
    Node* owner;
    Node* position;
};

struct Result {
    void* value;
    Result();
};

struct Empty {
    unsigned char value;
    Empty() : value(0) {}
};

struct Range {
    Node* owner;
    unsigned char padding[20];
    Node* endNode;

    Iterator begin();
    Iterator end();
    Result erase(Iterator first, Iterator last);
    void assign(const Range* other);
};

inline Iterator Range::begin()
{
    Iterator result;
    result.position = endNode->next;
    result.owner = owner;
    return result;
}

inline Iterator Range::end()
{
    Iterator result;
    result.position = endNode;
    result.owner = owner;
    return result;
}

struct Helper {
    void* get(int mode);
};

Result difference(Iterator first1, Iterator last1,
                  Iterator first2, Iterator last2,
                  void* output, Empty predicate);

struct S {
    unsigned char padding[28];
    Helper helper;
    unsigned char gap[20];
    Range range;

    void f(Range* other);
};

void S::f(Range* other)
{
    void* output = helper.get(1);
    Range* r = &range;
    {
        Iterator first2 = r->begin();
        Iterator first1 = other->begin();
        difference(first1, other->end(), first2, r->end(),
                   output, Empty());
    }

    output = helper.get(1);
    {
        Iterator first1 = r->begin();
        Iterator first2 = other->begin();
        difference(first1, r->end(), first2, other->end(),
                   output, Empty());
    }

    if (r != other) {
        r->erase(r->begin(), r->end());
        r->assign(other);
    }
}
