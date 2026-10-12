// from server: 71% by king_originala
struct Listener {
    void *value;
};

struct FirstListener : Listener {};
struct SecondListener : Listener {};

struct Padding {
    char bytes[0x144];
};

struct Signal {
    void disconnect(Listener *);
    void connect(Listener *);
};

struct Endpoint {
    char padding[0x130];
    Signal signal;
};

struct Source {
    Endpoint *first();
    Endpoint *second();
};

struct S : Padding, SecondListener, FirstListener {
    Endpoint *firstEndpoint;
    Endpoint *secondEndpoint;

    void update(void *, Source *);
};

void S::update(void *, Source *source)
{
    Listener *listener = static_cast<FirstListener *>(this);
    if (firstEndpoint)
        firstEndpoint->signal.disconnect(listener);

    listener = static_cast<SecondListener *>(this);
    if (secondEndpoint)
        secondEndpoint->signal.disconnect(listener);

    firstEndpoint = source ? source->first() : 0;
    secondEndpoint = source ? source->second() : 0;

    listener = &static_cast<FirstListener &>(*this);
    if (firstEndpoint)
        firstEndpoint->signal.connect(listener);

    listener = &static_cast<SecondListener &>(*this);
    if (secondEndpoint)
        secondEndpoint->signal.connect(listener);
}
