// from server: 85% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

namespace std {
template<class T> struct char_traits;
template<class T> struct allocator;
template<class T, class Traits, class Alloc> class basic_string;

template<> class basic_string<char, char_traits<char>, allocator<char> > {
    unsigned char storage[28];
public:
    basic_string(const char*);
    ~basic_string();
};

typedef basic_string<char, char_traits<char>, allocator<char> > string;

class exception {
    void* message;
    int owned;
public:
    virtual ~exception();
};

class logic_error : public exception {
    string text;
public:
    logic_error(const string&);
    virtual ~logic_error();
};
}

struct Pipe {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual void slot7() = 0;
    virtual void slot8() = 0;
    virtual void slot9() = 0;
    virtual void slot10() = 0;
    virtual void slot11() = 0;
    virtual void slot12() = 0;
    virtual void slot13() = 0;
    virtual void connect(Pipe*) = 0;
};

struct Callback {
    virtual void slot0() = 0;
    virtual void notify() = 0;
};

struct Buffer {
    unsigned char storage[184];
    Buffer(void*, int, int);
    ~Buffer();
};

struct Link {
    Link* next;
    Link* previous;
    Buffer* value;
};

struct Chain {
    unsigned char prefix[20];
    Link* sentinel;
    int count;
    Callback* callback;
    unsigned char middle[8];
    int bufferSize;
    unsigned char flags;

    Pipe** last();
    Link* insert(Link*, Link*, Buffer* const*);
    void complete(bool);
};

struct Owner {
    Buffer* pointer;
    explicit Owner(Buffer* p) : pointer(p) {}
    ~Owner() {
        if (pointer)
            delete pointer;
    }
};

struct S {
    Chain* chain;
    void f(void*, int, int);
};

void S::f(void* source, int size, int bufferSize)
{
    if (chain->flags & 1) {
        std::string message("chain complete");
        throw std::logic_error(message);
    }

    Pipe* previous = chain->count ? *chain->last() : 0;

    if (size == -1)
        size = 128;
    if (bufferSize == -1)
        bufferSize = chain->bufferSize;

    Owner owner(new Buffer(source, size, bufferSize));

    Chain* current = chain;
    Link* sentinel = current->sentinel;
    size = reinterpret_cast<int>(owner.pointer);
    Link* inserted = current->insert(
        sentinel, sentinel->previous,
        reinterpret_cast<Buffer* const*>(&size));
    current->complete(true);
    sentinel->previous = inserted;
    inserted->previous->next = inserted;
    owner.pointer = 0;

    if (previous)
        previous->connect(*chain->last());

    if (chain->callback)
        chain->callback->notify();
}
