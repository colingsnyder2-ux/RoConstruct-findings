// from server: 42% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct String
{
    unsigned int link;
    union
    {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct StringIterator
{
    String* owner;
    char* position;

    StringIterator();
    StringIterator& operator++();
};

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    signed char key;
    unsigned char color;
    unsigned char nil;
};

struct TreeIterator
{
    void* owner;
    Node* position;

    TreeIterator();
};

struct Result
{
    StringIterator first;
    StringIterator last;
    bool flag;
};

struct S;

struct Predicate
{
    unsigned char data[32];

    Predicate(const S*);
    Predicate(const Predicate&);
};

StringIterator __cdecl find_match(
    StringIterator first, StringIterator last, Predicate predicate);

struct S
{
    void* owner;
    unsigned char reserved[20];
    Node* sentinel;
    unsigned int count;
    unsigned int single;

    TreeIterator find(const char& key);
    Result f(StringIterator first, StringIterator last);
};

inline StringIterator::StringIterator()
{
}

Result S::f(StringIterator first, StringIterator last)
{
    StringIterator found = find_match(first, last, Predicate(this));

    if (found.owner != reinterpret_cast<String*>(-4) &&
        (!found.owner || found.owner != last.owner))
        _invalid_parameter_noinfo();

    Result result;

    if (found.position == last.position)
    {
        result.first = last;
        result.last = last;
        result.flag = false;
        return result;
    }

    StringIterator scan = found;

    if (single == 0)
    {
        for (;;)
        {
            if (scan.owner != reinterpret_cast<String*>(-4) &&
                (!scan.owner || scan.owner != last.owner))
                _invalid_parameter_noinfo();

            if (scan.position == last.position)
                break;

            if (scan.owner != reinterpret_cast<String*>(-4))
            {
                if (!scan.owner)
                    _invalid_parameter_noinfo();

                char* data = scan.owner->capacity >= 16
                    ? scan.owner->pointer : scan.owner->buffer;

                if (scan.position >= data + scan.owner->length)
                    _invalid_parameter_noinfo();
            }

            char key = *scan.position;
            Node* endNode = sentinel;
            void* treeOwner = owner;
            const TreeIterator& entry = find(key);

            if (!entry.owner || entry.owner != treeOwner)
                _invalid_parameter_noinfo();

            if (entry.position == endNode)
                break;

            if (scan.owner != reinterpret_cast<String*>(-4))
            {
                if (!scan.owner)
                    _invalid_parameter_noinfo();

                char* data = scan.owner->capacity >= 16
                    ? scan.owner->pointer : scan.owner->buffer;

                if (scan.position >= data + scan.owner->length)
                    _invalid_parameter_noinfo();
            }

            ++scan.position;
        }
    }
    else
    {
        ++scan;
    }

    result.first = found;
    result.last = scan;
    result.flag = false;
    return result;
}
