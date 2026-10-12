// from server: 88% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string& operator=(const T*);
    };
}

struct S;

struct Record {
    char padding[0x24];
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > name;

    Record(S*);
    bool empty();
};

struct Iterator {
    void* owner;
    void* node;

    Iterator& operator++();
};

struct History {
    void* owner;
    char padding[0x10];
    void* head;
    char tail[4];

    void append(Record**);
};

struct S {
    char padding[0x134];
    Record* current;
    History history;
    Iterator position;
    Iterator nextPosition;
    char reserved;
    bool enabled;

    void prepare();
    void commit(const char*);
};

void S::commit(const char* name)
{
    if (enabled) {
        prepare();
        if (current && !current->empty()) {
            current->name = name;
            history.append(&current);

            position.owner = history.owner;
            position.node = history.head;

            Iterator iterator;
            iterator.owner = history.owner;
            iterator.node = history.head;
            nextPosition = ++iterator;

            current = new Record(this);
        }
    }
}
