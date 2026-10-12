// from server: 95% by king_originala
namespace std {
    template<class C> struct char_traits;
    template<class C, class T> struct basic_streambuf;
}

typedef std::basic_streambuf<char, std::char_traits<char> > Buffer;
extern int (__thiscall *pubsync)(Buffer*);

struct VirtualBase {
    virtual ~VirtualBase();
    char padding[36];
    Buffer* buffer;
};

struct Root {
    virtual ~Root();
    unsigned char** state;
};

struct Base : Root, virtual VirtualBase {
    virtual ~Base();
};

struct StreamBuffer : Base {
    virtual ~StreamBuffer();
};

StreamBuffer::~StreamBuffer()
{
    if ((*state)[44] & 1)
        pubsync(buffer);
}
