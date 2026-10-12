// from server: 79% by king_originala




namespace std {
template<class C> struct char_traits;
template<class C, class T> struct basic_streambuf;

struct ios_base {
    ios_base();
    virtual ~ios_base();
};

template<class C, class T> struct basic_ios : ios_base {
    basic_ios();
    virtual ~basic_ios();
};

template<class C, class T> struct basic_istream : virtual basic_ios<C, T> {
    int count;
    basic_istream(basic_streambuf<C, T> *, bool);
    virtual ~basic_istream();
};

inline ios_base::ios_base() {}

template<class C, class T>
inline basic_ios<C, T>::basic_ios() {}
}

typedef std::basic_ios<char, std::char_traits<char> > IOS;
typedef std::basic_istream<char, std::char_traits<char> > IStream;

struct State {
    char reserved[28];
    void *owner;
};

struct ChainStorage {
    State *state;
    unsigned int spare;
    ChainStorage();
    ~ChainStorage();
};

struct ChainBase : virtual IOS {
    ChainStorage *storage;
    ChainBase();
    ~ChainBase();
};

inline ChainBase::ChainBase() : storage(0) {}

struct S : ChainBase, IStream {
    ChainStorage chain;
    S();
    virtual ~S();
};

S::S() : IStream(0, false)
{
    storage = &chain;
    chain.state->owner = this;
}
