// from server: 75% by king_originala
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
    StringIterator(String*, char*);
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
};

struct Result
{
    StringIterator first;
    StringIterator last;
    bool flag;

    Result(String*, char*, String*, char*, bool);
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

    TreeIterator* find(TreeIterator*, const char&);
    Result f(StringIterator first, StringIterator last);
};

inline StringIterator::StringIterator()
{
}

inline StringIterator::StringIterator(String* s, char* p)
    : owner(s), position(p)
{
}

inline Result::Result(String* a, char* b, String* c, char* d, bool e)
    : first(a, b), last(c, d), flag(e)
{
}

Result S::f(StringIterator first, StringIterator last)
{
    StringIterator found = find_match(first, last, Predicate(this));
    String* foundOwner = found.owner;

    if (foundOwner != reinterpret_cast<String*>(-4) &&
        (!foundOwner || foundOwner != last.owner))
        _invalid_parameter_noinfo();

    if (found.position == last.position)
        return Result(last.owner, last.position,
                      last.owner, last.position, false);

    StringIterator scan(foundOwner, found.position);
    String* scanOwner = scan.owner;

    if (single == 0)
    {
        for (;;)
        {
            char* scanPosition = scan.position;

            if (scanOwner != reinterpret_cast<String*>(-4) &&
                (!scanOwner || scanOwner != last.owner))
                _invalid_parameter_noinfo();

            if (scanPosition == last.position)
                break;

            if (scanOwner != reinterpret_cast<String*>(-4))
            {
                if (!scanOwner)
                    _invalid_parameter_noinfo();

                char* data = scanOwner->capacity >= 16
                    ? scanOwner->pointer : scanOwner->buffer;

                if (scanPosition >= data + scanOwner->length)
                    _invalid_parameter_noinfo();
            }

            char key = *scanPosition;
            Node* endNode = sentinel;
            void* treeOwner = owner;
            TreeIterator temporary;
            TreeIterator* entry = find(&temporary, key);

            if (!entry->owner || entry->owner != treeOwner)
                _invalid_parameter_noinfo();

            if (entry->position == endNode)
                break;

            if (scanOwner != reinterpret_cast<String*>(-4))
            {
                if (!scanOwner)
                    _invalid_parameter_noinfo();

                char* data = scanOwner->capacity >= 16
                    ? scanOwner->pointer : scanOwner->buffer;

                if (scan.position >= data + scanOwner->length)
                    _invalid_parameter_noinfo();
            }

            ++scan.position;
        }
    }
    else
    {
        ++scan;
        scanOwner = scan.owner;
    }

    return Result(foundOwner, found.position,
                  scanOwner, scan.position, false);
}
