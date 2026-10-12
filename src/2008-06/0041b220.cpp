// from server: 91% by king_originala
struct Object {
    virtual ~Object();
};

struct Owner {
    Object* object;
    unsigned int reserved;
    ~Owner();
};

inline Owner::~Owner()
{
    if (object)
        delete object;
}

struct Header {
    unsigned int reserved[5];
    virtual ~Header();
};

inline Header::~Header()
{
}

struct Queue {
    unsigned char storage[44];
    ~Queue();
};

struct Marshaller {
    Header header;
    Queue queue;
    Owner first;
    Owner second;
    Owner third;

    ~Marshaller();
};

Marshaller::~Marshaller()
{
}
