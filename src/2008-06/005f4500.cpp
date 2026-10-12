// from server: 95% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T, class Traits> class basic_streambuf;
}

typedef std::basic_streambuf<char, std::char_traits<char> > StreamBuffer;
extern int (__thiscall *pubsync)(StreamBuffer*);

struct Chain {
    char padding[44];
    unsigned char flags;
};

struct StreamState {
    virtual void slot();
    char padding[36];
    StreamBuffer* buffer;
};

struct ChainClient {
    virtual ~ChainClient();
    Chain** chain;
};

struct StreamBase : ChainClient, virtual StreamState {
    virtual ~StreamBase();
};

struct FilteringStream : StreamBase {
    virtual ~FilteringStream();
};

FilteringStream::~FilteringStream()
{
    if ((*chain)->flags & 1)
        pubsync(buffer);
}
