// from server: 86% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct ContainerBase {
    ContainerBase** proxy;
    unsigned int reserved[2];

    ContainerBase();
    ~ContainerBase();
};

struct Container {
    ContainerBase base;
    void* first;
    void* last;
    void* end;

    Container();
    ~Container();
};

struct ScoreHud {
    Container firstContainer;
    Container secondContainer;

    ScoreHud();
};

inline ContainerBase::ContainerBase()
    : proxy(new ContainerBase*(this))
{
}

inline Container::Container()
    : first(0), last(0), end(0)
{
}

ScoreHud::ScoreHud()
{
}
